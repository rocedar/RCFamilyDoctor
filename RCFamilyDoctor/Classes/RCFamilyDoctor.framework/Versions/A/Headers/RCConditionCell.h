//
//  RCConditionCell.h
//  AFNetworking
//
//  Created by long108 on 2018/7/24.
//

#import <UIKit/UIKit.h>

@interface RCConditionCell : UITableViewCell
@property (copy, nonatomic) NSString *title;


+ (instancetype)cellWithTableView:(UITableView *)tableView;

/**
 设置cell状态
 
 @param status = yes 选中; = no 未选中;
 */
- (void)setStatus:(BOOL)status;
@end
