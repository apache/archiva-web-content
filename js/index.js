$(document).ready(function(){
  $('#screenshots-carousel').carousel({
    interval: 4000
  })
  
 $("#openDialogRelease" ).on("click",function(){
   $('#dialogRelease').modal('show');
 })
   
 $("#openDialogPreview" ).on("click",function(){
    $('#dialogPreview').modal('show');
  })

  $("#carousel-main" ).addClass("bs-docs-example");


});
