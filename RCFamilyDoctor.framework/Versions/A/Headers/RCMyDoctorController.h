//
//  RCMyDoctorController.h
//  AFNetworking
//
//  Created by wtw on 2018/5/27.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,DoctorType)
{
    DoctorType_All, // 所有医生
    DoctorType_Mine // 我的医生
};

@interface RCMyDoctorController : UIViewController

@property (nonatomic,assign) DoctorType doctorType;

@property (assign, nonatomic) NSInteger phone;

/** 服务状态 */
@property (assign, nonatomic) int serverStatus;

#pragma mark - 供外界选择科室后更新界面调用
- (void)updateViewWithDepartmentID:(NSString *)departmentID;

@end
