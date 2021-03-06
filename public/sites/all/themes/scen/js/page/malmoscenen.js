jQuery(document).ready(function($) {
  /*
   * header
   */
  // Main menu efects
  // Show main menu when clicking on main menu button
  $(document).on('click', '.main-menu-button', function() {
    $('.main-menu-button-close').css('display', 'block');
    $('.main-menu').css('display', 'block');
  });
  // Hide main menu when clicking on main menu close button
  $(document).on('click', '.main-menu-button-close', function() {
    $('.main-menu-button-close').css('display', 'none');
    $('.main-menu').css('display', 'none');
  });

  // Show About Malmöscenen page - main menu
  $(document).on('click', '.main-menu a', function() {
    var attr = $(this).attr("href");
    if (attr == "/" || attr == "#") {
      $(this).attr("href", "#");
      $('.about-malmoscenen-button').click();
    }
    $('.main-menu-button-close').click();
  });

  // Form success/error messages
  $('.form-set-error-holder').insertBefore('.date-generator-content-wrapper');


  /*
   * Content-top
   */
  // Validate tha value of email(input)
  // to efect the styling of the submit button's text color.
  $(document).bind('input propertychange', function() {
    var emailValue = $('#edit-email').val();
    if (emailValue &&
        emailValue.indexOf('@') > 0 &&
        emailValue.slice(-1) != '@' &&
        emailValue.includes('.') &&
        emailValue.slice(-1) != '.' &&
        emailValue.length >= 5)
    {
      $('.form-submit').css('color', '#FFF');
      $('.form-submit').css('box-shadow', '5px 5px rgba(0, 0, 0, 0.2)');
    }
    else{
      $('.form-submit').css('color', 'rgba(255,255,255,.2)');
      $('.form-submit').css('box-shadow', 'none');
    }
  });

  // Change placeholder text for email input
  // if the screen is smaller than 630px
  if ($(window).width() < 630) {
    $('#edit-email').attr('placeholder', 'Enter your e-mail.');
  }


  /*
   * Footer
   */
  $(document).on('click', '.about-malmoscenen-button', function() {
    $('.about-malmoscenen-underlay').css('display', 'block');
    $('.about-malmoscenen').css('display', 'block');
  });

   $(document).on('click', ".about-malmoscenen-close-button, .about-malmoscenen-underlay", function () {
    $('.about-malmoscenen-underlay').css('display', 'none');
    $('.about-malmoscenen').css('display', 'none');
  });

});