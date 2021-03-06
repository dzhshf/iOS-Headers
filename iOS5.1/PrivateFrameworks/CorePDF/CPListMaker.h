/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CPDisposable-Protocol.h"

@class CPLayoutArea, CPList, CPTextLine, NSArray;

@interface CPListMaker : NSObject <CPDisposable>
{
    CPLayoutArea *area;
    NSArray *spacers;
    unsigned int textLineCount;
    CPTextLine **textLines;
    CPList *list;
}

+ (void)makeListsInLayoutArea:(id)arg1;
+ (void)makeListsInChunk:(id)arg1;
+ (void)makeListsInPage:(id)arg1;
- (id)initWithLayoutArea:(id)arg1;
- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (void)fetchTextLine:(id)arg1;
- (void)fetchTextLinesInColumn:(id)arg1;
- (void)makeListItemFrom:(struct CPListInfo *)arg1 stopAt:(unsigned int)arg2;
- (BOOL)makeListFrom:(struct CPListInfo *)arg1;
- (void)makeListsInColumn:(id)arg1;
- (void)makeLists;

@end

