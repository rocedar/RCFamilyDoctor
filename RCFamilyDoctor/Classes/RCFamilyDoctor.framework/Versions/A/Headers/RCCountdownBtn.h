//
//  RCCountdownBtn.h
//  AFNetworking
//
//  Created by long108 on 2018/7/20.
//

#import <UIKit/UIKit.h>

typedef void(^TimerStopBlock)(void);

@interface RCCountdownBtn : UIButton

@property (assign, nonatomic) NSInteger timestamp;

@property (strong, nonatomic) NSTimer *timer;

@property (nonatomic,copy)TimerStopBlock timerStopBlock;

@end
