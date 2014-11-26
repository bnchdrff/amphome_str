<?php
/**
 * @file
 * amphome_str.box.inc
 */

/**
 * Implements hook_default_box().
 */
function amphome_str_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'amc_box';
  $box->plugin_key = 'simple';
  $box->title = 'Allied Media Conference';
  $box->description = 'Allied Media Conference';
  $box->options = array(
    'body' => array(
      'value' => 'To be determined.',
      'format' => 'unfiltered',
    ),
  );
  $export['amc_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'amp_donate';
  $box->plugin_key = 'simple';
  $box->title = 'Donate';
  $box->description = 'donate prompt';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="https://app.moonclerk.com/pay/6cstgbo9tj">BECOME A SUSTAINER!</a></p>',
      'format' => 'really_really_unfiltered',
    ),
  );
  $export['amp_donate'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'amp_list_signup';
  $box->plugin_key = 'simple';
  $box->title = 'Subscribe to our newsletter';
  $box->description = 'Newsletter Subscription';
  $box->options = array(
    'body' => array(
      'value' => '<div id="mc_embed_signup">
<form action="http://alliedmedia.us7.list-manage2.com/subscribe/post?u=ed3193a97f901cbe49364e914&amp;id=e5f6bfebe1" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>

<input class="form-control form-text input-sm" type="email" value="" name="EMAIL" placeholder="email" id="mce-EMAIL">
<input class="form-control form-text input-sm" type="text" value="" name="mce-MMERGE11" placeholder="zip code" id="mce-MMERGE11">
<input class="btn btn-sm btn-primary" type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button">

<!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
<div style="position: absolute; left: -5000px;"><input type="text" name="b_ed3193a97f901cbe49364e914_e5f6bfebe1" value=""></div>
</form>
',
      'format' => 'really_really_unfiltered',
    ),
    'additional_classes' => 'small-box',
  );
  $export['amp_list_signup'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'blog_addthis';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = '"add this" for blog';
  $box->options = array(
    'body' => array(
      'value' => '<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-546b62de68c18e7f" async="async"></script>',
      'format' => 'really_really_unfiltered',
    ),
  );
  $export['blog_addthis'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_quick_links';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact Quick Links';
  $box->options = array(
    'body' => array(
      'value' => '<a href="http://amc.alliedmedia.org/amc2012/about/frequently-asked-questions">Read some FAQs about the Allied Media Conference</a>.

Contact us through the form or leave us a voicemail at: (313) 718-2267 

You can send postal mail, checks, and gifts (we like small, original works of art and books of history) to:

<b>Allied Media Projects
4126 Third St.
Detroit, MI 48201</b>

Your contribution to Allied Media Projects is tax-deductible!

<p><b>You can also donate online here...</b></p>
<a class="donate-button" href="https://app.moonclerk.com/pay/6cstgbo9tj">DONATE</a>',
      'format' => 'unfiltered',
    ),
  );
  $export['contact_quick_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'flex_graphic_box';
  $box->plugin_key = 'simple';
  $box->title = 'Flexible graphic area';
  $box->description = 'Flexible graphic area';
  $box->options = array(
    'body' => array(
      'value' => 'hi',
      'format' => 'unfiltered',
    ),
  );
  $export['flex_graphic_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'follow_facebook';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Like on Facebook';
  $box->options = array(
    'body' => array(
      'value' => '<a href="http://www.facebook.com/pages/Allied-Media-Projects/123987404279617" target="blank">Like us on Facebook</a>',
      'format' => 'unfiltered',
    ),
    'additional_classes' => 'small-box',
  );
  $export['follow_facebook'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'follow_twitter';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Follow on Tumblr';
  $box->options = array(
    'body' => array(
      'value' => '<a href="http://alliedmedia.tumblr.com/" target="blank">Follow us on Tumblr</a>
',
      'format' => 'unfiltered',
    ),
    'additional_classes' => 'small-box',
  );
  $export['follow_twitter'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_donatelink';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Donate link for the footer';
  $box->options = array(
    'body' => array(
      'value' => '<a href="/sustain">Donate</a>',
      'format' => 'unfiltered',
    ),
    'additional_classes' => '',
  );
  $export['footer_donatelink'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'footer_sociallinks';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'social media links for the footer';
  $box->options = array(
    'body' => array(
      'value' => '<a href="https://www.facebook.com/alliedmediaprojects" class="facebook" target="_blank">Facebook</a>
<a href="https://twitter.com/allied_media" class="twitter" target="_blank">Twitter</a>
<a href="http://alliedmedia.tumblr.com/" class="tumblr" target="_blank">Tumblr</a>
<a href="https://www.youtube.com/user/alliedmedia" class="youtube" target="_blank">Youtube</a>
<a href="http://vimeo.com/alliedmediaprojects" class="vimeo" target="_blank">Vimeo</a>
<a href="https://www.flickr.com/photos/alliedmedia/" class="flickr" target="_blank">Flickr</a>
<a href="http://instagram.com/alliedmedia" class="instagram" target="_blank">Instagram</a>',
      'format' => 'really_really_unfiltered',
    ),
    'additional_classes' => '',
  );
  $export['footer_sociallinks'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'impressum';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Impressum';
  $box->options = array(
    'body' => array(
      'value' => 'Allied Media Projects  /  4126 Third St.  /  Detroit, MI 48201
<a href="http://creativecommons.org/licenses/by-nc-sa/3.0/deed.en_US" target="_blank">Content licensed under a Attribution-NonCommercial-ShareAlike 3.0 Unported Licensed</a>',
      'format' => 'whatever_you_need',
    ),
    'additional_classes' => '',
  );
  $export['impressum'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mission';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Mission statement';
  $box->options = array(
    'body' => array(
      'value' => 'We cultivate media strategies for a more just, creative, and collaborative world.',
      'format' => 'unfiltered',
    ),
  );
  $export['mission'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'register_conference';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Follow on Twitter';
  $box->options = array(
    'body' => array(
      'value' => '<a href="http://twitter.com/allied_media" target="blank">Follow us on Twitter</a>
',
      'format' => 'unfiltered',
    ),
    'additional_classes' => 'small-box',
  );
  $export['register_conference'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'sell_links';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Sell links (store, become sustainer)';
  $box->options = array(
    'body' => array(
      'value' => '<a href="http://store.alliedmedia.org/">Store</a>&nbsp;&nbsp;<a href="/sustain">Become a Sustainer</a>',
      'format' => 'unfiltered',
    ),
    'additional_classes' => '',
  );
  $export['sell_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'sponsored_projects_box';
  $box->plugin_key = 'simple';
  $box->title = 'Sponsored projects';
  $box->description = 'Sponsored projects';
  $box->options = array(
    'body' => array(
      'value' => 'to be filled in',
      'format' => 'unfiltered',
    ),
  );
  $export['sponsored_projects_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'storeitem1_box';
  $box->plugin_key = 'simple';
  $box->title = 'Store item 1';
  $box->description = 'Store item 1';
  $box->options = array(
    'body' => array(
      'value' => 'hi1',
      'format' => 'unfiltered',
    ),
  );
  $export['storeitem1_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'storeitem2_box';
  $box->plugin_key = 'simple';
  $box->title = 'Store Item 2';
  $box->description = 'Store Item 2';
  $box->options = array(
    'body' => array(
      'value' => 'hi11',
      'format' => 'unfiltered',
    ),
  );
  $export['storeitem2_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'storeitem3_box';
  $box->plugin_key = 'simple';
  $box->title = 'hi item 3';
  $box->description = 'Store Item 3';
  $box->options = array(
    'body' => array(
      'value' => 'hi',
      'format' => 'unfiltered',
    ),
  );
  $export['storeitem3_box'] = $box;

  return $export;
}
