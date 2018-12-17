//
//  RCKeyboardMoreView.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/11/13.
//

#import <UIKit/UIKit.h>

@interface RCKeyboardMoreView : UIView
/** 点击图片回调 */
@property (copy, nonatomic)void(^picBlock)(void);
/** 点击拍摄回调 */
@property (copy, nonatomic)void(^takePhotoBlock)(void);

@end
