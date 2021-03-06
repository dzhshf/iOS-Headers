/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VKObjectPool, VKPIconPack;

@interface VKIconAtlas : NSObject
{
    VKPIconPack *_iconPack;
    VKObjectPool *_artworkPool;
}

- (struct CGImage *)_createImageForName:(id)arg1 contentScale:(float)arg2;
- (id)artworkForName:(id)arg1 style:(CDStruct_44473e2f *)arg2 contentScale:(float)arg3;
- (void)dealloc;
- (id)initWithIconPack:(id)arg1;

@end

