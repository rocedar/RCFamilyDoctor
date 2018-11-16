
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define RCFDConfigInstance [RCFDConfig sharedConfig]

@interface RCFDConfig : NSObject

#pragma mark - 家庭医生首页配置

/** 家庭医生顶部 背景图 */
@property (nonatomic,strong) UIImage *doctor_home_header_Img;
/** 家庭医生 vip会员 图标 */
@property (nonatomic,strong) UIImage *doctor_home_vipImg;
/** 立即开通 背景图片 */
@property (nonatomic,strong) UIImage *doctor_home_applyBtn_img;
/** 视频通话 背景图片 */
@property (nonatomic,strong) UIImage *doctor_home_callPhone_img;

#pragma mark - 机构介绍页面
/** 机构详情页顶部 背景图 */
@property (nonatomic,strong) UIImage *doctor_institution_detail_header_Img;

#pragma mark - 家庭医生医生详情页面
/** 顶部视图背景图 */
@property (nonatomic,strong) UIImage *doctor_detail_header_Img;
/** 空页面图片 */
@property (nonatomic,strong) UIImage *doctor_detail_nodata_Img;

#pragma mark - 咨询记录页面
/** 播放按钮图片 */
@property (nonatomic,strong) UIImage *doctor_consulting_record_play_Img;
/** 暂停按钮图片 */
@property (nonatomic,strong) UIImage *doctor_consulting_record_pause_Img;

#pragma mark - 家庭医生 科室列表
@property (nonatomic,strong) UIImage *doctor_department_list_nodataImg;

#pragma mark - 家庭医生 咨询记录列表
/** 咨询记录列表空白页图片 */
@property (nonatomic,strong) UIImage *doctor_consulting_record_list_nodataImg;

#pragma mark - 家庭医生 我的医生
/** 我的医生空白页图片 */
@property (nonatomic,strong) UIImage *doctor_mydoctor_list_nodataImg;

#pragma mark - 名医 我的订单
/** 我的订单空白页图片 */
@property (strong, nonatomic) UIImage *mingyi_myorder_list_nodataImg;

#pragma mark - 名医 健康服务首页
/** 名医健康服务首页 顶部背景图片 */
@property (nonatomic,strong) UIImage *mingyi_home_header_bg_Img;
/** vip 皇冠 图标 */
@property (nonatomic,strong) UIImage *mingyi_home_heaer_vip_Img;

#pragma mark - 获取用户基本信息
/** 用户手机号 */
@property (nonatomic,copy) NSString *phone;
/** 用户头像地址 */
@property (nonatomic,strong) NSURL *portraitUrl;
/** 用户设备id 多个以逗号隔开 */
@property (nonatomic, copy)  NSString *device_no;

/** 获取p_token */
@property (nonatomic, copy,readonly) NSString *p_token;
/** app-id */
@property (nonatomic,copy,readonly) NSString *app_id;
/** p_secret */
@property (nonatomic,copy,readonly) NSString *p_secret;

+ (instancetype)sharedConfig;

@end

NS_ASSUME_NONNULL_END


