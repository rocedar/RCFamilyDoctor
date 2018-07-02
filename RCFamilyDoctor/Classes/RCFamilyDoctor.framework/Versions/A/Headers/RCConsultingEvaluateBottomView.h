//
//  RCConsultingEvaluateBottomView.h
//  AFNetworking
//
//  Created by wtw on 2018/6/1.
//

#import <UIKit/UIKit.h>

@class RCConsultingEvaluateModel;
@interface RCConsultingEvaluateBottomView : UIView
@property (nonatomic,strong) RCConsultingEvaluateModel *model;
@property (nonatomic,copy) void(^addMyDoctorBlock)(void);
@end
