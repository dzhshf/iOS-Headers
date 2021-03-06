/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADEffect.h>

@class OADColor;

@interface OADShadowEffect : OADEffect
{
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (id)initWithType:(int)arg1;
- (id)initWithShadowEffect:(id)arg1 type:(int)arg2;
- (void)dealloc;
- (id)color;
- (void)setColor:(id)arg1;
- (float)blurRadius;
- (void)setBlurRadius:(float)arg1;
- (float)distance;
- (void)setDistance:(float)arg1;
- (float)angle;
- (void)setAngle:(float)arg1;
- (void)setStyleColor:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

