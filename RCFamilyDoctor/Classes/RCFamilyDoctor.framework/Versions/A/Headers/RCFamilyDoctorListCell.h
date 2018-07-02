//
//  RCFamilyDoctorListCell.h
//  AFNetworking
//
//  Created by wtw on 2018/5/28.
//

#import <UIKit/UIKit.h>

@class RCFamilyDoctorListModel;
@interface RCFamilyDoctorListCell : UITableViewCell

/** 展开/收起 */
@property (copy, nonatomic) void(^openBlock)(RCFamilyDoctorListModel *doctorModel);
/** 添加关注 */
@property (copy, nonatomic) void(^addSuccessBlock)(RCFamilyDoctorListModel *doctorModel);

+ (instancetype)cellWithTableView:(UITableView *)tableView;

- (void)configWithModel:(RCFamilyDoctorListModel *)model;

/** 服务状态 */
@property (assign, nonatomic) int serverStatus;
@end
