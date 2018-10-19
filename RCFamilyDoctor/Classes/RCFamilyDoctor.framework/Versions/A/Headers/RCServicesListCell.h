//
//  RCServicesListCell.h
//  AFNetworking
//
//  Created by wtw on 2018/9/4.
//

#import <UIKit/UIKit.h>

@class RCServicesListModel;
@interface RCServicesListCell : UITableViewCell

@property (nonatomic,strong) RCServicesListModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView indexPath:(NSIndexPath *)indexPath;


@end
