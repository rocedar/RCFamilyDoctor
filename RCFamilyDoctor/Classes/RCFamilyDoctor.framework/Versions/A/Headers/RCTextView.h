//
//  RCTextView.h
//  AFNetworking
//
//  Created by wtw on 2018/6/4.
//

#import <UIKit/UIKit.h>

@interface RCTextView : UITextView

/** 占位文字 */
@property (nonatomic,copy) NSString *placeholder;
/** 占位文字颜色 */
@property (nonatomic,strong) UIColor *placeholderColor;

@end
