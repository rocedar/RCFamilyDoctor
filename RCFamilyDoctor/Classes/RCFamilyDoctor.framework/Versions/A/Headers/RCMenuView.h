//
//  RCMenuView.h
//  AFNetworking
//
//  Created by wtw on 2018/5/25.
//

#import <UIKit/UIKit.h>

@class RCDepartmentModel;

@interface RCMenuView : UIView

/** 所有参与滚动的ViewController */
@property(nonatomic,strong)NSArray *viewControllers;
/** 标题名称 */
@property(nonatomic,strong)NSArray *titles;
/** 科室列表数据 */
@property (strong, nonatomic) NSArray *dataArray;
/** 选择科室回调 */
@property (strong, nonatomic) void(^selectBlock)(RCDepartmentModel *model);
/**  存放底部VC的ScrollView */
@property(nonatomic,strong)UIScrollView *vcScrollView;

/**  当前控制器需隐藏window弹框 */
- (void)hideListViewAnimationWithDuration:(CGFloat)dur;

@end
