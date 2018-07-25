//
//  RCDropdownItem.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>

@interface RCDropdownItem : UIControl

@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype)initWithFrame:(CGRect)frame andTitle:(NSString *)title andImage:(UIImage *)image;

@end
