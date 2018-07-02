//
//  RCConsultingEvaluateModel.h
//  AFNetworking
//
//  Created by wtw on 2018/5/31.
//

#import <Foundation/Foundation.h>

@interface RCConsultingEvaluateModel : NSObject

/** 症状描述 */
@property (copy, nonatomic) NSString *symptom;
/** 是否关注该医生， 1  已关注， 0 未关注 */
@property (assign, nonatomic) int focus;
/** 头像URL地址 */
@property (copy, nonatomic) NSString *portrait;
/** 医生名字 */
@property (copy, nonatomic) NSString *doctor_name;
/** 问诊开始时间 */
@property (assign, nonatomic) NSInteger start_time;
/** 医生账号，微问诊系统内唯一标示 */
@property (copy, nonatomic) NSString *doctor_id;
/** 职称 */
@property (copy, nonatomic) NSString *title_name;
/** 录音url地址 */
@property (copy, nonatomic) NSString *audio_url;
/** 医院名称 */
@property (copy, nonatomic) NSString *hospital_name;
/** 科室名称 */
@property (copy, nonatomic) NSString *department_name;
/** 建议 */
@property (copy, nonatomic) NSString *suggest;
/** 咨询时长 */
@property (copy, nonatomic) NSString *total_time;
/** 辅助时间 */
@property (copy, nonatomic) NSString *consultTime;
/** 症状行高 */
@property (assign, nonatomic) CGFloat symptomCellHeight;
/** 医生建议行高 */
@property (assign, nonatomic) CGFloat suggestCellHeight;
/** 用户对医生的评价 */
@property (copy, nonatomic) NSString *comment;
/** 评价时间 */
@property (assign, nonatomic) NSInteger comment_time;
/** 评分 */
@property (assign, nonatomic) CGFloat grade;
/** 用户名 */
@property (copy, nonatomic) NSString *user_name;
/** 本次服务评价行高 */
@property (assign, nonatomic) CGFloat serveAdvisoryHeight;
/** 计算header 高度 */
@property (nonatomic,assign) CGFloat headerHeight;

@end
