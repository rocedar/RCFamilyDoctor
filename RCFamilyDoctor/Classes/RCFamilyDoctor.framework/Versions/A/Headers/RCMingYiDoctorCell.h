//
//  RCMingYiDoctorCell.h
//  AFNetworking
//
//  Created by long108 on 2018/7/12.
//

#import <UIKit/UIKit.h>

@class RCMingYiDoctorListModel;
@interface RCMingYiDoctorCell : UITableViewCell

@property (nonatomic,strong) RCMingYiDoctorListModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
