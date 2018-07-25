//
//  RCOrderInfoCell.h
//  AFNetworking
//
//  Created by long108 on 2018/7/11.
//

#import <UIKit/UIKit.h>

@interface RCOrderInfoCell : UITableViewCell

@property (assign, nonatomic) NSInteger status;

@property (strong, nonatomic) NSDictionary *dict;

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
