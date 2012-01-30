<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>

  <title><?php print check_plain($node->title); ?></title>

  <style type="text/css">
    body {
      margin: 0;
      font-family: "Helvetica Neue", Helvetica, Arial, sans-serif;
      font-size: 100%;
      color: #333;
    }

    #page {
      position: relative;
      width: 520px;
      overflow: hidden;
      font-size: 0.75em;
      line-height: 1.4em;
    }

    #page img {
      display: block;
    }

    #page-fb-admin {
      padding: 5px 10px;
    }
  </style>

  <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>

</head>

<body>

<div id="page">
  <?php if ( $is_closed ): ?>
    <?php print $closed; ?>
  <?php elseif ( $is_maintenance ): ?>
    <?php print $maintenance; ?>
  <?php elseif ( $is_open && $is_liked ): ?>
    <?php print $liked; ?>
  <?php else: ?>
    <?php print $like; ?>
  <?php endif; ?>

  <?php if ( $is_admin ): ?>
    <?php print $admin; ?>
  <?php endif; ?>
</div>

</body>
</html>
