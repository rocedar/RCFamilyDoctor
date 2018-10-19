//
//  RCServicesTopayHeader.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/9/10.
//

#import <UIKit/UIKit.h>

@class RCSkuUserRalationModel;
@interface RCServicesTopayHeader : UIView

@property (nonatomic,strong) NSArray *userRelationArr;

@property (nonatomic,copy) void(^relationBlock)(RCSkuUserRalationModel *model);

@end
