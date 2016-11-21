(function ($) {

  console.log('malmoscenen.js is ON!');

  /*
   * Footer
  */
  $(document).on('click', '.about-malmoscenen-button', function (){
    $('.about-malmoscenen-underlay').css('display', 'block');
    $('.about-malmoscenen').css('display', 'block');
  });

   $(document).on('click', ".about-malmoscenen-close-button, .about-malmoscenen-underlay", function (){
    $('.about-malmoscenen-underlay').css('display', 'none');
    $('.about-malmoscenen').css('display', 'none');
  });

}(jQuery));