//
//  DYDatePickerView.h
//  DongYa
//
//  Created by wtw on 2018/4/28.
//  Copyright © 2018年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCDatePicker : UIView

@property(nonatomic,copy)void (^doneClickBlock)(NSDate *date);

- (instancetype)initWithPickerMode:(UIDatePickerMode)mode minDate:(NSDate *)minDate maxDate:(NSDate *)maxDate resultBlock:(void(^)(NSDate *date))resultBlock;

- (void)show;

- (void)dismiss;

@end
