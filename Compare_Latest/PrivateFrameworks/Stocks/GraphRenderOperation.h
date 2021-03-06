/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, StockGraphImageSet, UIColor;

@interface GraphRenderOperation : NSObject
{
    BOOL _cancelled;
    BOOL _rendersVolume;
    BOOL _detailedMode;
    BOOL _roundLineCaps;
    struct CGPoint *_points;
    NSArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    float _lineWidth;
    CDStruct_cf61fa5f *_volumeBars;
    float _volumeBarWidth;
    unsigned int _volumeCount;
    id <GraphRenderOperationDelegate> _delegate;
    float _highlightOverlayBottomPadding;
    StockGraphImageSet *_graphImageSet;
    UIColor *_lineColor;
    struct CGGradient *_backgroundGradient;
    UIColor *_backgroundLinesColor;
    unsigned long long _maxVolume;
    struct CGSize _graphSize;
    struct CGSize _volumeGraphSize;
    struct UIEdgeInsets _graphInsets;
}

@property(retain, nonatomic) UIColor *backgroundLinesColor; // @synthesize backgroundLinesColor=_backgroundLinesColor;
@property(nonatomic) struct CGGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) BOOL roundLineCaps; // @synthesize roundLineCaps=_roundLineCaps;
@property(nonatomic) BOOL detailedMode; // @synthesize detailedMode=_detailedMode;
@property(retain, nonatomic) StockGraphImageSet *graphImageSet; // @synthesize graphImageSet=_graphImageSet;
@property(nonatomic) float highlightOverlayBottomPadding; // @synthesize highlightOverlayBottomPadding=_highlightOverlayBottomPadding;
@property(nonatomic) struct UIEdgeInsets graphInsets; // @synthesize graphInsets=_graphInsets;
@property(nonatomic) struct CGSize volumeGraphSize; // @synthesize volumeGraphSize=_volumeGraphSize;
@property(nonatomic) struct CGSize graphSize; // @synthesize graphSize=_graphSize;
@property(nonatomic) __weak id <GraphRenderOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int volumeCount; // @synthesize volumeCount=_volumeCount;
@property(nonatomic) unsigned long long maxVolume; // @synthesize maxVolume=_maxVolume;
@property(nonatomic) float volumeBarWidth; // @synthesize volumeBarWidth=_volumeBarWidth;
@property(nonatomic) CDStruct_cf61fa5f *volumeBars; // @synthesize volumeBars=_volumeBars;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSArray *dottedLinePositions; // @synthesize dottedLinePositions=_dottedLinePositions;
@property(retain, nonatomic) NSArray *linePointCounts; // @synthesize linePointCounts=_linePointCounts;
@property(nonatomic) struct CGPoint *points; // @synthesize points=_points;
@property(nonatomic) BOOL rendersVolume; // @synthesize rendersVolume=_rendersVolume;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)renderVolumeGraph;
- (void)renderLineGraph;
- (void)renderGraphLineInContext:(struct CGContext *)arg1 withColor:(id)arg2 offset:(struct CGPoint)arg3;
- (struct CGSize)lineGraphSize;
- (void)render;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

