/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CLLocation, NSDate, NSManagedObjectID, PLMomentCluster;

@interface PLMomentNode : NSObject
{
    BOOL _marked;
    BOOL _visited;
    NSManagedObjectID *__objectID;
    CLLocation *__location;
    NSDate *__creationDate;
    PLMomentCluster *__cluster;
}

+ (id)partialAssetRepresentingNodeFetchRequestInManagedObjectContext:(id)arg1;
@property(nonatomic, getter=isVisited) BOOL visited; // @synthesize visited=_visited;
@property(nonatomic, getter=isMarked) BOOL marked; // @synthesize marked=_marked;
@property(nonatomic) PLMomentCluster *cluster; // @synthesize cluster=__cluster;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=__creationDate;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=__location;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=__objectID;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;
- (id)initWithPartialFetchDictionary:(id)arg1;
- (id)initWithManagedAsset:(id)arg1;

@end

