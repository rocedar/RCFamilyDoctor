//
//  RCMingYiPerfectInfoCell.h
//  Pods
//
//  Created by wtw on 2018/7/29.
//

#import <UIKit/UIKit.h>

@class RCMingYiPerfectInfoModel;
@interface RCMingYiPerfectInfoCell : UITableViewCell

@property (nonatomic,strong) RCMingYiPerfectInfoModel *model;

@property (nonatomic,strong) NSIndexPath *index;

@property (nonatomic,copy) void(^imageBlock)(NSIndexPath *index,NSArray *photoArr);

+ (instancetype)cellWithTableView:(UITableView *)tableView indexpath:(NSIndexPath *)indexPath;

@end
