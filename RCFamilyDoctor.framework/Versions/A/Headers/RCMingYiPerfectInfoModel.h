//
//  RCMingYiPerfectInfoModel.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/7/29.
//

#import <Foundation/Foundation.h>

@interface RCMingYiPerfectInfoModel : NSObject
/** 诊断结果 */
@property (nonatomic,copy) NSString *result;
/** 就诊时间 */
@property (nonatomic,copy) NSString *medical_time;
/** 订单 id */
@property (nonatomic,copy) NSString *order_id;
/** 医院 */
@property (nonatomic,copy) NSString *hospital;
/** 就诊科室 */
@property (nonatomic,copy) NSString *profession;
/** 当前症状 */
@property (nonatomic,copy) NSString *symptom;
/** 检查单 */
@property (nonatomic,copy) NSString *inspection;
@property (nonatomic,strong) NSMutableArray *inspectionArr;
/** 期望得到的帮助 */
@property (nonatomic,copy) NSString *expect_help;
/** 病历资料 */
@property (nonatomic,copy) NSString *case_data;
@property (nonatomic,strong) NSMutableArray *case_dataArr;
/** 患者id */
@property (nonatomic,copy) NSString *patient_id;
@end
