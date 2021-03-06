/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MKMapGestureControllerDelegate <NSObject>
- (void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(int)arg2;
- (void)gestureControllerDidStopZooming:(id)arg1 direction:(int)arg2 willDecelerate:(BOOL)arg3;
- (void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2;
- (void)gestureControllerDidStopPanningDecelerating:(id)arg1;
- (void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)gestureControllerWillStartPanning:(id)arg1;
- (void)gestureControllerDidStopUserInteraction:(id)arg1;
- (void)gestureControllerWillStartUserInteraction:(id)arg1;

@optional
- (double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;
@end

