//
//  RCDoctorDetailHeaderView.h
//  AFNetworking
//
//  Created by wtw on 2018/5/29.
//

#import <UIKit/UIKit.h>

@class RCDoctorDetailModel;
@interface RCDoctorDetailHeaderView : UIView

@property (nonatomic,strong) RCDoctorDetailModel *model;

/** 我的医生回调 */
@property (nonatomic,copy) void(^mydoctorBlock)(void);

/** 资质证书回调 */
@property (nonatomic,copy) void(^aptitudesBtnBlock)(void);

@end
