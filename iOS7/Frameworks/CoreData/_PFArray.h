/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArray.h"

@interface _PFArray : NSArray
{
    int _cd_rc;
    unsigned int _count;
    id *_array;
    struct _PFArrayFlags _flags;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
- (void)_setShouldUseExtendedRelease:(BOOL)arg1;
- (void)_setShouldRelease:(BOOL)arg1;
- (unsigned int)_flags;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)getObjects:(id *)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)newArrayFromObjectIDs;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (id)arrayFromObjectIDs;
- (id *)_objectsPointer;
- (id)initWithObjects:(id *)arg1 count:(unsigned int)arg2 andFlags:(unsigned int)arg3;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;

@end

