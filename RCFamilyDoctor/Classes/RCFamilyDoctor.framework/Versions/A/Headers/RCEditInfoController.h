//
//  RCEditInfoController.h
//  DongYa
//
//  Created by long108 on 2017/11/23.
//  Copyright © 2017年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCEditInfoController : UIViewController
- (void)editInfoWithBlock:(void(^)(NSString *name, NSInteger sickId))block;
@end
