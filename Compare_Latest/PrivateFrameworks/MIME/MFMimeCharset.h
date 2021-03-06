/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MFMimeCharset : NSObject
{
    unsigned long _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned int _coversLargeUnicodeSubset:1;
    unsigned int _useBase64InHeaders:1;
    unsigned int _canBeUsedForOutgoingMessages:1;
}

+ (id)preferredMimeCharset;
+ (id)charsetForEncoding:(unsigned long)arg1;
+ (id)allMimeCharsets;
+ (id)allMimeCharsets:(BOOL)arg1;
- (id)description;
- (id)primaryLanguage;
- (id)displayName;
- (BOOL)useBase64InHeaders;
- (BOOL)coversLargeUnicodeSubset;
- (BOOL)canBeUsedForOutgoingMessages;
- (id)charsetName;
- (unsigned long)encoding;
- (void)dealloc;
- (void)_setPrimaryLanguage:(id)arg1;
- (id)initWithEncoding:(unsigned long)arg1;

@end

