//
//  RCDropdownButton.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>

@protocol RCDropdownButtonDelegate <NSObject>

- (void)showDropdownMenu:(NSInteger)index;
- (void)hideDropdownMenu;

@end

@interface RCDropdownButton : UIView

@property (nonatomic, weak) id<RCDropdownButtonDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame WithDropdownButtonTitles:(NSArray *)titles;

- (void)selectedItemIndex:(NSInteger)index title:(NSString *)title;

@end
