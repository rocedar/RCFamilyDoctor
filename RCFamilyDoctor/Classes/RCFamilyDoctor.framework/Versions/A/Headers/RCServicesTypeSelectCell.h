//
//  RCServicesTypeSelectCell.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/9/25.
//

#import <UIKit/UIKit.h>

@class RCServicesDetailListModel;
@interface RCServicesTypeSelectCell : UICollectionViewCell

@property (nonatomic,strong) RCServicesDetailListModel *model;

- (void)setSelectColor:(UIColor *)color;

@end
