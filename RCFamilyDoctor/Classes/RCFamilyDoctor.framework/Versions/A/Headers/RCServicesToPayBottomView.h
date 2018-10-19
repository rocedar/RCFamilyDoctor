//
//  RCServicesToPayBottomView.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/9/13.
//

#import <UIKit/UIKit.h>

@class RCServicesSkuModel,RCServicesRenewModel;
@interface RCServicesToPayBottomView : UIView

@property (nonatomic,strong) RCServicesSkuModel *model;

@property (nonatomic,strong) RCServicesRenewModel *renewModel;

@property (nonatomic,copy) void(^payBtnClickBlock)(void);

@end
