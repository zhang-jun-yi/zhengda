<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!DOCTYPE html>
<html lang="zh-CN">

<head>
    <meta charset="utf-8">
    <title>会员中心-
        <?php echo $cfg_webname; ?>
    </title>
   <meta name="viewport"
       content="width=device-width, initial-scale=1.0, minimum-scale=0.5, maximum-scale=2.0, user-scalable=yes" />
   <link rel="stylesheet" href="templets/siy/css/animate.css" type="text/css" />
   <link rel="stylesheet" href="templets/siy/css/font-awesome.min.css" type="text/css" />
   <link rel="stylesheet" href="templets/siy/css/bootstrap.css" type="text/css" />
   <!--LayuiMini CSS-->
   <link rel="stylesheet" href="templets/lib/layui-v2.5.5/css/layui.css" media="all">
   <link rel="stylesheet" href="templets/lib/font-awesome-4.7.0/css/font-awesome.min.css" media="all">
   <link rel="stylesheet" href="templets/css/layuimini.css?v=2.0.1" media="all">
   <link rel="stylesheet" href="templets/css/themes/default.css" media="all">
   <link rel="stylesheet" href="templets/css/public.css" media="all">
   <!-- Custom CSS -->
   <link href="templets/siy/css/angulr-admin.css" rel="stylesheet">
   <link rel="stylesheet" href="templets/siy/css/font.css" type="text/css" />
   <link rel="stylesheet" href="templets/siy/css/app.css" type="text/css" />
   <script src="templets/siy/js/jquery.js"></script>
   <script src="templets/siy/js/zbp_add.js"></script>
   <!-- ZCenter js-->
   <!-- zbp system -->
   <script src="templets/siy/js/zblogphp.js" type="text/javascript"></script>
   <script src="templets/siy/js/c_admin_js_add.js" type="text/javascript"></script>
   <!--
    <script src="templets/siy/js/jquery-ui.custom.min.js" type="text/javascript"></script>
    <link rel="stylesheet" type="text/css" href="templets/siy/css/jquery-ui.custom.css"/>
-->
   <script src="templets/siy/js/functions.js"></script>
</head>

<body>
    <div class="app app-header-fixed ">
        <?php include(DEDEMEMBER."/templets/head2.htm"); ?>
        <!-- index_menu -->
        <?php include(DEDEMEMBER."/templets/index_menu.htm"); ?>
        <!-- content -->
        <div id="content" class="app-content" role="main">
            <div class="layui-body" >
            <div class="layui-card layuimini-page-header">
                    <div class="layui-breadcrumb layuimini-page-title">
                        <a lay-href="" href="/">会员中心</a><span lay-separator="">/</span>
                        <a><cite>个人信息</cite></a><span lay-separator="">/</span>
                        <a><cite>基本资料</cite></a>
                    </div>
                </div>
            <div class="layuimini-container layuimini-page-anim">
                <div class="layuimini-main" style="overflow: auto;">
                    <blockquote class="layui-elem-quote layui-text">
                        我的邀请码：<span style="color: red;"><?php echo $row['mid'] ?></span> 
                    </blockquote>
                    <form class="layui-form" action="">
                        <div class="layui-form-item">
                            <label class="layui-form-label">用户名:</label>
                            <div class="layui-input-block" style="max-width: 300px;">
                                <div class="layui-form-mid layui-word-aux">
                                    <span style="font-size: 18px;color: #333;"><?php echo $row['userid']; ?></span>
                                </div>
                            </div>
                        </div>
                        <div class="layui-form-item">
                            <label class="layui-form-label">推荐人:</label>
                            <div class="layui-input-block" style="max-width: 300px;">
                                <div class="layui-form-mid layui-word-aux">
                                    <span style="font-size: 18px;color: #333;"><?php echo  $row['pname']; ?></span>
                                </div>
                            </div>
                        </div>
                         <div class="layui-form-item">
                             <label class="layui-form-label">期货账号:</label>
                             <div class="layui-input-block" style="max-width: 300px;">
                                 <div class="layui-form-mid layui-word-aux">
                                     <span style="font-size: 18px;color: #333;"><?php echo $row['qhuid']; ?></span>
                                 </div>
                             </div>
                         </div>
                         <div class="layui-form-item">
                             <label class="layui-form-label">期货密码:</label>
                             <div class="layui-input-block" style="max-width: 300px;">
                                 <div class="layui-form-mid layui-word-aux">
                                     <span style="font-size: 18px;color: #333;"><?php echo $row['qhpwd']; ?></span>
                                 </div>
                             </div>
                         </div>
                        <div class="layui-form-item">
                            <label class="layui-form-label">开户行:</label>
                            <div class="layui-input-block" style="max-width: 300px;">
                                <div class="layui-form-mid layui-word-aux">
                                    <span style="font-size: 18px;color: #333;"><?php echo $row['bankaddr']; ?></span>
                                </div>
                            
                            </div>
                        </div>
                        <div class="layui-form-item">
                            <label class="layui-form-label">身份证正面照</label>
                            <div class="layui-input-block">
                                <img name="card1"  src="<?php echo $row['pic1']; ?>" style="width: 250px;height: 151px;"/>
                            </div>
                        </div>
                        <div class="layui-form-item">
                            <label class="layui-form-label">身份证反面照</label>
                            <div class="layui-input-block">
                                <img name="card1"  src="<?php echo $row['pic2']; ?>" style="width: 250px;height: 151px;"/>
                            </div>
                        </div>
                        <div class="layui-form-item">
                            <label class="layui-form-label">银行卡正面照</label>
                            <div class="layui-input-block">
                                <img name="card1"  src="<?php echo $row['pic3']; ?>" style="width: 250px;height: 151px;"/>
                            </div>
                        </div>
                    </form>
                </div>
            </div>
            </div>
        </div>
    </div>
      <script src="templets/lib/layui-v2.5.5/layui.js" charset="utf-8"></script>
   <script src="templets/siy/js/bootstrap.js"></script>
   <script src="templets/siy/js/ui-load.js"></script>
   <script src="templets/siy/js/ui-jp.config.js"></script>
   <script src="templets/siy/js/ui-jp.js"></script>
   <script src="templets/siy/js/ui-nav.js"></script>
   <script src="templets/siy/js/ui-toggle.js"></script>
   <script src="templets/siy/js/ui-client.js"></script>
</body>

</html>