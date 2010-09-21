;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Modal Frame Contrib Package
;; $Id: README.txt,v 1.1.2.4 2010/01/06 20:31:42 markuspetrux Exp $
;;
;; Original author: markus_petrux (http://drupal.org/user/39593)
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

CONTENTS OF THIS FILE
=====================
- OVERVIEW
- REQUIREMENTS
- INSTALLATION
- INCLUDED MODULES


OVERVIEW
========

This package contains contributed modules that implement the Modal Frame API as
a yet another alternative to enhance the usability of common day to day tasks
in your Drupal site.

If you create a module that uses the Modal Frame API with a feature that is not
yet covered, please contribute it by submitting an issue and attaching a tar.gz
for each module that you may wish to share with the community. Please, use the
proper component for your issue and describe a little what your module does.
Thanks for sharing!


REQUIREMENTS
============

- Modal Frame API.
  http://drupal.org/project/modalframe

- Each contrib module may have additional requirements. Please, check this
  out in their own .info files.


INSTALLATION
============

- Be sure to install all dependent modules.

- Copy all contents of this package to your modules directory preserving
  subdirectory structure.

- Go to Administer -> Site building -> Modules and search for modules under
  the Modal Frame section.

- Install the modules that may suit your needs.



INCLUDED MODULES
================

- modalframe_blocks: Opens block settings pages in modal frames.

- modalframe_dblog: Opens details of watchdog entries managed by the database
  logging module in modal frames.

- modalframe_cck_manage_fields: Opens CCK field and group settings forms in
  modal frames.

- modalframe_filter_tips: Opens the "More information about formatting options"
  pages in modal frames.

- modalframe_input_formats: Opens input format administration forms (including
  support for Better Formats module) in modal frames.

- modalframe_locale: Opens string related forms implemented by the translation
  search interface in modal frames.

- modalframe_more_help: Opens the "more help" pages in modal frames.

- modalframe_path: Opens path administration forms in modal frames.
