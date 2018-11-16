//
//  RCServeStatusModel.h
//  AFNetworking
//
//  Created by wtw on 2018/5/24.
//

#import <Foundation/Foundation.h>

@class RCUserPhone;
@interface RCServeStatusModel : NSObject
/** 权限状态: -1 没有家庭医生服务 */
@property (assign, nonatomic) int status;
/** 服务开始时间 */
@property (copy, nonatomic) NSString *start_time;
/** 服务结束时间 */
@property (copy, nonatomic) NSString *end_time;
/** 用户手机号 */
@property (nonatomic, strong) RCUserPhone *user;

@end

@interface RCUserPhone: NSObject

@property (nonatomic, copy) NSString *phone;

@end
