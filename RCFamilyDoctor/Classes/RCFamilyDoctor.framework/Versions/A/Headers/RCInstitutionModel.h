//
//  RCInstitutionModel.h
//  AFNetworking
//
//  Created by wtw on 2018/5/23.
//

#import <Foundation/Foundation.h>

@interface RCInstitutionModel : NSObject
/** 机构ID */
@property (copy, nonatomic,readonly) NSString *org_id;
/** 机构名称 */
@property (copy, nonatomic,readonly) NSString *org_name;
/** 机构图标 */
@property (copy, nonatomic,readonly) NSString *org_icon;
/** 跳转URL */
@property (copy, nonatomic,readonly) NSString *ios_url;
@end
