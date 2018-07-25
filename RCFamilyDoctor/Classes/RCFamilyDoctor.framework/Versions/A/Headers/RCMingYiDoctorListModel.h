//
//  RCMingYiDoctorListModel.h
//  AFNetworking
//
//  Created by wtw on 2018/7/20.
//

#import <Foundation/Foundation.h>

@interface RCMingYiDoctorListModel : NSObject
/** 医生id */
@property (nonatomic,copy) NSString *doctor_id;
/** 医生名字 */
@property (nonatomic,copy) NSString *doctor_name;
/** 医生头像 */
@property (nonatomic,copy) NSString *portrait;
/** 医生职称 */
@property (nonatomic,copy) NSString *title_name;
/** 医生科室 */
@property (nonatomic,copy) NSString *department_name;
/** 医院级别 */
@property (nonatomic,copy) NSString *hospital_level;
/** 医院名称 */
@property (nonatomic,copy) NSString *hospital_name;
/** 擅长 */
@property (nonatomic,copy) NSString *skilled;
/** 已服务人次 */
@property (nonatomic,copy) NSString *server_time;
/** 服务费用 */
@property (nonatomic,copy) NSString *fee;
/** 服务时长 */
@property (nonatomic,copy) NSString *fee_time;
@end
