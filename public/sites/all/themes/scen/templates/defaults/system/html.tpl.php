<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * As with any other template file, this could be overridden for specific
 * conditions using template suggestions. You could create an override for the
 * "news" path by creating a file called html--news.tpl.php. However, this is
 * unusual, because this file contains everything that's necessary. Nothing
 * more, nothing less.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 */
?><!DOCTYPE html>
<html xmlns:fb="http://ogp.me/ns/fb#" prefix="og: http://ogp.me/ns#" xml:lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
  <head profile="<?php print $grddl_profile; ?>">
    <?php print $head; ?>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title><?php print $head_title; ?></title>
    <link href="https://fonts.googleapis.com/css?family=Dosis|Roboto" rel="stylesheet">
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes;?>>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </body>
</html>
