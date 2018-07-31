//
//  RCMingYiPerfectInfoHeader.h
//  AFNetworking
//
//  Created by wtw on 2018/7/26.
//

#import <UIKit/UIKit.h>

@class RCMingYiPerfectInfoModel;
@interface RCMingYiPerfectInfoHeader : UIView
@property (nonatomic,strong) RCMingYiPerfectInfoModel *model;
/** 时间选择回调 */
@property (nonatomic,copy) void(^selectTimeBlock)(NSString *timeStr);
/** 填写医院信息 */
@property (nonatomic,copy) void(^hospitalBlock)(NSString *hospitalStr);
/** 填写科室信息 */
@property (nonatomic,copy) void(^departmentBlock)(NSString *departmentStr);
/** 就诊结果 */
@property (nonatomic,copy)  void(^resultBlock)(NSString *resultStr);
@end
