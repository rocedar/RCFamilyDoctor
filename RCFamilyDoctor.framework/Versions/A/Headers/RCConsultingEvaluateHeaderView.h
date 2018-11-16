//
//  RCConsultingEvaluateHeaderView.h
//  AFNetworking
//
//  Created by wtw on 2018/6/4.
//

#import <UIKit/UIKit.h>

@class RCConsultingEvaluateModel;
@interface RCConsultingEvaluateHeaderView : UIView

- (void)doctorEvaluationTextViewChageBlock:(void(^)(NSString *evaluation, NSString *gradeValue))block;

@property (nonatomic,strong) RCConsultingEvaluateModel *model;

@end
