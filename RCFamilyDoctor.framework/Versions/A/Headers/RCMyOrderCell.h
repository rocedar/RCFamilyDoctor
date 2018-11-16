//
//  RCMyOrderCell.h
//  AFNetworking
//
//  Created by long108 on 2018/7/10.
//

#import <RCFamilyDoctor/RCFamilyDoctor.h>
#import "RCOrderModel.h"

@interface RCMyOrderCell : UITableViewCell

@property (strong, nonatomic) RCOrderModel *orderModel;

@property (copy, nonatomic) void(^refreshBlock)(void);

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
