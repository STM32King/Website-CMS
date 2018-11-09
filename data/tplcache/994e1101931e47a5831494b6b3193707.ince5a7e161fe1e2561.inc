<?php
$z[0]=Array("field","\r\n        global \$dsql;\r\n        \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n        \$row = \$dsql->GetOne(\$sql);      \r\n        @me=is_array(\$row)?'\r\n        <dl class=\"ericon\">\r\n          <span class=\"icon1\">-</span><span class=\"icon2\">+</span>\r\n        </dl>\r\n        ':'';\r\n        ",23,424);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",434,462);
$z[1][4]=array();
$z[1][4]['name']="typeurl";
$z[2]=Array("field","",475,504);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("channel","\r\n          <li><a href='[field:typeurl/]' class=\"er\">[field:typename/]</a></li>\r\n          ",552,697);
$z[3][4]=array();
$z[3][4]['type']="son";
$z[3][4]['noself']="yes";

?>