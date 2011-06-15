BLOGGING by Ceardach

A feature module based on the Kit specifications (http://drupal.org/project/kit)

Provides the following functionality:

  * Blog post
    - Comments enabled
    - Optional summary
    - File attachments
    - Related links
    - Topics (free tags)

  * 'Blogger' role

  * Blog node page that displays blocks in the first sidebar:
    - Attached files
    - Related links
    - Related topics

  * Automatic path generation
    - blog/[yyyy]/[mm]/title

  * Listing page
    - 'Blog' link in the secondary menu
    - Displays blocks in the first sidebar:
      * Popular posts
      * Topics as tag cloud
      * Recent comments
    - Supports 'blog/[yyyy]' and 'blog/[yyyy]/[mm]' paths

  * Personal management page
    - Local task of the listing page
    - Table of published and unpublished blog posts by the current user


Required contributed modules:

  * features
  * views
  * context
  * strongarm
  * ctools
  * pathauto
  * tagadelic


Related modules:

  * ceardach_profile (https://github.com/ceardach/ceardach_profile)
    An add-on specifically to this module which will allow those with the
    'blogger' role to add information about themselves.  A summary appears on
    the first sidebar of all blog posts the user has authored.

  * ceardach_markdown (https://github.com/ceardach/ceardach_markdown)
    Provides a markdown-based filter format with other enhancements
