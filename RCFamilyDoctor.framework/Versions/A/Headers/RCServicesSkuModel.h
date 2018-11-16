//
//  RCServicesSkuModel.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/10/10.
//

#import <Foundation/Foundation.h>

@interface RCServicesSkuModel : NSObject

@property (nonatomic,assign) double fee;
@property (nonatomic,copy) NSString *fee_name;
@property (nonatomic,copy) NSString *goods_id;
@property (nonatomic,copy) NSString *purchase_notes;
@property (nonatomic,copy) NSString *self_use;
@property (nonatomic,copy) NSString *sku_banner;
@property (nonatomic,copy) NSString *sku_desc;
@property (nonatomic,copy) NSString *sku_id;
@property (nonatomic,copy) NSString *outer_id;
@property (nonatomic,copy) NSString *sku_name;
@property (nonatomic,copy) NSString *sku_subtitle;
@property (nonatomic,copy) NSString *sku_title;
@property (nonatomic,copy) NSString *status;  //订单状态
@property (nonatomic,copy) NSString *validity_period;
@property (nonatomic,copy) NSString *validity_period_name;
@property (nonatomic,copy) NSString *goods_type_id;
@property (nonatomic,assign) CGFloat descHeight;

@end

@interface RCSkuUserRalationModel : NSObject
@property (nonatomic,copy) NSString *phone;
@property (nonatomic,copy) NSString *user_id;
@property (nonatomic,copy) NSString *relation_name;
@property (nonatomic,copy) NSString *card_id;
@property (nonatomic,copy) NSString *true_name;
@end
