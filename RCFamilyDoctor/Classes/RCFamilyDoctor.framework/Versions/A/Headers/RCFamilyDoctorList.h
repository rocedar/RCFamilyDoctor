//
//  RCFamilyDoctorList.h
//  RCFamilyDoctor_Example
//
//  Created by wtw on 2018/5/24.
//  Copyright © 2018年 rocedar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCFamilyDoctorList : UIViewController
/** 用户手机号 */
@property (nonatomic,copy) NSString *user_phone;
/** 用户使用的设备 多个设备逗号隔开 */
@property (nonatomic,copy) NSString *device_no;
@end
