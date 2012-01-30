<div id='fb-root'></div>
<script src='http://connect.facebook.net/en_US/all.js'></script>
<div id="page-fb-admin">
  <a onclick='addToPage(); return false;'>Add to Page</a>
</div>
<script>
  FB.init({
    appId: "<?php print $app_id; ?>",
    status: true,
    cookie: true
  });

  function addToPage() {
    FB.ui({
      method: 'pagetab',
      redirect_uri: '<?php print url("fb/tab", array("absolute" => TRUE)); ?>'
    });
  }
</script>
