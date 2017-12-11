// JavaScript Document
$(document).ready(function(e) {
	/*	控制微信的*/
	
    var button_toggle = true;
	$(".right_ico").live("mouseover", function(){
		
		var show= $(this).attr('show');
		var hide= $(this).attr('hide');
		$("#right_tip").show();
		$(".flag_"+hide).hide();

	});
	$(".right_ico").live("mouseout", function(){
		
		var show= $(this).attr('show');
		var hide= $(this).attr('hide');
		$("#right_tip").hide();
		$(".flag_"+hide).hide();

	});

	$("#right_tip").live("mouseover", function(){
		button_toggle = false;
		$(this).show();
	}).live("mouseout", function(){
		button_toggle = true;
		hideRightTip();
	});
	
	function hideRightTip(){
		setTimeout(function(){		
			if( button_toggle ) $("#right_tip").hide();
		}, 200);
	}
	

	
	
	
		/*	控制微信的*/
	
    var button_toggle = true;
	$(".right_ico1").live("mouseover", function(){
		
		var show= $(this).attr('show');
		var hide= $(this).attr('hide');
		$("#right_tip1").show();
		$(".flag_"+hide).hide();

	});
	$(".right_ico1").live("mouseout", function(){
		
		var show= $(this).attr('show');
		var hide= $(this).attr('hide');
		$("#right_tip1").hide();
		$(".flag_"+hide).hide();

	});

	$("#right_tip1").live("mouseover", function(){
		button_toggle = false;
		$(this).show();
	}).live("mouseout", function(){
		button_toggle = true;
		hideRightTip();
	});
	
	function hideRightTip(){
		setTimeout(function(){		
			if( button_toggle ) $("#right_tip1").hide();
		}, 200);
	}
	
	
	
	
	
	
	
	
	/*	控制top的*/
	

	$("#backToTop").live("click", function(){
		var _this = $(this);
		$('html,body').animate({ scrollTop: 0 }, 500 ,function(){
			
		});
	});


	/*$(window).scroll(function(){
		var htmlTop = $(document).scrollTop();
		if( htmlTop > 0){
			$("#backToTop").show();	
		}else{
			$("#backToTop").show();
		}
	});*/   
});
