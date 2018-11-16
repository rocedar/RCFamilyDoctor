//
//  RCDoctorConsultationSelectView.h
//  AFNetworking
//
//  Created by wtw on 2018/7/19.
//

#import <UIKit/UIKit.h>

@interface RCDoctorConsultationSelectView : UIView

@property (nonatomic,strong) UIImageView *selectImg;

- (void)setImage:(UIImage *)image
         NameStr:(NSString *)name
           price:(NSString *)price
          enable:(BOOL)enable;
@end
