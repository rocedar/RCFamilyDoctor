//
//  DYExpertGroupMessageListModel.h
//  AFNetworking
//
//  Created by wtw on 2018/6/6.
//

#import <Foundation/Foundation.h>

@interface DYExpertGroupMessageListModel : NSObject
/** 0,已结束咨询；1，正在咨询 */
@property (assign, nonatomic) int status;
/** 0，功能；1，文本；2图片 */
@property (assign, nonatomic) int type;
/** 发消息者头像 */
@property (copy, nonatomic) NSString *icon;
/** 消息内容 */
@property (copy, nonatomic) NSString *record;
/** 0，系统消息；1， app用户；2，专家 */
@property (assign, nonatomic) int speaker;
/** 消息图片 */
@property (copy, nonatomic) NSString *img_url;
/** 消息时间 */
@property (assign, nonatomic) NSInteger update_time;
/** 同病人列表 */
@property (strong, nonatomic) NSMutableArray *sicks;
/** 当前咨询人对应的问题id */
@property (assign, nonatomic) int question_id;
/** 消息内容的高度 */
@property (assign, nonatomic) CGFloat recordHeight;
/** 显示时间 */
@property (copy, nonatomic) NSString *time;
@end

@interface DYSicksModel : NSObject
/** 病人id */
@property (assign, nonatomic) NSInteger sick_id;
/** 问卷id（-1，未填问卷） */
@property (assign, nonatomic) int questionnaire_id;
/** 病人名字 */
@property (copy, nonatomic) NSString *sick_name;
/** 已经选择的病人的userId(-1未选择，1选择) */
@property (assign, nonatomic) int choose;
@end

@interface DYLaboratoryExpertModel : NSObject
/** 擅长 */
@property (copy, nonatomic) NSString *skilled;
/** 医生id */
@property (assign, nonatomic) int doctor_id;
/** 医生名称 */
@property (copy, nonatomic) NSString *doctor_name;
/** 医生头像 */
@property (copy, nonatomic) NSString *doctor_icon;
/** 科室 */
@property (copy, nonatomic) NSString *profession_name;
/** 职称 */
@property (copy, nonatomic) NSString *title_name;
/** 医院 */
@property (copy, nonatomic) NSString *hospital_name;
@end

@interface DYSubjectLectureModel : NSObject
/** 视频主题 */
@property (copy, nonatomic) NSString *title;
/** 视频地址 */
@property (copy, nonatomic) NSString *video_url;
/** 视频id */
@property (assign, nonatomic) int cathedra_id;
/** 视频缩略图 */
@property (copy, nonatomic) NSString *video_img;
/** 视频时间 */
@property (copy, nonatomic) NSString *video_time;
/** 观看量 */
@property (copy, nonatomic) NSString *access_count;
/** 标签 */
@property (strong, nonatomic) NSArray *label;
@end


@interface DYExpertIntroduceModel : NSObject
/** 医生id */
@property (assign, nonatomic) int doctor_id;
/** 擅长 */
@property (copy, nonatomic) NSString *skilled;
/** 医生名称 */
@property (copy, nonatomic) NSString *doctor_name;
/** 医生头像 */
@property (copy, nonatomic) NSString *doctor_icon;
/** 科室名称 */
@property (copy, nonatomic) NSString *profession_name;
/** 职称名称 */
@property (copy, nonatomic) NSString *title_name;
/** 医院名称 */
@property (copy, nonatomic) NSString *hospital_name;
/** 成就奖项 */
@property (strong, nonatomic) NSArray *resume;
/** headerView的高度 */
@property (assign, nonatomic) CGFloat skilledHeight;
@end

