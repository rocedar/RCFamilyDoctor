//
//  RCDepartmentModel.h
//  AFNetworking
//
//  Created by wtw on 2018/5/25.
//

#import <Foundation/Foundation.h>

@class Property;

@interface RCDepartmentModel : NSObject
/** 科室ID，微问诊系统内唯一标示 */
@property (copy, nonatomic) NSString *department_id;
/** 科室名字 */
@property (copy, nonatomic) NSString *department_name;
@property (assign, nonatomic) BOOL isSelected;
@end


@interface DYPropertyModel : NSObject

/** 属性类型 */
@property (copy, nonatomic) NSString *propertyType;
/** 属性列表 */
@property (strong, nonatomic) NSArray <Property *> *propertyArr;
/** 行高 */
@property (assign, nonatomic) CGFloat rowHeight;

@end

@interface Property : NSObject
/** 属性名称 */
@property (copy, nonatomic) NSString *propertyName;
/** 对应图片 */
@property (copy, nonatomic) NSString *pic;
/** 是否选中 */
@property (assign, nonatomic) BOOL isSelected;

@end
