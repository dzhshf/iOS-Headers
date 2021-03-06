/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertView.h"

#import "SBPowerDownViewInterface-Protocol.h"

@class NSTimer, SBFakeStatusBarView, SBGlintyStringView, UILabel, UIPanGestureRecognizer, UIView, _UIBackdropView;

@interface SBPowerDownView : SBAlertView <SBPowerDownViewInterface>
{
    NSTimer *_autoDismissTimer;
    id <SBPowerDownViewDelegate> _delegate;
    SBFakeStatusBarView *_fakeStatusBarView;
    UIView *_dynamicDarkeningAboveTopBar;
    UIView *_dynamicDarkeningBelowBottomBar;
    UIView *_darkeningUnderlay;
    UIView *_topContainer;
    UIView *_topBar;
    SBGlintyStringView *_topBarLabel;
    _UIBackdropView *_topBarBackground;
    UIView *_bottomContainer;
    UIView *_bottomBar;
    UILabel *_bottomBarLabel;
    _UIBackdropView *_bottomBarBackground;
    BOOL _addedFakeStatusBar;
    UIPanGestureRecognizer *_slideGestureRecognizer;
    struct CGPoint _slideGestureInitialPoint;
}

@property(nonatomic) id <SBPowerDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_animatePowerDown;
- (void)_slideCompleted:(BOOL)arg1;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_resetAutoDismissTimer;
- (void)_cancelAutoDismissTimer;
- (id)_newDarkeningView:(struct CGRect)arg1;
- (struct CGRect)_frameForInnerDarkening;
- (void)_removeFakeStatusBarIfNecessary;
- (void)_addFakeStatusBarIfNecessary;
- (void)_slideGestureRecognizer:(id)arg1;
- (void)layoutForInterfaceOrientation:(int)arg1;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
- (void)animateOut;
- (void)animateIn;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

