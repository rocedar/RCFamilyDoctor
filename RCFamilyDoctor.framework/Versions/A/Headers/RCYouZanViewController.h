//
//  DYYouZanViewController.h
//  DongYa
//
//  Created by apple on 2017/5/26.
//  Copyright © 2017年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, loginTime) {
    kLoginTimeNever = 0,     //演示不登录
    kLoginTimePrior = 1,     //演示先登录
    kLoginTimeWhenNeed = 2,  //演示后登录
};

@interface RCYouZanViewController : UIViewController
/**
 登录时机
 */
@property (assign, nonatomic) loginTime loginTime;
/**
 首次加载链接
 */
@property (copy, nonatomic) NSString *loadUrl;
@end
