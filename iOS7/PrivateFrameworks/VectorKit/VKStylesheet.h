/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, VKGenericShieldDrawStyle, VKPGlobalProperties;

@interface VKStylesheet : NSObject
{
    NSString *_sheetName;
    float _scale;
    float _ppi;
    NSMutableArray *_flatStyles;
    int _rasterPolygonChangeoverZ;
    VKPGlobalProperties *_styleGlobalProperties;
    int _mapDisplayStyle;
    int _targetMapDisplayStyle;
    float _blendingFactor;
    unsigned int _updateStamp;
    BOOL _nightStyleVariantsInitialized;
    BOOL _supportsNightMode;
    BOOL _canSelectIcons;
    int _targetDisplay;
    VKGenericShieldDrawStyle *_defaultGenericShieldStyle;
}

+ (id)installedStylesheets;
+ (id)stylesheetWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3;
+ (void)_activeTileGroupWillChange;
@property(nonatomic) int targetDisplay; // @synthesize targetDisplay=_targetDisplay;
@property(nonatomic) BOOL canSelectIcons; // @synthesize canSelectIcons=_canSelectIcons;
@property(nonatomic) float blendingFactor; // @synthesize blendingFactor=_blendingFactor;
@property(readonly) unsigned int updateStamp; // @synthesize updateStamp=_updateStamp;
@property(nonatomic) int targetMapDisplayStyle; // @synthesize targetMapDisplayStyle=_targetMapDisplayStyle;
@property(readonly, nonatomic) int mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(readonly, nonatomic) VKPGlobalProperties *styleGlobalProperties; // @synthesize styleGlobalProperties=_styleGlobalProperties;
- (void)prepareStyleVariantsForMapDisplayStyle:(int)arg1;
@property(readonly, nonatomic) VKGenericShieldDrawStyle *defaultGenericShieldStyle;
- (id)_styleMatchingAttributes:(id)arg1 vectorType:(int)arg2 locale:(id)arg3;
- (int)rasterPolygonChangeoverZ;
- (float)targetBlendingFactor;
- (float)shieldBrightnessForDisplayStyle:(int)arg1;
- (float)shieldBrightnessForVectorType:(int)arg1;
- (float)_nightShieldBrightnessForVectorType:(int)arg1;
- (id)styleForFeature:(CDStruct_4c1ff046 *)arg1 vectorType:(int)arg2 locale:(id)arg3;
- (id)styleForFeature:(CDStruct_4c1ff046 *)arg1 vectorType:(int)arg2;
- (id)variantForStyle:(id)arg1;
- (id)sheetName;
- (void)dealloc;
- (BOOL)supportsMapDisplayStyle:(int)arg1;
- (oneway void)release;
- (id)initWithData:(id)arg1 forName:(id)arg2 scale:(float)arg3 ppi:(float)arg4;
- (id)init;
- (id)initWithScale:(float)arg1 ppi:(float)arg2;
- (id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3;

@end

