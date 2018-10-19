//
//  RCServicesDetailHeader.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/9/5.
//

#import <UIKit/UIKit.h>

@class RCServicesDetailModel,RCServicesDetailListModel;
@interface RCServicesDetailHeader : UIView

@property (nonatomic,copy) void(^selectBlock)(RCServicesDetailListModel *model);
@property (nonatomic,strong) RCServicesDetailModel *model;

@end
