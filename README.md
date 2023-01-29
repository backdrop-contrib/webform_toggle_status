Webform Toggle Status
======================

This module extends the Webform module by adding a new menu callback to toggle
the open/closed status of a webform and a corresponding Views handler. This, in turn, permits the addition of the "Open/Close" command to the Operations dropbutton on the Webform admin page at Admin > Content > Webforms (and elsewhere).

Installation
------------

- Install this module using [the official Backdrop CMS instructions](  https://backdropcms.org/guide/modules).

- There is no global configuration page for the module.

Usage
------------

- In the Webforms admin View, add the field "Webform toggle status link" as a hidden field, then check the corresponding checkbox in the "Operations" dropbutton. You can now open or close the webform from the dropbutton.

- You can also create a link anywhere that toggles the Open/Closed status of a webform by using the path `node/%/webform/toggle-status`. If there is a destination in the link query, the user will be immediately sent to that destination, otherwise, to the webform's page.

Issues
------

Bugs and feature requests should be reported in [the Issue Queue](https://github.com/backdrop-contrib/webform_toggle_status/issues).

Current Maintainers
-------------------

- [Robert J. Lang](https://github.com/bugfolder).

Credits
-------

- Written for Backdrop CMS by [Robert J. Lang](https://github.com/bugfolder).

License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.

