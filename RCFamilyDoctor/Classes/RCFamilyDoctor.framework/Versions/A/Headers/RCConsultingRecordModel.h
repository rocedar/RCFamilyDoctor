//
//  RCConsultingRecordModel.h
//  AFNetworking
//
//  Created by wtw on 2018/5/31.
//

#import <Foundation/Foundation.h>

@interface RCConsultingRecordModel : NSObject
/** 问诊记录id */
@property (assign, nonatomic) NSInteger record_id;
/** 医生账号，微问诊系统内唯一标示 */
@property (copy, nonatomic) NSString *doctor_id;
/** 问诊开始时间 */
@property (assign, nonatomic) NSInteger start_time;
/** 问诊结束时间 */
@property (assign, nonatomic) NSInteger end_time;
/** 症状描述 */
@property (copy, nonatomic) NSString *symptom;
/** 用户ID */
@property (assign, nonatomic) NSInteger user_id;
/** 医生名字 */
@property (copy, nonatomic) NSString *doctor_name;
/** 头像URL地址 */
@property (copy, nonatomic) NSString *portrait;
/** 咨询时长 */
@property (copy, nonatomic) NSString *total_time;
/** 职称 */
@property (copy, nonatomic) NSString *title_name;
@end
