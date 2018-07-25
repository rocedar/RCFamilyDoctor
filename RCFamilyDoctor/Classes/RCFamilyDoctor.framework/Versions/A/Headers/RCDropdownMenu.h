//
//  RCDropdownMenu.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>

@protocol RCDropdownMenuDelegate <NSObject>

- (void)dropdownSelectedLeftIndex:(NSString *)left RightIndex:(NSString *)right;

@end

@interface RCDropdownMenu : UIViewController

@property (nonatomic, weak) id<RCDropdownMenuDelegate> delegate;

@property (strong, nonatomic) NSArray *menuItems;

- (void)hideDropdownMenu;

- (instancetype)initDropdownMenuWithFrame:(CGRect)frame Menutitles:(NSArray *)titles;

@end
