$(document).ready(function(){
  $('#screenshots-carousel').carousel({
    interval: 2000
  })
  
 $("#openDialogRelease" ).on("click",function(){
   $('#dialogRelease').modal('show');
 })
   
 $("#openDialogPreview" ).on("click",function(){
    $('#dialogPreview').modal('show');
  })




});
