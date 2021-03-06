/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableOrderedSet, NSOrderedSet, PUActivityViewController;

@interface PUActivityItemSourceController : NSObject
{
    NSMutableOrderedSet *_assets;
    NSMutableOrderedSet *_assetItemSources;
    PUActivityViewController *_activityViewController;
}

@property(copy, nonatomic) NSOrderedSet *assets; // @synthesize assets=_assets;
@property(nonatomic) __weak PUActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
- (void).cxx_destruct;
- (int)countOfAssetType:(short)arg1;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *assetItemSources;

@end

