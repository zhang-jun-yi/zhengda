<?php
$z[0]=Array("global","",265,291);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",335,365);
$z[1][4]=array();
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",402,429);
$z[2][4]=array();
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("global","",1154,1182);
$z[3][4]=array();
$z[3][4]['name']="cfg_mobileurl";
$z[4]=Array("global","",1661,1689);
$z[4][4]=array();
$z[4][4]['name']="cfg_mobileurl";
$z[5]=Array("include","",1842,1877);
$z[5][4]=array();
$z[5][4]['filename']="head.htm";
$z[6]=Array("global","",2018,2043);
$z[6][4]=array();
$z[6][4]['name']="cfg_cmsurl";
$z[7]=Array("type","\r\n        <div class=\"hdl\">\r\n          <h3>[field:typenameen/]</h3>\r\n          <h2>[field:typename/]</h2>\r\n        </div>\r\n        ",2577,2742);
$z[7][4]=array();
$z[7][4]['typeid']="2";
$z[8]=Array("arclist","\r\n          <li><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\" alt=\"[field:title/]\"/>\r\n            <p>[field:title/]</p>\r\n            </a></li>\r\n          ",2882,3116);
$z[8][4]=array();
$z[8][4]['typeid']="2";
$z[8][4]['titlelen']="50";
$z[8][4]['orderby']="pubdate";
$z[9]=Array("sql"," \r\n        [field:content  function='cn_substr(html2text(@me),500)'/]...\r\n        ",3470,3623);
$z[9][4]=array();
$z[9][4]['sql']="Select content from dede_arctype where id=1";
$z[10]=Array("type"," <a href=\"[field:typelink/]\">[详细]</a>",3638,3713);
$z[10][4]=array();
$z[10][4]['typeid']="1";
$z[11]=Array("type","\r\n      <div class=\"tit\">\r\n        <div class=\"titl\">\r\n          <h3>[field:typenameen/]</h3>\r\n          <h2>[field:typename/]</h2>\r\n        </div>\r\n        <div class=\"titr\"><a href=\"[field:typelink/]\"><img src=\"/skin/images/more.png\" alt=\"[field:typename/]\"/></a></div>\r\n      </div>\r\n      ",3790,4118);
$z[11][4]=array();
$z[11][4]['typeid']="16";
$z[12]=Array("arclist","\r\n        <li><a href=\"[field:arcurl/]\">[field:title/]</a><span>[[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]]</span></li>\r\n        ",4140,4356);
$z[12][4]=array();
$z[12][4]['typeid']="16";
$z[12][4]['row']="6";
$z[12][4]['titlelen']="50";
$z[12][4]['orderby']="pubdate";
$z[13]=Array("type","\r\n      <div class=\"tit\">\r\n        <div class=\"titl\">\r\n          <h3>[field:typenameen/]</h3>\r\n          <h2>[field:typename/]</h2>\r\n        </div>\r\n        <div class=\"titr\"><a href=\"[field:typelink/]\"><img src=\"/skin/images/more.png\" alt=\"[field:typename/]\"/></a></div>\r\n      </div>\r\n      ",4413,4741);
$z[13][4]=array();
$z[13][4]['typeid']="17";
$z[14]=Array("arclist","\r\n        <li><a href=\"[field:arcurl/]\">[field:title/]</a><span>[[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]]</span></li>\r\n        ",4763,4979);
$z[14][4]=array();
$z[14][4]['typeid']="17";
$z[14][4]['row']="6";
$z[14][4]['titlelen']="50";
$z[14][4]['orderby']="pubdate";
$z[15]=Array("type","\r\n    <div class=\"hd\">\r\n      <div class=\"hdl\">\r\n        <h3>[field:typenameen/]</h3>\r\n        <h2>[field:typename/]</h2>\r\n      </div>\r\n      <div class=\"hdr\"> <a class=\"prev\"></a> <a class=\"next\"></a> </div>\r\n    </div>\r\n    ",5059,5320);
$z[15][4]=array();
$z[15][4]['typeid']="9";
$z[16]=Array("arclist","\r\n        <li><a href=\"[field:arcurl/]\"><img src=\"[field:picname/]\"  alt=\"[field:title/]\"/>\r\n          <p>[field:title/]</p>\r\n          </a></li>\r\n        ",5364,5591);
$z[16][4]=array();
$z[16][4]['typeid']="9";
$z[16][4]['titlelen']="50";
$z[16][4]['orderby']="pubdate";
$z[17]=Array("include","",5797,5834);
$z[17][4]=array();
$z[17][4]['filename']="footer.htm";

?>