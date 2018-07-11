//
//  RCExpertGroupCompleteCell.h
//  DongYa
//
//  Created by apple on 2017/11/27.
//  Copyright © 2017年 RC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RCExpertGroupMessageListModel;

@interface RCExpertGroupCompleteCell : UITableViewCell
@property (strong, nonatomic) RCExpertGroupMessageListModel *messageModel;
/** 问卷ID */
@property (assign, nonatomic) int question_id;
/** 序列 */
@property (assign, nonatomic) NSInteger rowIndex;

/** 机构ID  = 1001 高血压;  = 1002 胡大一 */
@property (copy, nonatomic) NSString *orgId;

/**
 更新咨询专家组行高
 */
- (void)updateTableViewRowHeightBlock:(void(^)(void))block;

/**
 填写完健康史的回调
 */
- (void)saveConsultRecoardBlock:(void(^)(NSInteger sickId, NSInteger chooseIndex))consultRecoardBlock;

/**
 点击被选中，questionnaire_id > 0时的回调
 */
- (void)sickDidSelectedBlock:(void(^)(NSInteger sickId, NSInteger chooseIndex))sickSelectedBlock;
@end
