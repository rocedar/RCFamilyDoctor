//
//  RCEvaluateModel.h
//  AFNetworking
//
//  Created by wtw on 2018/5/23.
//

#import <Foundation/Foundation.h>

@interface RCEvaluateModel : NSObject

/** 医生姓名 */
@property (copy, nonatomic,readonly) NSString *doctor_name;
/** 医院名称 */
@property (copy, nonatomic,readonly) NSString *hospital_name;
/** 用户手机号 */
@property (copy, nonatomic,readonly) NSString *user_phone;
/** 评分 */
@property (copy, nonatomic,readonly) NSString *grade;
/** 评价内容 */
@property (copy, nonatomic,readonly) NSString *comment;
/** 医生职称 */
@property (copy, nonatomic,readonly) NSString *doctor_title;
/** 高度辅助 */
@property (nonatomic,assign,readonly) CGFloat cellHeight;

@end
