//
//  RCMingYiDoctorDetailHeader.h
//  AFNetworking
//
//  Created by wtw on 2018/7/19.
//

#import <UIKit/UIKit.h>

@class RCMingYiDoctorDetailModel;
@interface RCMingYiDoctorDetailHeader : UIView
@property (nonatomic,strong) RCMingYiDoctorDetailModel *model;
@property (nonatomic,copy) void(^selectViewBlock)(NSInteger tag);
@property (nonatomic,copy) void(^segmentBlock)(NSInteger tag);
@end
