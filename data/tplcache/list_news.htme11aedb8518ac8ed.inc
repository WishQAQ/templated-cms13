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
$z[5]=Array("include","",1196,1231);
$z[5][4]['filename']="left.htm";
$z[6]=Array("field","",1300,1329);
$z[6][4]['name']="position";
$z[7]=Array("type","<div class=\"nti\">[field:typename /]</div>",1343,1407);
$z[8]=Array("list","\r\n          <li>\r\n            <div class=\"n_tu\"><img src=\"[field:picname/]\"/></div>\r\n            <div class=\"n_zi\">\r\n              <p style=\" font-size:16px; color:#333; margin-bottom:5px; \">[field:title/]<span class=\"n_sj\">[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></p>\r\n              <div style=\"color:#999; height:80px; margin-bottom:15px; overflow:hidden; \">[field:description function='cn_substr(@me,250)'/]...</div>\r\n              <a href=\"[field:arcurl/]\">立即查看</a> </div>\r\n            <div class=\"clear\"></div>\r\n          </li>\r\n         ",1460,2062);
$z[8][4]['pagesize']="4";
$z[9]=Array("pagelist","",2139,2205);
$z[9][4]['listitem']="index,end,pre,next,pageno";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",2933,2970);
$z[10][4]['filename']="footer.htm";

?>