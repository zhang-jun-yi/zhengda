<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?><!--当前页面是如今通道页面-->
<!DOCTYPE html>
<html lang="zh-CN">

<head>
    <meta charset="utf-8">
    <title>入金通道-会员中心-
        <?php echo $cfg_webname; ?>
    </title>
    <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1" />
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

    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
        <script src="templets/siy/js/html5shiv.js"></script>
        <script src="templets/siy/js/respond.min.js"></script>
    <![endif]-->

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
                        <a><cite>出金管理</cite></a><span lay-separator="">/</span>
                        <a><cite>出金通道</cite></a>
                    </div>
                </div>
                <div class="layuimini-container layuimini-page-anim">
                    <div class="layuimini-main">
                
                        <blockquote class="layui-elem-quote layui-text">
                            请仔细检查出金账号及金额！！
                        </blockquote>
                        <div class="layui-row">
                            <div class="layui-col-xs12 layui-col-md12">
                              <div class="grid-demo grid-demo-bg1">
                                <form class="layui-form" action="tixian.php" method="POST">
                                    <input type="hidden" name="dopost" value="save" />
                                    <div class="layui-form-item">
                                        <label class="layui-form-label" style="padding: 9px 5px;">出金账号</label>
                                        <div class="layui-input-block" style="max-width: 300px;">
                                            <input type="input" name="payno" required  lay-verify="required" autocomplete="off" placeholder="请输入入金账号" class="layui-input">
                                        </div>
                                    </div>
                
                                    <div class="layui-form-item">
                                        <label class="layui-form-label" style="padding: 9px 5px;">金额</label>
                                        <div class="layui-input-block" style="max-width: 300px;">
                                            <input type="input" name="cny" lay-verify="required|number" autocomplete="off" placeholder="请输入入金金额" class="layui-input">
                                        </div>
                                    </div>
                                  
                                    <div class="layui-form-item">
                                        <label class="layui-form-label"style="padding: 9px 5px;" >出金方式</label>
                                        <div class="layui-input-block" style="max-width: 500px;">
                                            <input type="radio" name="pstyle" value="0" title="微信支付" checked="">
                                            <input type="radio" name="pstyle" value="1" title="支付宝">
                                            <input type="radio" name="pstyle" value="2" title="银行转账" >
                                        </div>
                                    </div>
                                    <div class="layui-form-item">
                                        <div class="layui-input-block">
                                            <button class="layui-btn" lay-submit="" lay-filter="zcsubmit">立即提交</button>
                                            <button type="reset" class="layui-btn layui-btn-primary">重置</button>
                                        </div>
                                    </div>
                                </form>
                              </div>
                            </div>
                            </div>
                        </div>
                </div>
            </div>
        </div>
    </div>
        <script src="templets/lib/layui-v2.5.5/layui.js" charset="utf-8"></script>
        <script>
            layui.use(['form', 'layedit', 'laydate'], function () {
                var form = layui.form
                    , layer = layui.layer
                    , layedit = layui.layedit
                    , laydate = layui.laydate;
        
                /**
                 * 初始化表单，要加上，不然刷新部分组件可能会不加载
                 */
                form.render();
            });
        </script>
        <script src="templets/siy/js/bootstrap.js"></script>
        <script src="templets/siy/js/ui-load.js"></script>
        <script src="templets/siy/js/ui-jp.config.js"></script>
        <script src="templets/siy/js/ui-jp.js"></script>
        <script src="templets/siy/js/ui-nav.js"></script>
        <script src="templets/siy/js/ui-toggle.js"></script>
        <script src="templets/siy/js/ui-client.js"></script>
</body>
</html>
<!--68.29 ms , 16 query , 9211kb memory , 0 error-->