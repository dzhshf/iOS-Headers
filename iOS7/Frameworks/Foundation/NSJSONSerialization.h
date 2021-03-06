/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSJSONSerialization : NSObject
{
    void *reserved[6];
}

+ (id)JSONObjectWithStream:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (int)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned int)arg3 error:(id *)arg4;
+ (id)JSONObjectWithData:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (BOOL)isValidJSONObject:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

