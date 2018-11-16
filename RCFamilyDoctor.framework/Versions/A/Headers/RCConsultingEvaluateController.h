//
//  RCConsultingEvaluateController.h
//  AFNetworking
//
//  Created by wtw on 2018/6/1.
//

#import <UIKit/UIKit.h>

@class RCConsultingEvaluateModel;
@interface RCConsultingEvaluateController : UIViewController

@property (nonatomic,strong) RCConsultingEvaluateModel *model;
/** record_id */
@property (nonatomic,assign) NSInteger record_id;

@end
