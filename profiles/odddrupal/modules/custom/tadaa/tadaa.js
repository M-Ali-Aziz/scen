(function($) {

Drupal.tadaa = Drupal.tadaa || {};

/**
 * The main function that initiates everything.
 */
$(document).ready(function() {
  // Refresh the current status.
  Drupal.tadaa.refreshOverview();
  
  // Update the environment when the select changes.
  $('#tadaa-environments').change(function() {
    if ($(this).val() != '') {
      // Replace everything with a trobber.
      $('#tadaa-wrapper').html('<span class="loading"></span>');
      $.getJSON(Drupal.settings.basePath + 'tadaa/environment/set/' + $(this).val(), function(data, status) {
        if (status == 'success') {
          window.location.reload();
        }
        else {
          alert('Ett oväntat fel uppstod. Ring en vän.');
        }
      });
    }
    else {
      alert('Du måste välja en miljö.');
    }
  });
  
  // Update the email when the value changes.
  $('#tadaa-mail').focus(function() {
    $(this).parent('div').addClass('focused');  
  });
  $('#tadaa-mail').blur(function() {
    $(this).parent('div').removeClass('focused');
  });
  $('#tadaa-mail').change(function() {
    var mail = $(this).val().length > 0 ? $(this).val() : 'reset';
    var expression = /^(([^<>()[\]\\.,;:\s@\"]+(\.[^<>()[\]\\.,;:\s@\"]+)*)|(\".+\"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/
    if (mail.match(expression) || mail == 'reset') {
      $(this).attr('disabled', 'disabled');
      $(this).parent('div').removeClass('invalid');
      $.ajax({
        async: false,
        url: Drupal.settings.basePath + 'tadaa/mail/set/' + mail,
        dataType: 'json',
      });
      $(this).removeAttr('disabled');
    }
    else {
      $(this).parent('div').addClass('invalid');
    }
  });
  
  // Disable the hashtag links.
  $('#tadaa-module-state a, #tadaa-variable-state a').click(function() {
    return false;
  });
  
  // Open the module status table in a fancybox.
  $('#tadaa-module-state a').fancybox({
    onStart: function() {
      Drupal.tadaa.refreshModules();
    }
  });
  
  // Open the variable status table in a fancybox.
  $('#tadaa-variable-state a').fancybox({
    onStart: function() {
      Drupal.tadaa.refreshVariables();
    }
  });
});

/**
 * Gets the current status for the selected environment.
 */
Drupal.tadaa.refreshOverview = function() {
  if (Drupal.settings.tadaa.selected) {
    // Delete the null environment from the select list.
    $('#tadaa-environments option[value=]').remove();
    // Set the default class.
    $('#tadaa-module-state a, #tadaa-variable-state a').attr('class', Drupal.settings.tadaa.classes.loading);
    // Show the state areas.
    $('.tadaa-state-wrapper').show();
    $('.tadaa-mail-wrapper').show();
    
    // Show or hide the email field.
    if (Drupal.settings.tadaa.modules.reroute_email) {
      $('.tadaa-mail-wrapper').show();
    }
    else {
      $('.tadaa-mail-wrapper').hide();
    }
    
    // Update the state for the environment.
    $.getJSON(Drupal.settings.basePath + 'tadaa/environment/check', function(data) {
      var modulesClass = data.modules ? Drupal.settings.tadaa.classes.valid :Drupal.settings.tadaa.classes.invalid;
      $('#tadaa-module-state a').attr('class', modulesClass);
      var variablesClass = data.variables ? Drupal.settings.tadaa.classes.valid : Drupal.settings.tadaa.classes.invalid;
      $('#tadaa-variable-state a').attr('class', variablesClass);
    });
    
  }
  else {
    $('.tadaa-state-wrapper').hide();
    $('.tadaa-mail-wrapper').hide();
  }
}

/**
 * Gets the state for every individual module.
 */
Drupal.tadaa.refreshModules = function() {
  if (Drupal.settings.tadaa.selected) {
    // Set the default texts.
    $('#tadaa-module-status td.config').text('Hämtar...');
    $('#tadaa-module-status td.state').text('Jämför...');

    // Update the state for the modules.
    for (var module in Drupal.settings.tadaa.modules) {
      $.getJSON(Drupal.settings.basePath + 'tadaa/module/' + module + '/check', function(data) {
        var config = data.config ? 'Aktiverad' : 'Inaktiverad';
        var state = data.state ? 'OK' : 'FEL';
        $('#tadaa-module-status tr.' + data.module + ' td.config').text(config);
        $('#tadaa-module-status tr.' + data.module + ' td.state').text(state);
      });
    }
  }
  else {
    $('#tadaa-module-status td.config, #tadaa-module-status td.state').text('');
  }
}

/**
 * Gets the state for every individual variable.
 */
Drupal.tadaa.refreshVariables = function() {
  if (Drupal.settings.tadaa.selected) {
    // Set the default texts.
    $('#tadaa-variable-status td.config').text('Hämtar...');
    $('#tadaa-variable-status td.state').text('Jämför...');

    // Update the state for the modules.
    for (var variable in Drupal.settings.tadaa.variables) {
      $.getJSON(Drupal.settings.basePath + 'tadaa/variable/' + variable + '/check', function(data) {
        var state = data.state ? 'OK' : 'FEL';
        $('#tadaa-variable-status tr.' + data.variable + ' td.config').text(data.config);
        $('#tadaa-variable-status tr.' + data.variable + ' td.state').text(state);
      });
    }
  }
  else {
    $('#tadaa-variable-status td.config, #tadaa-variable-status td.state').text('');
  }
}

})(jQuery);