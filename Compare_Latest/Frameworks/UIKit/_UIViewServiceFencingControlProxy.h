/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIQueueingProxy.h>

#import "XPCProxyTarget-Protocol.h"

@class _UIViewServiceFencingController;

@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy <XPCProxyTarget>
{
    _UIViewServiceFencingController *_fencingController;
}

+ (id)proxyWithTarget:(id)arg1 fencingController:(id)arg2 exportedProtocol:(id)arg3;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)__endFencingMessagesForSendRight:(id)arg1;
- (void)__beginFencingMessagesWithSendRight:(id)arg1 connectionCount:(unsigned int)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;

@end

