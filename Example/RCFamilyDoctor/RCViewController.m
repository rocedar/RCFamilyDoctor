//
//  RCViewController.m
//  RCFamilyDoctor
//
//  Created by CoderTWWu on 07/02/2018.
//  Copyright (c) 2018 CoderTWWu. All rights reserved.
//

#import "RCViewController.h"
#import <RCFamilyDoctor/RCFDHomePageController.h>

@interface RCViewController ()

@end

@implementation RCViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    RCFDHomePageController *homeVc = [[RCFDHomePageController alloc] init];
    homeVc.user_phone = @"13691365870";
    homeVc.user_icon_url = [NSURL URLWithString:@"http://img.dongya.rocedar.com/s/d/hudayi.png"];
    [self.navigationController pushViewController:homeVc animated:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
