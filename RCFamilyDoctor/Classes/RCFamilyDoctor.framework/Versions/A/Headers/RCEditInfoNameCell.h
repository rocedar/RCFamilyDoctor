//
//  DYEditInfoNameCell.h
//  DongYa
//
//  Created by long108 on 2017/11/23.
//  Copyright © 2017年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RCEditInfoNameCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (copy, nonatomic) void(^nameBlock)(NSString *name);
@end
