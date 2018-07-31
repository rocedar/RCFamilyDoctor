//
//  RCOrderDetailModel.h
//  AFNetworking
//
//  Created by long108 on 2018/7/16.
//

#import <Foundation/Foundation.h>

@class Snapshot, ProgressModel;

@interface RCOrderDetailModel : NSObject
/** 订单状态 = -1 删除; = 0 已取消; = 1 待付款; = 2 已支付; = 3 已完成; = 4 已退款 */
@property (copy, nonatomic) NSString *status;
/** 头像url */
@property (copy, nonatomic) NSString *portrait;
/** 订单ID */
@property (copy, nonatomic) NSString *order_id;
/** 待付金额 */
@property (copy, nonatomic) NSString *fee;
/** 实付金额 */
@property (copy, nonatomic) NSString *fee_paid;
/** 期望服务时间 */
@property (copy, nonatomic) NSString *reservation_time;
/** 确认服务时间 */
@property (copy, nonatomic) NSString *service_time;
/** 病人ID */
@property (copy, nonatomic) NSString *patient_id;
/** 病人姓名 */
@property (copy, nonatomic) NSString *patient_name;
/** 病人电话 */
@property (copy, nonatomic) NSString *phone;
/** 医生信息 */
@property (strong, nonatomic) Snapshot *snapshot;
/** 订单进度 */
@property (strong, nonatomic) NSArray<ProgressModel *> *progress;

@end

@interface ProgressModel : NSObject
/** 时间 */
@property (copy, nonatomic) NSString *order_time;
/** 描述 */
@property (copy, nonatomic) NSString *order_desc;

@property (assign, nonatomic) CGFloat height;


@end
