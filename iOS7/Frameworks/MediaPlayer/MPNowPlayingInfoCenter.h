/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSDictionary;

@interface MPNowPlayingInfoCenter : NSObject
{
    NSDictionary *_nowPlayingInfo;
    NSDictionary *_queuedNowPlayingInfo;
    NSDate *_pushDate;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
@property(copy) NSDictionary *nowPlayingInfo;
- (void)_pushNowPlayingInfoAndRetry:(BOOL)arg1;
- (id)init;
- (id)_init;

@end

