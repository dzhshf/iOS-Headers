/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFAttachmentDataProvider-Protocol.h"

@class MFMailMessage, MFMimePart, NSData;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProvider>
{
    NSData *_messageData;
    MFMimePart *_parentPart;
    MFMailMessage *_message;
}

- (id)messageForAttachment:(id)arg1;
- (BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;

@end

