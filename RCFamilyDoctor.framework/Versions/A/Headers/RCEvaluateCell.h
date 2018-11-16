//
//  RCEvaluateCell.h
//  AFNetworking
//
//  Created by wtw on 2018/5/23.
//

#import "RCBaseTableViewCell.h"

@class RCEvaluateModel;
@interface RCEvaluateCell : RCBaseTableViewCell

+ (instancetype)cellWithTableView:(UITableView *)tableView;

- (void)configWithModel:(RCEvaluateModel *)model;

@end
