//
//  RCAppDelegate.m
//  RCFamilyDoctor
//
//  Created by CoderTWWu on 07/02/2018.
//  Copyright (c) 2018 CoderTWWu. All rights reserved.
//

#import "RCAppDelegate.h"
#import <RCBaseComponent/RCSDK.h>

@implementation RCAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
//    [RCSDK setDebug:YES];  //设置debug 模式
    [[RCSDK shareSDK] initWithAppid:@"101"
                             appkey:@"5e7545427d72c391"
                              token:@"a0c3e71f51301264dc67f20e8a59c9f3"
                     invalidHandler:^(RCErrorCode errorCode) {
                        //错误回调 token失效  未设置手机号 手机号已被绑定 回调
                        //[RCSDK setPhone:@"xxxxx"];
                         //更新token
                         //[RCSDK setToken:@"7d1159efcdaa7aba02c16f01b851867c"];
                     }];
    
    [RCSDK setLogEnabled:NO];  //控制log
    
    //    RCBaseConfigInstance.rc_theme_deep_color = [UIColor greenColor];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
