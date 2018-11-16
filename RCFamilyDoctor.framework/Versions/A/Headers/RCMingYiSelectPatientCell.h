//
//  RCMingYiSelectPatientCell.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>
#import "RCPatientModel.h"

@interface RCMingYiSelectPatientCell : UITableViewCell

@property (strong, nonatomic) RCPatientModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@end
