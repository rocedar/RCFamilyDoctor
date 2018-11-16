//
//  RCFDOrderDetailModel.h
//  AFNetworking
//
//  Created by long108 on 2018/10/9.
//

#import <Foundation/Foundation.h>
@class ProgressModel;

@interface RCFDOrderDetailModel : NSObject

/** 订单ID */
@property (copy, nonatomic) NSString *order_id;
/** 订单名称 */
@property (copy, nonatomic) NSString *order_name;
/** 商品icon */
@property (copy, nonatomic) NSString *order_icon;
/** 实付金额 */
@property (copy, nonatomic) NSString *fee_paid;
/** 订单金额 */
@property (copy, nonatomic) NSString *fee;
/** 服务期限 */
@property (copy, nonatomic) NSString *validity_period;
/** 服务类型 = 0 他人; = 1 自用 */
@property (copy, nonatomic) NSString *server_user_type;
/** 服务状态 = 0 未开通; = 1 已开通 */
@property (copy, nonatomic) NSString *server_status;
/** 订单状态 */
@property (copy, nonatomic) NSString *status;
/** 昵称 */
@property (copy, nonatomic) NSString *nick_name;
/** 手机号 */
@property (copy, nonatomic) NSString *phone;
/** 订单进度 */
@property (strong, nonatomic) NSArray <ProgressModel *> *progress;

@end
