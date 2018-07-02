#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/** SDK 版本号 */
UIKIT_EXTERN NSString *const RC_SDK_VERSION;

/** UPYUN 地址 */
UIKIT_EXTERN NSString *const RCUpYUNUrl;
UIKIT_EXTERN NSString *const RCDEFAULT_BUCKET;
UIKIT_EXTERN NSString *const RCDEFAULT_PASSCODE;

/** 家庭医生服务购买地址 */
UIKIT_EXTERN NSString *const RCDoctorServerUrl;

@interface UIImage (image)

+ (UIImage *)rcBundleImageWithName:(NSString *)name;

@end

@interface NSBundle (boundle)

+ (NSBundle *)currentBundleWithtarget:(nullable id)target;

@end
NS_ASSUME_NONNULL_END
