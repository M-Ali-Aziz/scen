<?php
/**
  * @file Email Template file for Date Generator module
  */
?>

<?php
/**
  * Note!!!
  * Some of the classes are from the theme templates.
  */
?>

<!-- Style -->
<style>
.main-email-wrapper {
  background: #f2f2f2;
}

.email-content-wrapper {
  width: 600px;
}

.content-holder {
  background-color: white;
  border: 2px solid #C0C0C0;
  border-radius: 20px;
  padding: 20px 40px;
  margin: 10px 0;
  color: #000;
  line-height: 20px;
  font-size: 14px;
}
.content-holder h2,p{
  margin: 0;
  font-family: sans-serif;
}
.content-holder h2
{
  line-height: 24px;
  font-size: 16px;
}
.content-holder a{
  color:#f44e85;
  text-decoration: underline;
}
.content-holder:not(.the-performance) td div div:last-child{
  font-style: italic;
}

.the-performance {
  padding: 10px;
}
.the-performance h2{
  text-transform: uppercase;
}
.the-performance a{
  text-decoration: none;
  color: #000;
}
.content-holder .field-malmo-stadsteater-time,
.field-malmo-opera-time,
.field-skanes-dansteater-time
{
  line-height: 24px;
  font-size: 16px;
  font-weight: bold;
}
.the-performance .field-malmo-stadsteater-img,
.field-malmo-opera-img,
.field-skanes-dansteater-img
{
  float: left;
  margin-right: 10px;
}
.the-performance .field-malmo-stadsteater-img img,
.field-malmo-opera-img img,
.field-skanes-dansteater-img img
{
  max-width: 140px;
  max-height: 250px;
}
.the-performance .field-malmo-stadsteater-logo,
.field-malmo-opera-logo,
.field-skanes-dansteater-logo
{
  margin-bottom: 10px;
}
.the-performance .field-malmo-stadsteater-logo img,
.field-malmo-opera-logo img,
.field-skanes-dansteater-logo img
{
  max-width: 200px;
  max-height: 40px;
}

.the-performance .field-malmo-stadsteater-address,
.field-malmo-opera-address,
.field-skanes-dansteater-address
{
  margin: 10px 0;
  font-style: italic;
}
.the-performance .field-malmo-stadsteater-booking,
.field-malmo-opera-booking,
.field-skanes-dansteater-booking
{
  width: 100px;
  height: 40px;
  background: #007236;
  text-align: center;
  vertical-align: middle;
  line-height: 40px;
  display: inline-block;
  float: left;
  margin-right: 10px; 
}
.the-performance .field-malmo-stadsteater-booking a,
.field-malmo-opera-booking a,
.field-skanes-dansteater-booking a
{
  color: #FFFFFF;
  text-transform: uppercase;
  text-decoration: none;
}

</style><!-- Style end! -->

<!-- Email content -->
<table height="100%" width="100%" class="main-email-wrapper">
  <tr>
    <td align="center">
      <table class="email-content-wrapper">
        <!-- Before activity one  -->
        <tr>
          <td align="center">
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
          <td align="center">
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
          <td align="center">
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
          <td align="center">
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


