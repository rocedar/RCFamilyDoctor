//
//  RCFamilyDoctorAPI.h
//  RCFamilyDoctor_Example
//
//  Created by wtw on 2018/5/24.
//  Copyright © 2018年 rocedar. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^RCSuccessHandler)(id obj);
typedef void(^RCFailureHandler)(NSError *error);

@interface RCFamilyDoctorAPI : NSObject

#pragma mark - 家庭医生主页
/**
 家庭医生服务权限

 @param deviceNo 设备唯一标志，要求APP传入,多个设备id以 , 隔开
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchDocotrServeStatusWithDeviceNo:(NSString *)deviceNo
                            successHandler:(RCSuccessHandler)successHandler
                              errorHandler:(RCFailureHandler)errorHandler;

/**
 查询瑰柏专属医生评价列表
 
 @param page 页码 0开始
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchEvaluateListWithPage:(NSInteger)page
                   successHandler:(RCSuccessHandler)successHandler
                     errorHandler:(RCFailureHandler)errorHandler;

/**
 查询机构列表
 
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchInstitutionListWithSuccessHandler:(RCSuccessHandler)successHandler
                                   errorHandle:(RCFailureHandler)errorHandler;

/**
 获取瑰柏专属医生
 
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchSpecificDoctorWithSuccessHandler:(RCSuccessHandler)successHandler
                                 errorHandler:(RCFailureHandler)errorHandler;

#pragma mark -  家庭医生列表

/**
 查询医生科室列表
 
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchDepartmentListSuccessHandler:(RCSuccessHandler)successHandler
                             errorHandler:(RCFailureHandler)errorHandler;


/**
 根据科室获取医生列表
 
 @param departmentId 科室ID -1 代表查询全部科室医生
 @param page  分页
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchDoctorListWithDepartmentID:(NSString *)departmentId
                                 page:(NSInteger)page
                       successHandler:(RCSuccessHandler)successHandler
                         errorHandler:(RCFailureHandler)errorHandler;

/**
 我的医生列表
 
 @param page 分页 从0开始
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchMyDoctorListWithPage:(NSInteger)page
                   successHandler:(RCSuccessHandler)successHandler
                     errorHandler:(RCFailureHandler)errorHandler;

#pragma mark - 关注/取消关注医生

/**
 添加关注我的医生
 
 @param doctorID 医生id
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)addDoctorFocusWithDoctorID:(NSString *)doctorID
                     successHandler:(RCSuccessHandler)successHandler
                       errorHandler:(RCFailureHandler)errorHandler;
/**
 取消关注医生
 
 @param doctorID 医生ID
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)deleteFocusWithDoctorID:(NSString *)doctorID
                 successHandler:(RCSuccessHandler)successHandler
                   errorHandler:(RCFailureHandler)errorHandler;

#pragma mark - 医生详情

/**
 查询医生详情
 
 @param doctorId 医生ID
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchDoctorDetailsWithDoctorId:(NSString *)doctorId
                        successHandler:(RCSuccessHandler)successHandler
                          errorHandler:(RCFailureHandler)errorHandler;

/**
 医生详情 评价列表
 
 @param doctorId 医生ID
 @param page 分页
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchDoctorDetailEvaluateWithDoctorId:(NSString *)doctorId
                                         page:(NSInteger)page
                               successHandler:(RCSuccessHandler)successHandler
                                 errorHandler:(RCFailureHandler)errorHandler;
#pragma mark - 问诊记录

/**
 问诊记录列表
 
 @param page 分页
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchConsultingRecordWithPage:(NSInteger)page
                       successHandler:(RCSuccessHandler)successHandler
                         errorHandler:(RCFailureHandler)errorHandler;

/**
 保存问诊记录
 
 @param businessId 业务id
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)saveInterrogationRecordWithBusinessdId:(NSString *)businessId
                                successHandler:(RCSuccessHandler)successHandler
                                  errorHandler:(RCFailureHandler)errorHandler;

/**
 查询咨询记录详情
 
 @param recordId 记录ID
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchConsultingRecordDetailWithRecordId:(NSInteger)recordId
                                 successHandler:(RCSuccessHandler)successHandler
                                   errorHandler:(RCFailureHandler)errorHandler;
/**
 保存用户评价
 
 @param recordId 记录ID
 @param doctorId 医生ID
 @param comment 评论内容
 @param grade 分数
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)saveUserAdvisoryWithRecoardId:(NSInteger)recordId
                             doctorId:(NSString *)doctorId
                          userCommont:(NSString *)comment
                             userGrad:(NSString *)grade
                       successHandler:(RCSuccessHandler)successHandler
                         errorHandler:(RCFailureHandler)errorHandler;

#pragma mark - 医生咨询
/**
 医生咨询获取消息列表
 
 @param page 分页
 @param orgId 机构id
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)fetchHighBloodPressureMessageListWithPage:(int)page
                                            orgId:(NSString *)orgId
                                   successHandler:(RCSuccessHandler)successHandler
                                     errorHandler:(RCFailureHandler)errorHandler;
/**
 结束医生咨询
 
 @param question_id 问题ID
 @param orgId 机构ID
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)endConsultationWithQuestionId:(int)question_id
                                orgId:(NSString *)orgId
                       successHandler:(RCSuccessHandler)successHandler
                         errorHandler:(RCFailureHandler)errorHandler;
/**
 保存咨询记录
 
 @param question_id 问题id
 @param sick_id 病人id
 @param type 0，功能；1，文本；2图片
 @param speaker 0，系统消息；1， app用户
 @param record 文字消息
 @param img_url 图片消息
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)saveHighBloodPressureConsultRecordQuestionId:(int)question_id
                                              sickId:(NSInteger)sick_id
                                                type:(int)type
                                             speaker:(int)speaker
                                              record:(NSString *)record
                                              imgUrl:(NSString *)img_url
                                               orgId:(NSString *)orgId
                                      successHandler:(RCSuccessHandler)successHandler
                                        errorHandler:(RCFailureHandler)errorHandler;

/**
 保存病人基本信息
 
 @param name 名字
 @param sex 性别
 @param birth 生日
 @param height 身高
 @param weight 体重
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)uploadSTIInfoWithName:(NSString *)name
                          sex:(NSString *)sex
                     birthday:(NSString *)birth
                       height:(NSString *)height
                       weight:(NSString *)weight
               successHandler:(RCSuccessHandler)successHandler
                 errorHandler:(RCFailureHandler)errorHandler;

/**
 保存问卷
 
 @param questionnaireid 问题id
 @param answer 答案
 @param otherUser otherUser description
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)saveQuestionResultWithquestionnaireId:(NSString *)questionnaireid
                                       answer:(NSString *)answer
                                    otherUser:(NSString *)otherUser
                               successHandler:(RCSuccessHandler)successHandler
                                 errorHandler:(RCFailureHandler)errorHandler;
/**
 查询问卷详情
 
 @param publicshtime publicshtime description
 @param otherUser otherUser description
 @param questionnaireid questionnaireid description
 @param successHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)queryQuestionListDetailWithPublicshtime:(NSString *)publicshtime
                                      otherUser:(NSString *)otherUser
                                questionnaireId:(NSString *)questionnaireid
                                 successHandler:(RCSuccessHandler)successHandler
                                   errorHandler:(RCFailureHandler)errorHandler;

/**
 有赞登录
 
 @param completionHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)youZanShopLoginWithClientid:(NSString *)clientid
                       clientSecret:(NSString *) clientSecret
                  completionHandler:(RCSuccessHandler)completionHandler
                       errorHandler:(RCFailureHandler)errorHandler;

#pragma mark - 订单

/**
 订单列表

 @param status 订单状态(多个状态英文逗号隔开)
 @param page 页码(从0开始)
 */
+ (void)queryOrderListWithStatus:(NSString *)status
                            page:(NSInteger)page
               completionHandler:(RCSuccessHandler)completionHandler
                    errorHandler:(RCFailureHandler)errorHandler;

/**
 订单详情

 @param order_id 订单ID
 @param order_type 订单类型
 */
+ (void)queryOrderDetailWithOrderId:(NSString *)order_id
                          orderType:(NSInteger)order_type
                  completionHandler:(RCSuccessHandler)completionHandler
                       errorHandler:(RCFailureHandler)errorHandler;

/**
 去支付
 
 @param order_id 订单ID
 */
+ (void)toPayWithOrderId:(NSString *)order_id
       completionHandler:(RCSuccessHandler)completionHandler
            errorHandler:(RCFailureHandler)errorHandler;

/**
 取消订单
 
 @param order_id 订单ID
 */
+ (void)cancelOrderWithOrderId:(NSString *)order_id
             completionHandler:(RCSuccessHandler)completionHandler
                  errorHandler:(RCFailureHandler)errorHandler;


/**
 退款
 
 @param order_id 订单ID
 @param refund_desc 退款详情
 */
+ (void)refundWithOrderId:(NSString *)order_id
               refundDesc:(NSString *)refund_desc
        completionHandler:(RCSuccessHandler)completionHandler
             errorHandler:(RCFailureHandler)errorHandler;

#pragma mark - 名医
/**
 部门筛选
 */
+ (void)getDepartmentSelectListWithCompletionHandler:(RCSuccessHandler)completionHandler
                                        errorHandler:(RCFailureHandler)errorHandler;

/**
 价格区间筛选
 */
+ (void)getPriceSelectListWithCompletionHandler:(RCSuccessHandler)completionHandler
                                   errorHandler:(RCFailureHandler)errorHandler;

/**
 医院筛选
 */
+ (void)getHospitalSelectListWithCompletionHandler:(RCSuccessHandler)completionHandler
                                      errorHandler:(RCFailureHandler)errorHandler;
#pragma mark - 名医首页列表

/**
 推荐医生列表 (名医首页)
 
 @param completionHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)queryMingYiRecommendDoctorWithCompletionHandler:(RCSuccessHandler)completionHandler
                                               errorHandler:(RCFailureHandler)errorHandler;

#pragma mark - 名医详情

/**
 名医详情
 
 @param dotorId 医生id
 @param completionHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)queryMingYiDoctorDetailWithDoctorId:(NSString *)dotorId
                          completionHandler:(RCSuccessHandler)completionHandler
                               errorHandler:(RCFailureHandler)errorHandler;
#pragma mark - 订单管理

/**
 获取病人列表
 */
+ (void)getPaientListWithCompletionHandler:(RCSuccessHandler)completionHandler
                              errorHandler:(RCFailureHandler)errorHandler;

/**
 保存病人信息

 @param name 姓名
 @param sex 性别
 @param birthday 生日
 @param height 身高
 @param weight 体重
 */
+ (void)savePatientWithName:(NSString *)name
                        sex:(NSString *)sex
                   birthday:(NSString *)birthday
                     height:(NSString *)height
                     weight:(NSString *)weight
          completionHandler:(RCSuccessHandler)completionHandler
               errorHandler:(RCFailureHandler)errorHandler;
/**
 生成订单
 
 @param doctorId 医生id
 @param type 服务类型
 @param patient_id 病人id
 @param phone 手机号
 @param reservation_time 期望时间
 @param completionHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)saveServerOrderWithdoctorId:(NSString *)doctorId
                        serviceType:(NSString *)type
                          patientId:(NSString *)patient_id
                              phone:(NSString *)phone
                    reservationTime:(NSString *)reservation_time
                  completionHandler:(RCSuccessHandler)completionHandler
                       errorHandler:(RCFailureHandler)errorHandler;

/**
 去支付 生成h5 页面
 
 @param orderId 订单id
 @param completionHandler 成功回调
 @param errorHandler 失败回调
 */
+ (void)queryMingYiPayOrderAddressWithorderId:(NSString *)orderId
                            completionHandler:(RCSuccessHandler)completionHandler
                                 errorHandler:(RCFailureHandler)errorHandler;
@end
