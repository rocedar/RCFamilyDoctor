//
//  DYEditInfoScaleCell.h
//  DongYa
//
//  Created by long108 on 2017/11/23.
//  Copyright © 2017年 DY. All rights reserved.
//

#import "RCBaseTableViewCell.h"

@interface RCEditInfoScaleCell : RCBaseTableViewCell
/** 标题 */
@property (copy, nonatomic) NSString *title;
/** 单位 */
@property (copy, nonatomic) NSString *unit;
/** 刻度个数 */
@property (assign, nonatomic) int count;
/** 最大值 */
@property (assign, nonatomic) int maxValue;
/** 最小值 */
@property (assign, nonatomic) int minValue;
/** 当前值 */
@property (assign, nonatomic) int cureentValue;
/** 刻度 = 1; = 0.1 */
@property (assign, nonatomic) CGFloat scaleValue;

/** 结果回调 */
@property (copy, nonatomic) void(^valueBlock)(NSInteger value);
@end
