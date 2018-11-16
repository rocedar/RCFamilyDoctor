//
//  RCQuestionnaireCell.h
//  ToModel
//
//  Created by long108 on 2017/8/9.
//  Copyright © 2017年 long108. All rights reserved.
//
#import "RCBaseTableViewCell.h"
#import "QuestionnaireModel.h"

@interface RCQuestionnaireCell : RCBaseTableViewCell
@property (strong, nonatomic) TopicModel *topicModel;
@property (copy, nonatomic) void(^selectBlock)(TopicModel *model, OptionModel *optionModel);
@end
