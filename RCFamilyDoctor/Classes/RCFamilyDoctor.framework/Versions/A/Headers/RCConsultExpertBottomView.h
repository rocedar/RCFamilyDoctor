//
//  RCConsultExpertBottomView.h
//  AFNetworking
//
//  Created by wtw on 2018/6/6.
//

#import <UIKit/UIKit.h>

@interface RCConsultExpertBottomView : UIView
@property (nonatomic,strong) UIView *unClickView;
@property (nonatomic,strong) UIButton *endConsultationBtn;

/** 发送按钮回调 */
- (void)expertTextViewBlock:(void(^)(NSString *record))block;

/** 结束本次咨询回调 */
- (void)endConsultBlock:(void(^)(UIButton *consultBtn))endConsultBlock;

/** 相册和拍照回调 */
- (void)takePhotoAndAlbumBlock:(void(^)(NSString *imgUrl))imgUrlBlock;
@end
