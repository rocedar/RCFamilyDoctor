//
//  RCHealthServiceHomePage.h
//  AFNetworking
//
//  Created by wtw on 2018/10/30.
//

#import <UIKit/UIKit.h>

@interface RCHealthServiceHomePage : UIViewController
/** 用户手机号 */
@property (nonatomic,copy) NSString *user_phone;
/** 用户头像地址 */
@property (nonatomic,strong) NSURL *user_icon_url;
/** 用户使用的设备 多个设备逗号隔开 */
@property (nonatomic,copy) NSString *device_no;
/** 是否需要对导航栏特殊处理 (可选)*/
@property (nonatomic,assign) BOOL handlernavigationBar;
@end
