//
//  DYEditInfoGenderCell.h
//  DongYa
//
//  Created by long108 on 2017/11/23.
//  Copyright © 2017年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DYEditInfoGenderCell : UITableViewCell
@property (copy, nonatomic) NSString *gender;

@property (copy, nonatomic) void(^genderBlock)(NSString *gender);
@end
