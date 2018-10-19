//
//  RCFDOrderCell.h
//  AFNetworking
//
//  Created by long108 on 2018/9/4.
//

#import <UIKit/UIKit.h>
#import "RCOrderModel.h"

@interface RCFDOrderCell : UITableViewCell

@property (strong, nonatomic) RCOrderModel *orderModel;

@property (copy, nonatomic) void(^refreshBlock)(void);

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
