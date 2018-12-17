//
//  RCLDConsultDetailModel.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/11/12.
//

#import <Foundation/Foundation.h>
@class RCLDConsultDoctor,RCLDConsultQuestion;

@interface RCLDConsultDetailModel : NSObject
/** 寻医咨询ID */
@property (copy, nonatomic) NSString *rid;
/** 寻医咨询人ID */
@property (copy, nonatomic) NSString *ruid;
/** 寻医问题ID */
@property (copy, nonatomic) NSString *qid;
/** 病人ID */
@property (copy, nonatomic) NSString *patient_id;
/** 状态 = 0 不可以咨询； = 1 可以咨询 */
@property (copy, nonatomic) NSString *status;
/** 是否咨询结束 =0 已结束；= 1 未结束 */
@property (copy, nonatomic) NSString *advice_status;
/** 医生信息 */
@property (strong, nonatomic) RCLDConsultDoctor *doctor;
/** 对话列表 */
@property (strong, nonatomic) NSArray <RCLDConsultQuestion *>*questions;
@end

@interface RCLDConsultDoctor : NSObject
/** 医生头像 */
@property (copy, nonatomic) NSString *doctor_icon;
/** 医生姓名 */
@property (copy, nonatomic) NSString *doctor_name;
/** 医生职称 */
@property (copy, nonatomic) NSString *title_name;
/** 科室 */
@property (copy, nonatomic) NSString *department_name;
/** 医院名称 */
@property (copy, nonatomic) NSString *hospital_name;
@end

@interface RCLDConsultQuestion : NSObject
/** 咨询ID */
@property (assign, nonatomic) int advice_id;
/** 病人头像 */
@property (copy, nonatomic) NSString *icon;
/** 文字信息 */
@property (copy, nonatomic) NSString *question;
/** 图片信息 */
@property (copy, nonatomic) NSString *img;
/** 时间 */
@property (copy, nonatomic) NSString *create_time;
/** 发信人 = 0 医生； = 1 自己 */
@property (assign, nonatomic) int who;
@property (copy, nonatomic) NSString *showTime;
@property (assign, nonatomic) CGFloat rowHeight;

@end
