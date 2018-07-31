//
//  RCConditionCell.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>
#import "RCDropdownModel.h"

@interface RCConditionCell : UITableViewCell

@property (strong, nonatomic) RCDropdownModel *dropdownModel;

@property (strong, nonatomic) RCChildModel *childModel;


+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
