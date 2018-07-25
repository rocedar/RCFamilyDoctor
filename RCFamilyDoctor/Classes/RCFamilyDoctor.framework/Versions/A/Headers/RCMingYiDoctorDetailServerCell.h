//
//  RCMingYiDoctorDetailServerCell.h
//  AFNetworking
//
//  Created by wtw on 2018/7/23.
//

#import <UIKit/UIKit.h>

@class RCMingYiDoctorDetailModel;
@interface RCMingYiDoctorDetailServerCell : UITableViewCell

@property (nonatomic,strong) RCMingYiDoctorDetailModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
