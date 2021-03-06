/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class MPImageCache, MPTimeMarker, MPVideoChapterCellContentView;

@interface MPVideoChapterCell : UITableViewCell
{
    MPVideoChapterCellContentView *_chapterContentView;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;
@property(retain, nonatomic) MPImageCache *artworkImageCache;
@property(retain, nonatomic) MPTimeMarker *timeMarker;
@property(nonatomic) float timeColumnWidth;
@property(nonatomic) BOOL showThumbnailColumn;
@property(nonatomic) unsigned int index;
@property(nonatomic, getter=isCurrent) BOOL current;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

