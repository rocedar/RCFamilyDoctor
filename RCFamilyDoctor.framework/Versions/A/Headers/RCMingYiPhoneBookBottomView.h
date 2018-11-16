//
//  RCMingYiPhoneBookBottomView.h
//  AFNetworking
//
//  Created by wtw on 2018/7/24.
//

#import <UIKit/UIKit.h>

@class RCMingYiDoctorDetailModel;
@interface RCMingYiPhoneBookBottomView : UIView
/** 确认预约 */
@property (nonatomic,copy) void(^bookphoneBlock)(void);

@property (nonatomic,strong) RCMingYiDoctorDetailModel *model;
@end
