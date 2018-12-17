//
//  RCLDConsultListCell.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/10/31.
//

#import <UIKit/UIKit.h>
#import "RCLDConsultListModel.h"

@interface RCLDConsultListCell : UITableViewCell

@property (strong, nonatomic) RCLDConsultListModel *consultModel;

+ (instancetype)cellWithTableView:(UITableView *)tableView indexpath:(NSIndexPath *)indexPath;

@end
