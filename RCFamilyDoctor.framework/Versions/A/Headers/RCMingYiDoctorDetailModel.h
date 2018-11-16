//
//  RCMingYiDoctorDetailModel.h
//  AFNetworking
//
//  Created by wtw on 2018/7/20.
//

#import <Foundation/Foundation.h>

@class RCMingYiDoctorServerTypeDetail;
@interface RCMingYiDoctorDetailModel : NSObject
/** 医生id */
@property (nonatomic,copy) NSString *doctor_id;
/** 医生名字 */
@property (nonatomic,copy) NSString *doctor_name;
/** 医生职位 */
@property (nonatomic,copy) NSString *title_name;
/** 医生头像 */
@property (nonatomic,copy) NSString *portrait;
/** 医院 */
@property (nonatomic,copy) NSString *hospital_name;
/** 科室 */
@property (nonatomic,copy) NSString *department_name;
/** 擅长领域 */
@property (nonatomic,copy) NSString *skilled;
/** 服务说明 */
@property (nonatomic,copy) NSString *service_desc;
/** 医院级别 */
@property (nonatomic,copy) NSString *hospital_level;
/** 医生简介 */
@property (nonatomic,copy) NSString *profile;
/** 电话咨询 */
@property (nonatomic,strong) RCMingYiDoctorServerTypeDetail *phone_service;
/** 视频咨询 */
@property (nonatomic,strong) RCMingYiDoctorServerTypeDetail *video_service;
/** 医生简介高度 */
@property (nonatomic,assign) CGFloat profileHeight;
/** 服务高度 */
@property (nonatomic,assign) CGFloat serverHeight;
/** header 高度 */
@property (nonatomic,assign) CGFloat headerHeight;

/** 跳转标识  0 电话咨询  1视频咨询 */
@property (nonatomic,assign) int from;
@end

@interface RCMingYiDoctorServerTypeDetail : NSObject
/** 费用 */
@property (nonatomic,copy) NSString *fee;
/** 服务时长 */
@property (nonatomic,copy) NSString *fee_time;
/** 有没有服务 1有 0没有 */
@property (nonatomic,copy) NSString *status;
/** 服务类型 */
@property (nonatomic,copy) NSString *service_type;
@end


