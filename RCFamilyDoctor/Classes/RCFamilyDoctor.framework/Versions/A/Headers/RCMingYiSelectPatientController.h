//
//  RCMingYiSelectPatientController.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>

@interface RCMingYiSelectPatientController : UIViewController

@property (nonatomic,copy) void(^patientBlock)(NSString *sickId,NSString *sickName);

@end
