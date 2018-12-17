//
//  RCVoiceRecorderView.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/11/9.
//

#import <UIKit/UIKit.h>

@interface RCVoiceRecorderView : UIView

@property (nonatomic,copy) void(^recorderBlock)(NSString *recorderStr);

@end
