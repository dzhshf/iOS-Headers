/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface AVChatParticipantStatusNugget : NSObject <NSCoding>
{
    NSString *_imHandleName;
    NSString *_imHandleID;
    NSString *_invitedBy;
    NSString *_vcPartyID;
    BOOL _sendingAudio;
    BOOL _sendingVideo;
    BOOL _usingICE;
    unsigned int _ardRole;
    unsigned int _state;
    int _error;
    unsigned int _reason;
}

+ (id)nuggetWithDictionaryDescription:(id)arg1;
+ (id)filterNuggets:(id)arg1 filterEndedState:(BOOL)arg2 convertFromDict:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setVCPartyID:(id)arg1;
@property(readonly, nonatomic) unsigned int reason;
@property(readonly, nonatomic) int error;
@property(readonly, nonatomic) unsigned int state;
@property(readonly, nonatomic) unsigned int ardRole;
@property(readonly, nonatomic) BOOL isUsingICE;
@property(readonly, nonatomic) BOOL sendingVideo;
@property(readonly, nonatomic) BOOL sendingAudio;
@property(readonly, nonatomic) NSString *vcPartyID;
@property(readonly, nonatomic) NSString *invitedBy;
@property(readonly, nonatomic) NSString *ID;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
@property(readonly, nonatomic) NSDictionary *dictionaryDescription;
- (void)_configureWithDictionaryDescription:(id)arg1;
- (id)initWithParticipant:(id)arg1;

@end

