//
//  RCDatePickerView.h
//  RCDatePicker
//
//  Created by iMac on 17/2/23.
//  Copyright © 2017年 zRC. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum{
    DateStyleShowYearMonthDayHourMinute  = 0,
    DateStyleShowMonthDayHourMinute,
    DateStyleShowYearMonthDay,
    DateStyleShowMonthDay,
    DateStyleShowHourMinute
    
}RCDateStyle;


@interface RCDatePickerView : UIView

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (nonatomic, retain) NSDate *maxLimitDate;//限制最大时间（没有设置默认9999）
@property (nonatomic, retain) NSDate *minLimitDate;//限制最小时间（没有设置默认0）

-(instancetype)initWithDateStyle:(RCDateStyle)datePickerStyle currentDate:(NSDate *)date CompleteBlock:(void(^)(NSDate *))completeBlock;

-(void)show;


@end

