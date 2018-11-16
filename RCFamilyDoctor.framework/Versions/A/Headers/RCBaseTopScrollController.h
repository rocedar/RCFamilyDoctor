//
//  RCBaseTopScrollController.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/9/4.
//

#import <UIKit/UIKit.h>

@interface RCBaseTopScrollController : UIViewController
<UITableViewDelegate,
UITableViewDataSource>
@property (nonatomic,strong) UITableView *tableView;
@property (nonatomic,strong) UILabel *titleLabel;
@end
