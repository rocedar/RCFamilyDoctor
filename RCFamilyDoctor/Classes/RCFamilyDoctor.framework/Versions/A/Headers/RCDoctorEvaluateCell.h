//
//  RCDoctorEvaluateCell.h
//  AFNetworking
//
//  Created by wtw on 2018/5/30.
//

#import "RCBaseTableViewCell.h"

@class RCDoctorDetailCommentModel;
@interface RCDoctorEvaluateCell : RCBaseTableViewCell

@property (nonatomic,strong) RCDoctorDetailCommentModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
