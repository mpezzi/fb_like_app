#Facebook Like Application

----------

**Facebook Like Application** is a Drupal module created using [Features](http://drupal.org/project/features) module.

This module create a new content type called Like Application with fields for banners, a link and a status. When viewed in the "app" view (through a Facebook Tab), it will *automagically* look for a signed request from Facebook and display the appropriate banner to the user. Administrators can then close or switch to a maintenance mode within the node edit form.

This module also comes with a handy language negotiator so you can load the page based on the users Facebook locale setting.

Required modules:

* [Features](http://drupal.org/project/features)
* [CTools](http://drupal.org/project/ctools)
* [Token](http://drupal.org/project/token)
* [Link](http://drupal.org/project/link)
* [FileField Paths](http://drupal.org/project/filefield_paths)

Optional/helpful:

* [Entity Translation](http://drupal.org/project/entity_translation)
