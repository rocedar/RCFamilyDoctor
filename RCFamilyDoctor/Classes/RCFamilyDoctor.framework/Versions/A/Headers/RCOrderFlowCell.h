//
//  RCOrderFlowCell.h
//  AFNetworking
//
//  Created by long108 on 2018/7/11.
//

#import <UIKit/UIKit.h>
#import "RCOrderDetailModel.h"

@interface RCOrderFlowCell : UITableViewCell

/** 大圈圈 */
@property (strong, nonatomic) UIView *outCircle;
/** 小圈圈 */
@property (strong, nonatomic) UIView *innerCircle;
/** 上线 */
@property (strong, nonatomic) UIView *topLine;
/** 下线 */
@property (strong, nonatomic) UIView *bottomLine;

@property (strong, nonatomic) ProgressModel *progressModel;

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
