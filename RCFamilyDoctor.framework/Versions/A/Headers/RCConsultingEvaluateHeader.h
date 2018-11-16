//
//  RCConsultingEvaluateHeader.h
//  AFNetworking
//
//  Created by wtw on 2018/5/31.
//

#import <UIKit/UIKit.h>

@class RCConsultingEvaluateModel;
@interface RCConsultingEvaluateHeader : UIView

@property (nonatomic,strong) RCConsultingEvaluateModel *model;
@property (strong, nonatomic)  UIProgressView *audioProgress;
@property (strong, nonatomic)  UIButton *playBtn;

@property (nonatomic,copy) void(^playBtnBlock)(NSInteger status);

@end
