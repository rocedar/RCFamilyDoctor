//
//  DYExpertGroupSelectUserCell.h
//  DongYa
//
//  Created by apple on 2017/12/4.
//  Copyright © 2017年 DY. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DYSicksModel;

@interface DYExpertGroupSelectUserCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UILabel *sickNameLabel;
@property (strong, nonatomic) DYSicksModel *sickModel;
@end
