/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol AFSpeechCapturingDelegate <NSObject>
- (void)speechCapturingDidRecordSpeechPackets:(id)arg1 totalPacketCount:(int)arg2;
- (void)speechCapturingDidDetectEndpointAfterStartPoint:(BOOL)arg1;
- (void)speechCapturingDidStopRecordingWithError:(id)arg1 endpointMode:(int)arg2 totalPacketCount:(int)arg3;
- (void)speechCapturingDidStartRecordingSuccessfully:(BOOL)arg1 codec:(id)arg2 source:(id)arg3 deviceId:(id)arg4 modelName:(id)arg5;
- (void)speechCapturingWillStart:(BOOL)arg1;
@end

