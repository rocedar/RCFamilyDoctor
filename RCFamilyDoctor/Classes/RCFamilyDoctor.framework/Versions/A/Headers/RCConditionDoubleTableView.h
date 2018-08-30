//
//  RCConditionDoubleTableView.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>
#import "RCDropdownModel.h"

@protocol RCConditionDoubleTableViewDelegate <NSObject>

@required
- (void)selectedFirstModel:(RCDropdownModel *)firstModel withSecondModel:(RCChildModel *)secondModel;
@end

@interface RCConditionDoubleTableView : UIViewController

@property (nonatomic, weak) id<RCConditionDoubleTableViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)showTableView:(NSInteger)index withShowItems:(NSArray *)showItems;
- (void)hideTableViewWithDruation:(CGFloat)time;

@end
