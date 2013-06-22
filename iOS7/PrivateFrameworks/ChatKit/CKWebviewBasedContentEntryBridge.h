/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKContentEntryBridge.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKWebviewBasedContentEntryBridge : CKContentEntryBridge
{
    NSMutableDictionary *_resources;
    int _composeResourcePoolID;
    NSMutableSet *_imageDeletionSet;
    NSArray *_pasteboardValues;
}

@property(copy, nonatomic) NSArray *pasteboardValues; // @synthesize pasteboardValues=_pasteboardValues;
- (id)_htmlForMessagePart:(id)arg1;
- (id)_nodeForImagePart:(id)arg1 forRichContentView:(id)arg2;
- (id)_textView;
- (id)_imageURLForPart:(id)arg1 partID:(id)arg2;
- (void)previewDidChange:(id)arg1;
- (void)flushPasteboardValues;
- (void)reset;
- (void)updateComposition;
- (void)ckTextContentViewDidPaste:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1 inTextContentView:(id)arg2;
- (id)supportedPasteboardTypesForCurrentSelectionInRichContentView:(id)arg1;
- (BOOL)hasContent;
- (void)insertMessagePart:(id)arg1;
- (id)attachments;
- (void)setMessageParts:(id)arg1;
- (id)messageComposition;
- (void)setMessageComposition:(id)arg1;
- (id)newContentViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end
