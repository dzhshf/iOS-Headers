/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SBUIControlCenterControlObserver-Protocol.h"

@class NSMutableArray, NSMutableDictionary, SBChevronView, SBUIControlCenterLabel;

@interface SBControlCenterGrabberView : UIView <SBUIControlCenterControlObserver>
{
    SBChevronView *_chevronView;
    SBUIControlCenterLabel *_statusLabel;
    SBUIControlCenterLabel *_statusLabel2;
    BOOL _statusBusy;
    NSMutableDictionary *_statusByReason;
    NSMutableArray *_statusReasonQueue;
}

+ (float)defaultHeightForOrientation:(int)arg1;
- (void)controlConfigurationDidChangeForState:(int)arg1;
- (void)controlAppearanceDidChangeForState:(int)arg1;
- (id)_currentGrabberImage;
- (void)layoutSubviews;
- (struct CGRect)_grabberRect;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateStatusText:(id)arg1 reason:(id)arg2;
- (void)_animateNextStatus;
- (void)_didPresentStatus;
- (void)_dequeueStatus;
- (id)_popNextStatus;
- (BOOL)_hasPendingStatus;
- (void)noteControlCenterDidDismiss;
- (void)noteControlCenterWillPresent;
- (id)chevronView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

