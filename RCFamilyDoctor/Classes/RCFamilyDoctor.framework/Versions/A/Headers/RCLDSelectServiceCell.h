//
//  RCLDSelectServiceCell.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/11/1.
//

#import <UIKit/UIKit.h>
#import "RCServicesDetailModel.h"

@interface RCLDSelectServiceCell : UITableViewCell

@property (strong, nonatomic) RCServicesDetailListModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableView indexpath:(NSIndexPath *)indexPath;

@end
