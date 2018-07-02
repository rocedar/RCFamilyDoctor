//
//  RCFDHomePageHeaderView.h
//  RCFamilyDoctor_Example
//
//  Created by wtw on 2018/5/17.
//  Copyright © 2018年 rocedar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RCServeStatusModel;
@interface RCFDHomePageHeaderView : UIView

@property (copy, nonatomic) void(^changeBlock)(NSInteger tag);

- (void)updateViewStatus:(RCServeStatusModel *)statusModel;

@end
