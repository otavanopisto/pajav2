How to use Ajax links API
-----------------------------------------------------------------------------------------------------

METHOD 1 : In Admin setting page, specify the Classes/IDs to trigger Ajax. Target DIV will be default 
CSS selector defined, you can change default CSS Selector.

Example : <a class="test" href="node/add/page">Add page</a> . You can ajaxify this link by adding .test in admin setting page.



METHOD 2 : In your tpl => l_ajax($title, $path, $target)

* $title: Title to display.
* $path : Drupal path. 
* $target (optional): Class/ID of DIV in which loaded content should be displayed. Default CSS Selector 
is .region-content, you can change default CSS Selector or override target by specifying $target.

Example : l_ajax("add page","node/add/page",".region-content")



METHOD 3 : Add class="ajaxLink" to any link. Target DIV will be default CSS selector defined . You can 
change default CSS Selector or override target by specifying rel="".

Example : <a class="ajaxLink" href="node/add/page" rel=".region-content">Add page</a>



DEMO
------------------------------------------------------------------------------------------------------
Goto YOUR_SITE/ajax-links-api/test
