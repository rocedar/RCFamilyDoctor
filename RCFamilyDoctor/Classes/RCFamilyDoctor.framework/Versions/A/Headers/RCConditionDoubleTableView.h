//
//  RCConditionDoubleTableView.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>

@protocol RCConditionDoubleTableViewDelegate <NSObject>

@required
- (void)selectedFirstValues:(NSArray *)values withTitle:(NSString *)title;
@end

@interface RCConditionDoubleTableView : UIViewController

@property (nonatomic, weak) id<RCConditionDoubleTableViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame;

- (void)showTableView:(NSInteger)index withShowItems:(NSArray *)showItems WithSelected:(NSString *)selected;
- (void)hideTableView;

@end
