//
//  RCLDConsultMeCell.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/11/2.
//

#import <UIKit/UIKit.h>
#import "RCLDConsultDetailModel.h"

@interface RCLDConsultMeCell : UITableViewCell

@property (strong, nonatomic) RCLDConsultQuestion *questionModel;

+ (instancetype)cellWithTableView:(UITableView *)tableView indexpath:(NSIndexPath *)indexPath;

@end
