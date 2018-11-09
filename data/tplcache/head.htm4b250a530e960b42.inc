<?php
$z[0]=Array("channelartlist","\r\n      <li class=\"menu_head\"> {dede:field name=typeid runphp=\"yes\"}\r\n        global \$dsql;\r\n        \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n        \$row = \$dsql->GetOne(\$sql);      \r\n        @me=is_array(\$row)?'\r\n        <dl class=\"ericon\">\r\n          <span class=\"icon1\">-</span><span class=\"icon2\">+</span>\r\n        </dl>\r\n        ':'';\r\n        {/dede:field} <a href=\"{dede:field name='typeurl'/}\" class=\"ce\">{dede:field name='typename'/}</a>\r\n        <ul class=\"menu_body\">\r\n          {dede:channel type='son' noself='yes'}\r\n          <li><a href='[field:typeurl/]' class=\"er\">[field:typename/]</a></li>\r\n          {/dede:channel}\r\n        </ul>\r\n      </li>\r\n      ",276,1073);
$z[0][4]=array();
$z[0][4]['typeid']="top";
$z[1]=Array("field","(@me==\"\")? @me=\" class='yiji current' \":@me=\"class='yiji'\";",1480,1589);
$z[1][4]=array();
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channelartlist","\r\n        <li id=\"pcase\" class=\"yiji {dede:field.currentstyle/}\"><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a>\r\n          <div class=\"libox\"> {dede:channel type='son' noself='yes'} <a href=\"[field:typeurl/]\">[field:typename/]</a> {/dede:channel} </div>\r\n        </li>\r\n        ",1627,2010);
$z[2][4]=array();
$z[2][4]['typeid']="top";
$z[2][4]['currentstyle']="current";

?>