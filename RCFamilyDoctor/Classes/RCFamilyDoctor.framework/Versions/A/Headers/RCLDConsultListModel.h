//
//  RCLDConsultListModel.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/11/1.
//

#import <Foundation/Foundation.h>

@interface RCLDConsultListModel : NSObject

/** 问诊ID */
@property (copy, nonatomic) NSString *advice_id;
/** 日期 */
@property (copy, nonatomic) NSString *date_str;
/** 服务费 */
@property (copy, nonatomic) NSString *fee;
/** 问题描述 */
@property (copy, nonatomic) NSString *question;
/** 状态 = 0 已结束； = 1 正在咨询 */
@property (copy, nonatomic) NSString *status;
/** 行高 */
@property (assign, nonatomic) CGFloat rowHeight;

@end
