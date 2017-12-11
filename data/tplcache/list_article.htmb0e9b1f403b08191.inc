<?php
$z[0]=Array("field","",254,273);
$z[0][4]['name']="title";
$z[1]=Array("global","",274,300);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",341,370);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",410,468);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1029,1064);
$z[4][4]['filename']="head.htm";
$z[5]=Array("include","",1201,1236);
$z[5][4]['filename']="left.htm";
$z[6]=Array("field","",1306,1335);
$z[6][4]['name']="position";
$z[7]=Array("type","<div class=\"nti\">[field:typename /]</div>",1349,1413);
$z[8]=Array("list","\r\n          <li>\r\n            <div class=\"p_tu\"><img src=\"[field:picname/]\" width=\"160\" height=\"210\"/></div>\r\n            <div class=\"p_zi\">\r\n              <div class=\"p_ti\">[field:title/]</div>\r\n              <div style=\" color:#999; margin-bottom:13px; overflow:hidden; \">[field:description function='cn_substr(@me,250)'/]...</div>\r\n              <a href=\"[field:arcurl/]\">查看详情</a> </div>\r\n            <div class=\"clear\"></div>\r\n          </li>\r\n         ",1466,1967);
$z[8][4]['pagesize']="5";
$z[9]=Array("pagelist","",2033,2099);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",2190,2227);
$z[10][4]['filename']="footer.htm";

?>