//
//  RCOrderModel.h
//  AFNetworking
//
//  Created by long108 on 2018/7/16.
//

#import <Foundation/Foundation.h>

@class Snapshot;

@interface RCOrderModel : NSObject
/** 订单状态 = -1 删除; = 0 已取消; = 1 待付款; = 2 已支付; = 3 已完成; = 4 已退款 */
@property (copy, nonatomic) NSString *status;
/** 订单ID */
@property (copy, nonatomic) NSString *order_id;
/** 付款类型 = 1000 微信; = 1001 支付宝 */
@property (copy, nonatomic) NSString *payment_type;
/** 订单类型 */
@property (copy, nonatomic) NSString *order_type;
/** 实付金额 */
@property (copy, nonatomic) NSString *fee_paid;
/** 待付金额 */
@property (copy, nonatomic) NSString *fee;
/** 支付时间 */
@property (copy, nonatomic) NSString *pay_time;
/** 确认服务时间 */
@property (copy, nonatomic) NSString *service_time;
/** 订单生成时间 */
@property (copy, nonatomic) NSString *create_time;
/** 支付失效时间 */
@property (copy, nonatomic) NSString *expire_time;
/** 期望服务时间 */
@property (copy, nonatomic) NSString *reservation_time;
/** 医生信息快照 */
@property (strong, nonatomic) Snapshot *snapshot;
/** 病人id */
@property (nonatomic,copy) NSString *patient_id;
@property (assign, nonatomic) CGFloat height;

@end

@interface Snapshot : NSObject
/** 医生名称 */
@property (copy, nonatomic) NSString *doctor_name;
/** 医生职称 */
@property (copy, nonatomic) NSString *title_name;
/** 医院名称 */
@property (copy, nonatomic) NSString *hospital_name;
/** 科室 */
@property (copy, nonatomic) NSString *profession_name;
/** 服务类型名称 */
@property (copy, nonatomic) NSString *service_type_name;
/** 服务类型: 电话咨询 1001 视频咨询 1002 */
@property (copy, nonatomic) NSString *service_type_id;

@end
