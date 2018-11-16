//
//  RCInstitutionCell.h
//  AFNetworking
//
//  Created by wtw on 2018/5/23.
//

#import "RCBaseTableViewCell.h"

@class RCInstitutionModel;

@interface RCInstitutionCell : RCBaseTableViewCell

+ (instancetype)cellWithTableView:(UITableView *)tableView;

- (void)configWithModel:(RCInstitutionModel *)model;

@end
