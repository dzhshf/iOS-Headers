/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertViewAdapter.h"

@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter
{
    BOOL _revealedContentBeneathForDismiss;
    BOOL _animatingOut;
}

- (void)setAlert:(id)arg1;
- (void)setShouldAnimateIn:(BOOL)arg1;
- (void)dismiss;
- (void)updateSpringBoardInPreparationForTransparentDismiss;
- (void)viewAnimatedOut;
- (BOOL)isAnimatingOut;
- (BOOL)shouldAnimateIconsIn;
- (void)alertDisplayWillBecomeVisible;
- (BOOL)isReadyToBeRemovedFromView;
- (id)alert;

@end

