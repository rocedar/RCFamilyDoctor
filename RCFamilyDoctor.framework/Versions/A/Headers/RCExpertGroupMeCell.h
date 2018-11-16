//
//  DYExpertGroupMeCell.h
//  DongYa
//
//  Created by apple on 2017/11/28.
//  Copyright © 2017年 DY. All rights reserved.
//

#import "RCBaseTableViewCell.h"

@class RCExpertGroupMessageListModel;

@interface RCExpertGroupMeCell : RCBaseTableViewCell
@property (strong, nonatomic) RCExpertGroupMessageListModel *messageModel;
@end
