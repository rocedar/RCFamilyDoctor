//
//  RCLDConsultKeyboardView.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/11/13.
//

#import <UIKit/UIKit.h>
#import "RCKeyboardMoreView.h"
#import "RCLDConsultDetailModel.h"

@interface RCLDConsultKeyboardView : UIView

/** 输入框 */
@property (strong, nonatomic) UITextField *textField;
/** 更多界面 */
@property (strong, nonatomic) RCKeyboardMoreView *moreView;
@property (strong, nonatomic) RCLDConsultDetailModel *detailModel;

@property (copy, nonatomic) void(^addBtnClickBlock)(void);
@property (copy, nonatomic) void(^editBeginBlock)(void);
@property (copy, nonatomic) void(^sendBlock)(NSString *);

@property (copy, nonatomic) void(^picSendBlock)(NSString *);

@end
