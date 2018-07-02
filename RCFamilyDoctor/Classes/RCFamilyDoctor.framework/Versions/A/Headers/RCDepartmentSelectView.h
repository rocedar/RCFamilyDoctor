//
//  RCDepartmentSelectView.h
//  AFNetworking
//
//  Created by wtw on 2018/5/25.
//

#import <UIKit/UIKit.h>

@class RCDepartmentModel;

@interface RCDepartmentSelectView : UIView

/** 列表数据源 */
@property (strong, nonatomic) NSArray *dataArray;
/** 选择科室回调 */
@property (strong, nonatomic) void(^selectBlock)(RCDepartmentModel *model);

@end
