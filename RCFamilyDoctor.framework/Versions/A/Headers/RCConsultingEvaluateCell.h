//
//  RCConsultingEvaluateCell.h
//  AFNetworking
//
//  Created by wtw on 2018/5/31.
//

#import "RCBaseTableViewCell.h"

@class RCConsultingEvaluateModel;
@interface RCConsultingEvaluateCell : RCBaseTableViewCell

@property (nonatomic,strong) RCConsultingEvaluateModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
