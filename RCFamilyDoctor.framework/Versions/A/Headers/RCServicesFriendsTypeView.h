//
//  RCServicesFriendsTypeView.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/9/6.
//

#import <UIKit/UIKit.h>

@interface RCServicesFriendsTypeView : UIView

@property (nonatomic,strong) UIButton *friendsBtn;
@property (nonatomic,strong) UIButton *selfBtn;
@property (nonatomic,strong) UILabel *priceLabel;

@property (nonatomic,copy) void(^bottomBlock)(NSInteger type);

@end
