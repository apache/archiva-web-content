$(document).ready(function(){
 /*rel gallery_image not define for html 5 introduce by js for fancybox */
 $("a.gallery_image").attr('rel', 'gallery_image');

 $("a#single_image").fancybox({
   'transitionIn'	:	'elastic',
   'transitionOut'	:	'elastic',
   'speedIn'		:	600,
   'speedOut'		:	200,
   'overlayShow'	:	true
 });
 $("a.gallery_image").fancybox({
   'openEffect'	:	'elastic',
   'closeEffect'	:	'elastic',
   'nextEffect'	:	'elastic',
   'previousEffect'	:	'elastic',
   'nextSpeed'		:	'normal',
   'prevSpeed'		:	'normal',
   'openSpeed'      : 'normal',
   'closeSpeed'      : 'normal',
   'overlayShow'	:	true,
   'titlePosition': 'inside'
 });
});