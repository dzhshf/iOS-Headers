/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UIView, _UIBackdropView;

@interface TPAudioRouteCell : UITableViewCell
{
    BOOL _isActiveRoute;
    BOOL _blursBackground;
    UIView *_effectsView;
    _UIBackdropView *_backdropView;
}

@property(retain) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain) UIView *effectsView; // @synthesize effectsView=_effectsView;
@property(nonatomic) BOOL blursBackground; // @synthesize blursBackground=_blursBackground;
@property(nonatomic) BOOL isActiveRoute; // @synthesize isActiveRoute=_isActiveRoute;
- (void)layoutSubviews;
- (void)setIsMuteButtonWithImage:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

