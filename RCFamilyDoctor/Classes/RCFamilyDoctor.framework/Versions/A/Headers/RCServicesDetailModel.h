//
//  RCServicesDetailModel.h
//  RCFamilyDoctor
//
//  Created by wtw on 2018/9/20.
//

#import <Foundation/Foundation.h>

@interface RCServicesDetailModel : NSObject
@property (nonatomic,copy) NSString *goods_id;
@property (nonatomic,copy) NSString *goods_name;
@property (nonatomic,strong) NSArray *goods_skus;
@end

@interface RCServicesDetailListModel : NSObject
@property (nonatomic,copy) NSString *sku_id;
@property (nonatomic,copy) NSString *goods_id;
@property (nonatomic,copy) NSString *outer_id;
@property (nonatomic,copy) NSString *sku_name;
@property (nonatomic,copy) NSString *sku_banner;
@property (copy, nonatomic) NSString *sku_icon;
@property (nonatomic,copy) NSString *sku_title;
@property (nonatomic,copy) NSString *sku_subtitle;
@property (nonatomic,copy) NSString *validity_period;
@property (nonatomic,copy) NSString *validity_period_name;
@property (nonatomic,copy) NSString *self_use;
@property (nonatomic,assign) double fee;
@property (nonatomic,copy) NSString *fee_name;
@property (nonatomic,copy) NSString *sku_desc;
@property (nonatomic,copy) NSString *status;
@property (nonatomic,copy) NSString *goods_type_id;
/** 购买须知 */
@property (copy, nonatomic) NSString *purchase_notes;
@end
