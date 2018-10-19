//
//  RCFDOrderInfoCell.h
//  AFNetworking
//
//  Created by long108 on 2018/9/4.
//

#import <UIKit/UIKit.h>

@interface RCFDOrderInfoCell : UITableViewCell

@property (assign, nonatomic) NSInteger status;
/** 订单号 */
@property (copy, nonatomic) NSString *orderId;

@property (strong, nonatomic) NSDictionary *dict;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
