$(document).ready(function(){
 $('#dialogRelease').modal(({keyboard: true}));
 $('#dialogPreview').modal(({keyboard: true}));
  
 $("#openDialogRelease" ).on("click",function(){
   $('#dialogRelease').modal('show');
 })
   
 $("#openDialogPreview" ).on("click",function(){
    $('#dialogPreview').modal('show');
  })


});
