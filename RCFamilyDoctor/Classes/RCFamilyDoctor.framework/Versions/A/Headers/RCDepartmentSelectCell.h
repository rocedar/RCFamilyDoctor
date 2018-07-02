//
//  RCDepartmentSelectCell.h
//  AFNetworking
//
//  Created by wtw on 2018/5/25.
//  科室选择

#import <UIKit/UIKit.h>

@class RCDepartmentModel;
@interface RCDepartmentSelectCell : UICollectionViewCell

@property (strong, nonatomic) RCDepartmentModel *department;
@property (strong, nonatomic) UILabel *nameLabel;
@end
