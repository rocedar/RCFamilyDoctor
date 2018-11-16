//
//  RCMingYiPhoneBookHeader.h
//  AFNetworking
//
//  Created by wtw on 2018/7/24.
//

#import <UIKit/UIKit.h>

@class RCMingYiDoctorDetailModel;
@interface RCMingYiPhoneBookHeader : UIView
/** 期望时间 */
@property (nonatomic,copy) void(^selectTimeBlock)(NSString *timeStr);
/** 电话号码 */
@property (nonatomic,copy) void(^selectPhoneBlock)(NSString *phone);
/** 患者信息 */
@property (nonatomic,copy) void(^suffererBlock)(NSString *patientId);
@property (nonatomic,strong) RCMingYiDoctorDetailModel *model;
@end
