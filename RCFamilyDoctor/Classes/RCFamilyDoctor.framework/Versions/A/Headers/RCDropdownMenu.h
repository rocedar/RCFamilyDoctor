//
//  RCDropdownMenu.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>
#import "RCDropdownModel.h"

@protocol RCDropdownMenuDelegate <NSObject>

- (void)selectedIndex:(NSInteger)index firstModel:(RCDropdownModel *)firstModel withSecondModel:(RCChildModel *)secondModel;

@end

@interface RCDropdownMenu : UIViewController

@property (nonatomic, weak) id<RCDropdownMenuDelegate> delegate;

@property (strong, nonatomic) NSArray *menuItems;

- (void)hideDropdownMenuWithDuration:(CGFloat)time;

- (void)removeDropDownMenu;

- (instancetype)initDropdownMenuWithFrame:(CGRect)frame Menutitles:(NSArray *)titles;

@end
