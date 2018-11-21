//
//  RCRefundController.h
//  AFNetworking
//
//  Created by long108 on 2018/7/20.
//

#import <UIKit/UIKit.h>

@interface RCRefundController : UIViewController

@property (copy, nonatomic) NSString *orderId;

@property (copy, nonatomic) NSString *feePaid;
/** 订单类型 == 1000名医生; 1002 家庭医生; 1003 协医无忧 */
@property (assign, nonatomic) int orderType;

@end
