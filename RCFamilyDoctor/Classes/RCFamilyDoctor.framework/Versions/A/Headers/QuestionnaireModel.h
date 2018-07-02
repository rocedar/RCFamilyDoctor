//
//  QuestionnaireModel.h
//  ToModel
//
//  Created by long108 on 2017/8/7.
//  Copyright © 2017年 long108. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class GroupModel;
@class TopicModel;
@class OptionModel;

@interface QuestionnaireModel : NSObject
@property (strong, nonatomic) NSArray <GroupModel *>*groupArray;
@property (nonatomic, strong)NSDictionary *topicsDict;

+ (instancetype)shareInstance;
- (instancetype)initWithDict:(NSDictionary *)dict;

@end

@interface GroupModel : NSObject

@property (copy, nonatomic) NSString *group_id;
@property (copy, nonatomic) NSString *group_name;
@property (strong, nonatomic) NSMutableArray <TopicModel *>*topics;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end

@interface TopicModel : NSObject

@property (copy, nonatomic) NSString *topic_id;
@property (copy, nonatomic) NSString *topic_name;
/** 问题类型 = 1 单选; = 2 多选; = 3 填空 */
@property (copy, nonatomic) NSString *type_id;
@property (strong, nonatomic) NSArray <OptionModel *>*options;

/** 附加属性 */
@property (assign, nonatomic) CGFloat rowHeight;
@property (assign, nonatomic) BOOL isFinished;
@property (copy, nonatomic) NSString *answer;

+ (instancetype)modelWithDict:(NSDictionary *)dict topicId:(NSString *)topic_id;
+ (instancetype)getTopicModelWithTopicID:(NSString *)topic_id;
@end

@interface OptionModel : NSObject

@property (copy, nonatomic) NSString *option_id;
@property (copy, nonatomic) NSString *option_name;
@property (strong, nonatomic) NSArray <TopicModel *>*child_topic;
/** 选项类型 1 为互斥选项 */
@property (copy, nonatomic) NSString *option_type;

/** 附加属性 */
@property (assign, nonatomic) BOOL isSelect;
@property (assign, nonatomic) CGFloat itemHeight;

- (instancetype)initWithDict:(NSDictionary *)dict;
@end
