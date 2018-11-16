//
//  RCGridPhotoCell.h
//  FangZhou
//
//  Created by long108 on 2017/7/20.
//  Copyright © 2017年 rocedar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCGridPhotoCell : UICollectionViewCell
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIButton *deleteBtn;
@property (nonatomic, assign) NSInteger row;

@property (copy, nonatomic) void(^deleteBlock)(UIButton *btn);

- (UIView *)snapshotView;

@end
