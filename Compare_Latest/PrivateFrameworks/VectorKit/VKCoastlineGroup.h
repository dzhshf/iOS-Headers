/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VGLMeshVendor, VKStyle;

@interface VKCoastlineGroup : NSObject
{
    VKStyle *_style;
    BOOL _visible;
    CDStruct_03942939 _offsetDirection;
    struct _VGLColor _shadowColor;
    struct _VGLColor _antialiasingBrushColor;
    float _shadowWidth;
    float _antialiasingBrushWidth;
    unsigned int _tilePointSize;
    VGLMeshVendor *_coastlineVendor;
}

@property(readonly, nonatomic) VGLMeshVendor *coastlineVendor; // @synthesize coastlineVendor=_coastlineVendor;
@property(nonatomic) float antialiasingBrushWidth; // @synthesize antialiasingBrushWidth=_antialiasingBrushWidth;
@property(nonatomic) float shadowWidth; // @synthesize shadowWidth=_shadowWidth;
@property(nonatomic) struct _VGLColor antialiasingBrushColor; // @synthesize antialiasingBrushColor=_antialiasingBrushColor;
@property(nonatomic) struct _VGLColor shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) CDStruct_03942939 offsetDirection; // @synthesize offsetDirection=_offsetDirection;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) VKStyle *style; // @synthesize style=_style;
- (id).cxx_construct;
- (unsigned int)triangleCount;
- (void)dealloc;
- (id)initWithStyle:(id)arg1 tilePointSize:(unsigned int)arg2;

@end

