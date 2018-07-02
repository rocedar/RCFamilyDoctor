//
//  MTDoctor.h
//  MTalker
//
//  Created by 何霞雨 on 2017/3/22.
//  Copyright © 2017年 rrun. All rights reserved.
//

#import "MTModel.h"

//咨询医生
@interface MTDoctor : MTModel

@property(nonatomic,strong) NSString *hospitalId;//医院id
@property(nonatomic,strong) NSString *doctorAccount;//医生帐号
@property(nonatomic,assign) int doctorType;//医生类型

@property(nonatomic,strong) NSString *avatar;//医生头像
@property(nonatomic,strong) NSString *name;//医生名字

@end
