/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding>
{
    BOOL _isLowConfidence;
    NSArray *_interpretations;
}

+ (BOOL)supportsSecureCoding;
@property BOOL isLowConfidence; // @synthesize isLowConfidence=_isLowConfidence;
@property(copy, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

