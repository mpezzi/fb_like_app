<div id='fb-root'></div>
<script src='http://connect.facebook.net/en_US/all.js'></script>
<div id="page-fb-admin"><div id="page-fb-admin-inner">
  <a onclick='addToPage(); return false;'>Add to Page</a>
</div></div>
<script>
  FB.init({ appId: "<?php print $app_id; ?>", channelUrl: "<?php print $channel_url; ?>", status: true, cookie: true });
  function addToPage() { FB.ui({ method: 'pagetab', redirect_uri: '<?php print $redirect_url; ?>' }); }
</script>
