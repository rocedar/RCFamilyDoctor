//
//  RCQuestionnarieController.h
//  ToModel
//
//  Created by long108 on 2017/8/9.
//  Copyright © 2017年 long108. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DYHealthHistoryController : UIViewController

@property (copy, nonatomic) NSString *questionnaire_id;
@property (copy, nonatomic) NSString *other_user;
/**
 填写完健康史回调(咨询专家组页面)
 */
- (void)healthHistoryBlock:(void(^)(void))block;
@end
