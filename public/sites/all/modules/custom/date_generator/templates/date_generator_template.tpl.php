<?php
/**
  * @file Email Template file for Date Generator module
  */ 
?>

<!-- Style -->
<style>
.main-mail-template-wrapper {
  background: gray;
}

table {
  border: 1px solid red;
}
  
</style><!-- Style end! -->

<!-- Email content -->
<table border="0" cellpadding="0" cellspacing="0" height="100%" width="100%">
  <tr>
    <td align="center" valign="top">
      <table border="0" cellpadding="20" cellspacing="0" width="960">
        <!-- Before activity one  -->
        <tr>
          <td align="right">
            <table border="0" width="400">
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
            <table border="0" width="400">
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
            <table border="0" width="400">
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
            <table border="0" width="400">
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


