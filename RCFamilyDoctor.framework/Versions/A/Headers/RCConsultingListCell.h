//
//  RCConsultingListCell.h
//  AFNetworking
//
//  Created by wtw on 2018/5/31.
//

#include "RCBaseTableViewCell.h"

@class RCConsultingRecordModel;
@interface RCConsultingListCell : RCBaseTableViewCell

@property (nonatomic,strong) RCConsultingRecordModel *model;

+ (instancetype)cellWithTablView:(UITableView *)tableView;

@end
