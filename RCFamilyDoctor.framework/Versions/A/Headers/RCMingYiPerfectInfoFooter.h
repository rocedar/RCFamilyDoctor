//
//  RCMingYiPerfectInfoFooter.h
//  AFNetworking
//
//  Created by wtw on 2018/7/29.
//

#import <UIKit/UIKit.h>

@class RCMingYiPerfectInfoModel;
@interface RCMingYiPerfectInfoFooter : UIView
@property (nonatomic,strong) RCMingYiPerfectInfoModel *model;
/** 症状回调 */
@property (nonatomic,copy) void(^symptomBlock)(NSString *symptomStr);
/** 帮助回调 */
@property (nonatomic,copy) void(^helpBlock)(NSString *helpStr);
@end
