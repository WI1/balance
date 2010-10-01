This module allows user to edit the contents of a fieldgroup without having to leave the node 
view page.  The administrator can configure any fieldgroup to show a link that allows the form 
elements inside that fieldgroup to be editing in a modal popup window.  Basically, it is a 
simple approach to ajax edit-in-place.

To Use:
  Go to any existing fieldgroup in a content type (or create a new fieldgroup) and click on the
  "Configure" link.  At the bottom of the page, check the "Turn on subedit for this group?" box.
  You can optionally change the link label in the textfield below. 

This module is built on top of the Popups API.  
You will need at least version 6.x-2.0-Alpha4.