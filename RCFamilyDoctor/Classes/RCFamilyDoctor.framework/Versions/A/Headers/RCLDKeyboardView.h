//
//  RCLDKeyboardView.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/11/5.
//

#import <UIKit/UIKit.h>

@interface RCLDKeyboardView : UIView

@property (copy, nonatomic) void(^photoBlock)(void);
@property (copy, nonatomic) void(^voiceBlock)(void);
@property (copy, nonatomic) void(^keyboardBlock)(void);

@end
