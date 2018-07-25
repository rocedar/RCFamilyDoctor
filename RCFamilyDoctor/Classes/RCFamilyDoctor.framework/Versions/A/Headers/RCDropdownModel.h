//
//  RCDropdownModel.h
//  AFNetworking
//
//  Created by long108 on 2018/7/23.
//

#import <Foundation/Foundation.h>

@class RCChildModel;

@interface RCDropdownModel : NSObject

@property (copy, nonatomic) NSString *select_id;
@property (copy, nonatomic) NSString *name;
@property (strong, nonatomic) NSArray <RCChildModel *>*childs;
/** 是否选中 */
@property (assign, nonatomic) BOOL isSelected;

@end

@interface RCChildModel : NSObject

@property (copy, nonatomic) NSString *select_id;
@property (copy, nonatomic) NSString *name;
/** 是否选中 */
@property (assign, nonatomic) BOOL isSelected;

@end
