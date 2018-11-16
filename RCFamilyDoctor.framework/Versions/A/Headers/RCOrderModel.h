//
//  RCOrderModel.h
//  AFNetworking
//
//  Created by long108 on 2018/7/16.
//

#import <Foundation/Foundation.h>

@class Snapshot;

@interface RCOrderModel : NSObject
/** 订单状态 = -1 删除; = 0 已取消; = 1 待付款; = 2 已支付; = 3 已完成; = 4 退款中; = 6 已退款 */
@property (copy, nonatomic) NSString *status;
/** 图标 */
@property (copy, nonatomic) NSString *order_icon;
/** 支付URL */
@property (copy, nonatomic) NSString *rctp_url;
/** 订单ID */
@property (copy, nonatomic) NSString *order_id;
/** 订单类型 == 1000名医生; 1002 家庭医生; 1003 协医无忧 */
@property (copy, nonatomic) NSString *order_type;
/** 实付金额 */
@property (copy, nonatomic) NSString *fee_paid;
/** 待付金额 */
@property (copy, nonatomic) NSString *fee;
/** 支付时间 */
@property (copy, nonatomic) NSString *pay_time;
/** 订单生成时间 */
@property (copy, nonatomic) NSString *create_time;
/** 支付失效时间 */
@property (copy, nonatomic) NSString *expire_time;
/** 医生信息快照 */
@property (strong, nonatomic) Snapshot *snapshot;
/** 订单名称 */
@property (copy, nonatomic) NSString *order_name;
/** 行高 */
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
/** 病人id */
@property (nonatomic,copy) NSString *patient_id;
/** 服务类型名称 */
@property (copy, nonatomic) NSString *service_type_name;
/** 服务类型: 电话咨询 1001 视频咨询 1002 */
@property (copy, nonatomic) NSString *service_type_id;
/** 期望服务时间 */
@property (copy, nonatomic) NSString *reservation_time;
/** 确认服务时间 */
@property (copy, nonatomic) NSString *service_time;
/** 开通状态 = 0 未开通; = 1 已开通 */
@property (assign, nonatomic) int server_status;
/** 服务期限 */
@property (copy, nonatomic) NSString *server_time;
/** 服务类型 = 0 他人; = 1 自用 */
@property (assign, nonatomic) int server_user_type;

@end
