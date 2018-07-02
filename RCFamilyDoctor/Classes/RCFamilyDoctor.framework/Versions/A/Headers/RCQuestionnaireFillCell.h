//
//  RCQuestionnaireFillCell.h
//  ToModel
//
//  Created by long108 on 2017/8/9.
//  Copyright © 2017年 long108. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QuestionnaireModel.h"

@interface RCQuestionnaireFillCell : UITableViewCell
@property (strong, nonatomic) TopicModel *topicModel;
@property (copy, nonatomic) void(^selectBlock)(TopicModel *topicModel);

@end
