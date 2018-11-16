//
//  RCDoctorBottomView.h
//  AFNetworking
//
//  Created by wtw on 2018/5/29.
//

#import <UIKit/UIKit.h>

@interface RCDoctorBottomView : UIView

/** 标题 */
@property (nonatomic,copy) NSString *title;
/** 按钮点击回调 */
@property (nonatomic,copy) void(^clickBlock)(void);
@property (nonatomic,strong) UIButton *button;

@end
