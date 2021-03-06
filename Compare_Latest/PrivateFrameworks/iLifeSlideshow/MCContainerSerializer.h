/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCContainer.h>

@class NSArray, NSDictionary, NSMutableSet, NSSet, NSString;

@interface MCContainerSerializer : MCContainer
{
    NSMutableSet *mPlugs;
    NSArray *mCachedOrderedPlugs;
    double mCachedDuration;
    NSString *_initialTransitionID;
    NSDictionary *_initialTransitionAttributes;
    double _initialTransitionDuration;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(copy) NSDictionary *initialTransitionAttributes; // @synthesize initialTransitionAttributes=_initialTransitionAttributes;
@property(nonatomic) double initialTransitionDuration; // @synthesize initialTransitionDuration=_initialTransitionDuration;
@property(copy) NSString *initialTransitionID; // @synthesize initialTransitionID=_initialTransitionID;
- (double)timeInForPlug:(id)arg1;
@property(readonly) NSArray *orderedPlugs;
- (void)removeAllPlugs;
- (void)movePlugsAtIndices:(id)arg1 toIndex:(unsigned int)arg2;
- (void)removePlugsAtIndices:(id)arg1;
- (id)insertPlugsForContainers:(id)arg1 atIndex:(unsigned int)arg2;
- (id)insertPlugForContainer:(id)arg1 atIndex:(unsigned int)arg2;
- (id)addPlugsForContainers:(id)arg1;
- (id)addPlugForContainer:(id)arg1;
- (id)plugAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int countOfPlugs;
@property(readonly) NSSet *plugs;
@property(readonly) double duration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;

@end

