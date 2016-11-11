<?php
/**
  * @file Email Template file for Date Generator module
  */
?>

<!-- Style -->
<style>
/*.main-email-wrapper {
  background-image: url(<?php print($image_path) .  "/mapbg.jpg"?>);
  background-repeat: no-repeat;
  background-size: cover;
}*/
.main-email-wrapper {
  background-color: #f2f2f2;
}

.email-content-wrapper {
  width: 960px;
}

.content-holder {
  background-color: white;
  border: 2px solid gray;
  border-radius: 20px;
  padding: 20px 40px;
}
.content-holder h2,p{
  margin: 0;
  color: #000;
}
.content-holder h2{
  line-height: 24px;
  font-size: 16px;
}
.content-holder p{
  line-height: 20px;
  font-size: 14px;
}
.content-holder a{
  color:#f44e85;
  text-decoration: underline;
}

.the-performance {
  padding: 10px;
}

table {
  border: 1px solid red;
}
  
</style><!-- Style end! -->

<!-- Email content -->
<table height="100%" width="100%" class="main-email-wrapper">
  <tr>
    <td align="center">
      <table class="email-content-wrapper">
        <!-- Before activity one  -->
        <tr>
          <td align="right">
            <table width="400" class="content-holder before-activity-one">
              <tr>
                <td align="left">
                  <?php print render($before_nodes[0]); ?>
                </td>
              </tr>
            </table>
          </td>
        </tr>
        <!-- Before activity two -->
        <tr>
          <td align="left">
            <table width="400" class="content-holder before-activity-two">
              <tr>
                <td align="left">
                  <?php print render($before_nodes[1]); ?>
                </td>
              </tr>
            </table>
          </td>
        </tr>
        <!-- The performance -->
        <tr>
          <td align="right">
            <table width="400" class="content-holder the-performance">
              <tr>
                <td align="left">
                  <?php print render($performance); ?>
                </td>
              </tr>
            </table>
          </td>
        </tr>
        <!-- After activity -->
        <tr>
          <td align="left">
            <table width="400" class="content-holder after_activity">
              <tr>
                <td align="left">
                  <?php print render($after_node); ?>
                </td>
              </tr>
            </table>
          </td>
        </tr>

      </table>
    </td>
  </tr>
</table>


