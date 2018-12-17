//
//  RCKeyboardMoreViewItem.h
//  AFNetworking
//
//  Created by 李丹丹 on 2018/11/13.
//

#import <UIKit/UIKit.h>

@interface RCKeyboardMoreViewItem : UIView
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *imageName;

+(instancetype)itemWithTitle:(NSString *)title
                   imageName:(NSString *)imageName;

- (void)addTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;
@end
