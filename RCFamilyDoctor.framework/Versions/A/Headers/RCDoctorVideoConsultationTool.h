//
//  RCDoctorVideoConsultationTool.h
//  AFNetworking
//
//  Created by wtw on 2018/6/5.
//

#import <Foundation/Foundation.h>
#import "FTConsultUI.h"

typedef void(^VideoConsultationStartBlock)(ConsultViewController *consultVC);
typedef void(^VideoConsultationFinishBlock)(ConsultViewController *consultVC, double callTime, NSString *busiId);

@interface RCDoctorVideoConsultationTool : NSObject

/**
 问卷调用家庭医生
 */
+ (void)callDoctorVideo;

/**
 家庭医生视频咨询
 
 @param phone 用户电话号码
 @param doctorId 医生ID
 */
+ (void)doctorVideoAdisoryWithPhone:(NSString *)phone
                        andDoctorId:(NSString *)doctorId
                             target:(id)target
                 advisoryStartBlock:(VideoConsultationStartBlock)advisoryStartBlock
                advisoryFinishBlock:(VideoConsultationFinishBlock)advisoryFinishBlock;

@end
