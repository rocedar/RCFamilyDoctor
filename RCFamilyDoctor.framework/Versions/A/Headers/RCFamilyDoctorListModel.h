//
//  RCFamilyDoctorListModel.h
//  AFNetworking
//
//  Created by wtw on 2018/5/28.
//

#import <Foundation/Foundation.h>

@interface RCFamilyDoctorListModel : NSObject
/** 医生账号，微问诊系统内唯一标示 */
@property (copy, nonatomic) NSString *doctor_id;
/** 医生名字 */
@property (copy, nonatomic) NSString *doctor_name;
/** 头像URL地址 */
@property (copy, nonatomic) NSString *portrait;
/** 医院名称 */
@property (copy, nonatomic) NSString *hospital_name;
/** 科室名称 */
@property (copy, nonatomic) NSString *department_name;
/** 职称名称 */
@property (copy, nonatomic) NSString *title_name;
/** 擅长 */
@property (copy, nonatomic) NSString *skilled;
/** 状态，0为在线，2为离线，其他为忙碌 */
@property (copy, nonatomic) NSString *status;
/** 是否关注：1 已关注，0 未关注 */
@property (copy, nonatomic) NSString *focus;
/** 服务次数 */
@property (copy, nonatomic) NSString *server_time;
/** 星级 */
@property (copy, nonatomic) NSString *grade;
/** 是否展开 */
@property (assign, nonatomic) BOOL isOpen;
/** 是否是一行 */
@property (assign,nonatomic) BOOL isMultiLine;

@property (assign, nonatomic) CGFloat skillHeight;

@property (assign, nonatomic) CGFloat cellHeight;

@end
