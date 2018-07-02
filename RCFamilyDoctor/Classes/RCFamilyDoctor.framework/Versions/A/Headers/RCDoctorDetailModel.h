//
//  RCDoctorDetailModel.h
//  AFNetworking
//
//  Created by wtw on 2018/5/30.
//

#import <Foundation/Foundation.h>

@interface RCDoctorDetailModel : NSObject

/** 医生id */
@property (copy, nonatomic) NSString *doctor_id;
/** 医生头像 */
@property (copy, nonatomic) NSString *portrait;
/** 服务次数 */
@property (copy, nonatomic) NSString *server_time;
/** 科室 */
@property (copy, nonatomic) NSString *department_name;
/** 医生名 */
@property (copy, nonatomic) NSString *doctor_name;
/** 医院名 */
@property (copy, nonatomic) NSString *hospital_name;
/** 擅长 */
@property (copy, nonatomic) NSString *skilled;
/** 简介 */
@property (copy, nonatomic) NSString *profile;
/** 资质证书 */
@property (copy, nonatomic) NSString *certification;
/** 职称 */
@property (copy, nonatomic) NSString *title_name;
/** 星级 */
@property (assign, nonatomic) CGFloat grade;
/** 状态：0-在线，1-忙碌，2-离线 */
@property (assign, nonatomic) int status;
/** 关注：0-未关注，1-已关注 */
@property (assign, nonatomic) int focus;
/** 简介的高度 */
@property (assign, nonatomic) CGFloat profileHeight;
/** 擅长的高度 */
@property (assign, nonatomic) CGFloat skilledHeight;

@end

@interface RCDoctorDetailCommentModel : NSObject

/** 评论id */
@property (assign, nonatomic) int comment_id;
/** 咨询记录id */
@property (assign, nonatomic) int record_id;
/** 医生id */
@property (copy, nonatomic) NSString *doctor_id;
/** 用户id */
@property (assign, nonatomic) int user_id;
/** 用户名 */
@property (copy, nonatomic) NSString *user_name;
/** 评分 */
@property (assign, nonatomic) CGFloat grade;
/** 评价内容 */
@property (copy, nonatomic) NSString *comment;
/** 评价时间 */
@property (copy, nonatomic) NSString *comment_time;
/** 评价高度 */
@property (assign, nonatomic) CGFloat commentHeight;

@end
