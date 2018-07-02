//
//  RCDoctorDetailController.h
//  AFNetworking
//
//  Created by wtw on 2018/5/29.
//

#import <UIKit/UIKit.h>

@interface RCDoctorDetailController : UIViewController
/** 医生ID */
@property (copy, nonatomic) NSString *doctor_id;
/** 手机号码 */
@property (assign, nonatomic) NSInteger phone;
@end
