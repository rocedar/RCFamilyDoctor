//
//  RCServicesTopayInfoCell.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/9/13.
//

#import <UIKit/UIKit.h>

@interface RCServicesTopayInfoCell : UITableViewCell

@property (nonatomic,strong) NSDictionary *dict;

@property (nonatomic,copy) void(^inputBlock)(NSString *value);

@property (nonatomic,copy) void(^switchBlock)(NSInteger status);

@property (nonatomic,strong) UITextField *textField;
@property (nonatomic,strong) UIButton *switchButton;

+ (instancetype)cellWithTablview:(UITableView *)tableView;
@end
