//
//  RCQuestionnaireSectionHeader.h
//  ToModel
//
//  Created by long108 on 2017/8/9.
//  Copyright © 2017年 long108. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCQuestionnaireSectionHeader : UIView
@property (weak, nonatomic) IBOutlet UILabel *title;
+ (instancetype)createHeader;
@end
