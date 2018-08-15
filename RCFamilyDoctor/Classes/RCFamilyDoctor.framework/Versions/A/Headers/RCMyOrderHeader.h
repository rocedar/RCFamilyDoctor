//
//  RCMyOrderHeader.h
//  AFNetworking
//
//  Created by long108 on 2018/7/10.
//

#import <UIKit/UIKit.h>

@interface RCMyOrderHeader : UIView

@property (strong, nonatomic) NSArray *titleArray;

@property (assign, nonatomic) NSInteger selectIndex;

@property (copy, nonatomic) void(^selectBlock)(NSString *orderStatus);

@end
