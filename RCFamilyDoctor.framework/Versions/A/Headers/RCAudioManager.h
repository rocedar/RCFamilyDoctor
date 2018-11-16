//
//  RCAudioManager.h
//  DongYa
//
//  Created by apple on 2017/4/19.
//  Copyright © 2017年 DY. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

typedef NS_ENUM(NSInteger, SUPlayStatus) {
    SUPlayStatusNon,
    SUPlayStatusLoadSongInfo,
    SUPlayStatusReadyToPlay,
    SUPlayStatusPlay,
    SUPlayStatusPause,
    SUPlayStatusStop
};

@interface RCAudioManager : NSObject {
    id _timeObserve; //监控进度
}
+ (instancetype)shareInstance;
/** 播放状态 */
@property (nonatomic, assign) SUPlayStatus status;
/** 播放器 */
@property (nonatomic, strong) AVPlayer * player;
/** 播放器播放状态 */
@property (nonatomic, assign) BOOL isPlaying;
/** 播放进度 */
@property (nonatomic, assign) float progress;
/** 音频URL */
@property (copy, nonatomic) NSString *audioUrl;

/** 开始播放 */
- (void)startPlay;
/** 暂停播放 */
- (void)pausePlay;
/** 重播 */
- (void)replay;
- (void)loadPlay;
/** 结束播放 */
- (void)endPlay;

@end
