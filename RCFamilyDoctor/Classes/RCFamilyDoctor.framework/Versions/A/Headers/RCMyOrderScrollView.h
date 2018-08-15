//
//  RCMyOrderScrollView.h
//  AFNetworking
//
//  Created by long108 on 2018/8/14.
//

#import <UIKit/UIKit.h>

@interface RCMyOrderScrollView : UIView

/**
 所有参与滚动的ViewController
 */
@property(nonatomic,strong)NSArray *viewControllers;

/**
 标题名称
 */
@property(nonatomic,strong)NSArray *titles;

/**
 选中时，按钮文字颜色
 */
@property(nonatomic,strong)UIColor *selectedColor;

/**
 未选中时，按钮文字颜色
 */
@property(nonatomic,strong)UIColor *unSelectedColor;

@end
