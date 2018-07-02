//
//  DYExpertGroupExpertCell.h
//  DongYa
//
//  Created by apple on 2017/11/28.
//  Copyright © 2017年 DY. All rights reserved.
//

#import "RCBaseTableViewCell.h"

@class DYExpertGroupMessageListModel;

@interface DYExpertGroupExpertCell : RCBaseTableViewCell
@property (strong, nonatomic) DYExpertGroupMessageListModel *messageModel;

/** 机构ID  = 1001 高血压;  = 1002 胡大一 */
@property (copy, nonatomic) NSString *orgId;
@end
