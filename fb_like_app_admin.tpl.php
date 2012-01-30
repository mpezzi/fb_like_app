<div id='fb-root'></div>
<script src='http://connect.facebook.net/en_US/all.js'></script>
<div id="page-fb-admin">
  <a onclick='addToPage(); return false;'>Add to Page</a>
</div>
<script>
  FB.init({
    appId: "<?php print $app_id; ?>",
    channelUrl: "<?php print url('fb_like_app/channel', array('absolute' => TRUE)); ?>",
    status: true,
    cookie: true
  });

  function addToPage() {
    FB.ui({
      method: 'pagetab',
      redirect_uri: '<?php print url("node/" . arg(1) . "/app", array("absolute" => TRUE)); ?>'
    });
  }
</script>
