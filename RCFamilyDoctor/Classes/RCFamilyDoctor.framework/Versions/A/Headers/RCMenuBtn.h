//
//  RCMenuBtn.h
//  AFNetworking
//
//  Created by wtw on 2018/5/25.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,BtnStatus)
{
    BtnStatusNormal = 0, // 正常置灰
    BtnStatusDown, // 选中箭头朝下
    BtnStatusUp,  // 展开选项箭头朝上
};

@interface RCMenuBtn : UIButton

@property (assign, nonatomic) BtnStatus status;

@property (strong, nonatomic) void(^clickBlock)(void);

- (instancetype)initWithFrame:(CGRect)frame
                        title:(NSString *)title
                     norColor:(UIColor *)norColor
                     selColor:(UIColor *)selColor
                     norImage:(NSString *)norImg
                     selImage:(NSString *)selImg
                    showImage:(NSString *)showImg;

@end
