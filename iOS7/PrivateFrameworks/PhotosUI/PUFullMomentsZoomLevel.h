/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUZoomableGridZoomLevel.h>

#import "PUSectionedGridLayoutDelegate-Protocol.h"

@interface PUFullMomentsZoomLevel : PUZoomableGridZoomLevel <PUSectionedGridLayoutDelegate>
{
}

- (BOOL)canSummarizeSections;
- (BOOL)supportsSumarizeSections;
- (int)imageFormat;
- (BOOL)wantsMagnifierNavigation;
- (BOOL)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (void)registerReusableViewClassesForCollectionView:(id)arg1;
- (id)newCollectionViewLayout;
- (id)newHigherZoomLevel;
- (id)displayTitle;

@end

