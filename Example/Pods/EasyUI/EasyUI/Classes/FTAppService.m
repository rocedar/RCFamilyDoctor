//
//  FTAppService.m
//  EasyUI
//
//  Created by 何霞雨 on 2017/4/7.
//  Copyright © 2017年 何霞雨. All rights reserved.
//

#import "FTAppService.h"
#import "XY_NetworkClient.h"
#import "AFNetworking.h"

@interface FTAppService()

@property (nonatomic,strong)NSURL *url;

@end


@implementation FTAppService

+(instancetype)instance{
    static FTAppService *appservice;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        appservice = [[FTAppService alloc]init];
    });
    return appservice;
}

-(id)init{
    self = [super init];
    if (self) {
        [self setupClient];
    }
    return self;
}

#pragma mark - Public
-(void)getUserTokenByTel:(NSString *_Nonnull)tel DUserId:(NSString *_Nonnull)dUserId FinshWithBlock:(void(^_Nullable)(FTUser * _Nullable user,NSError * _Nullable error)) block{
    
    [self setupClient];
    
    NSMutableDictionary *parmas = [NSMutableDictionary new];
    [parmas setObject:tel forKey:@"tel"];
    [parmas setObject:dUserId forKey:@"dUserId"];

    if (self.url) {
        [[BaseRequestClient defaultClient]jsonPostGlobal:[NSString stringWithFormat:@"%@/%@",self.url.absoluteString,@"user/getUserToken"] forParams:parmas successCall:^(NSDictionary *responseObject) {
            FTUser *user = [FTUser mj_objectWithKeyValues:[responseObject objectForKey:@"result"]];
            block(user,nil);
        } failedCall:^(NSError *error) {
             block(nil,error);
        }];
    }else{
        NSError *error = [NSError errorWithDomain:@"com.cdfortis.app" code:url_error userInfo:nil];
        block(nil,error);
    }
}

-(void)getDoctorInfo:(NSString *_Nonnull)account FinshWithBlock:(void(^_Nullable)(FTDoctor * _Nullable user,NSError * _Nullable error)) block{
    
    [self setupClient];
    
    NSMutableDictionary *parmas = [NSMutableDictionary new];
    [parmas setObject:account forKey:@"account"];
    
    if (self.url) {
        [[BaseRequestClient defaultClient]jsonPostGlobal:[NSString stringWithFormat:@"%@/%@",self.url.absoluteString,@"hds/getDocInfo"] forParams:parmas successCall:^(NSDictionary *responseObject) {
            FTDoctor *doctor = [FTDoctor mj_objectWithKeyValues:[responseObject objectForKey:@"result"]];
            block(doctor,nil);
        } failedCall:^(NSError *error) {
            block(nil,error);
        }];
    }else{
        NSError *error = [NSError errorWithDomain:@"com.cdfortis.app" code:url_error userInfo:nil];
        block(nil,error);
    }
}

#pragma mark - Private
-(void)setupClient{
    
    [BaseRequestClient defaultClient].rightCode = 0;
    [BaseRequestClient defaultClient].statusKey = @"resultCode";
    [BaseRequestClient defaultClient].resultKey = @"result";
    
    if (self.platformKey) {
        [[BaseRequestClient defaultClient]addInitParmarterWithKey:@"platformKey" Value:self.platformKey];
    }
    if (self.appId) {
        [[BaseRequestClient defaultClient]addInitParmarterWithKey:@"appId" Value:self.appId];
    }
    
    
   [BaseRequestClient defaultClient].manager.responseSerializer = [AFJSONResponseSerializer
                                                                   serializerWithReadingOptions:NSJSONReadingAllowFragments];
    
    [BaseRequestClient defaultClient].manager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"application/json", @"text/json", @"text/javascript",@"text/html", nil];
    

    
}
#pragma mark - Getter
-(NSString *)ip{
    if (!_ip) {
        _ip = @"http://sdk.cdfortis.com";
    }
    return _ip;
}

-(NSString *)serviceName{
    if (!_serviceName) {
        _serviceName = @"sdkService";
    }
    return _serviceName;
}

-(NSURL *)url{
    if (!_url) {
        NSString *urlStr;
        if (self.port !=0) {
             urlStr= [NSString stringWithFormat:@"%@:%d/%@",self.ip,self.port,self.serviceName];
        }else{
            urlStr= [NSString stringWithFormat:@"%@/%@",self.ip,self.serviceName];
        }
        
        _url = [NSURL URLWithString:urlStr];
    }
    return _url;
}

@end
