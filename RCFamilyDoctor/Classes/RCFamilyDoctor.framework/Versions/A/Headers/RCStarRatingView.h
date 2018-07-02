//
//  RCStarRatingView.h
//  RCFamilyDoctor_Example
//
//  Created by wtw on 2018/5/23.
//  Copyright © 2018年 rocedar. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef BOOL(^RCStarRatingViewShouldBeginGestureRecognizerBlock)(UIGestureRecognizer *gestureRecognizer);

@interface RCStarRatingView : UIControl

@property (nonatomic,assign)  NSUInteger maximumValue;
@property (nonatomic,assign)  CGFloat minimumValue;
@property (nonatomic,assign)  CGFloat value;
@property (nonatomic,assign)  CGFloat spacing;
@property (nonatomic,assign)  BOOL allowsHalfStars;
@property (nonatomic,assign)  BOOL accurateHalfStars;
@property (nonatomic,assign)  BOOL continuous;

@property (nonatomic) BOOL shouldBecomeFirstResponder;

// Optional: if `nil` method will return `NO`.
@property (nonatomic, copy) RCStarRatingViewShouldBeginGestureRecognizerBlock shouldBeginGestureRecognizerBlock;

@property (nonatomic,strong)  UIColor *starBorderColor;
@property (nonatomic,assign)  CGFloat starBorderWidth;

@property (nonatomic,strong)  UIColor *emptyStarColor;

@property (nonatomic,strong)  UIImage *emptyStarImage;
@property (nonatomic,strong)  UIImage *halfStarImage;
@property (nonatomic,strong)  UIImage *filledStarImage;

@end
