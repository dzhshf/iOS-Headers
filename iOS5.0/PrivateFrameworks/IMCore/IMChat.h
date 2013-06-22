/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAccount, IMHandle, IMMessage, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IMChat : NSObject
{
    NSString *_guid;
    NSString *_currentQuery;
    NSString *_identifier;
    IMAccount *_account;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableArray *_chatItems;
    NSMutableDictionary *_unfinishedChatItemMap;
    NSMutableArray *_participants;
    NSMutableDictionary *_participantStates;
    id _typingIndicatorTimer;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableDictionary *_chatItemsChanged;
    NSMutableDictionary *_messageMap;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    unsigned int _overallChatStatus;
    int _joinState;
    unsigned char _style;
    unsigned int _numberOfMessagesToKeepLoaded;
    double _joinedTimeInterval;
    unsigned int _chatItemChangeCount;
    unsigned int _cachedUnreadCount;
    NSMutableSet *_cachedReadMessages;
    unsigned int _cachedFailureCount;
    unsigned int _isRefreshing:1;
    unsigned int _isFirstMessageInvitation:1;
    unsigned int _wasInvitationHandled:1;
    unsigned int _didSendAFinishedMessage:1;
    unsigned int _shouldPostIndividualItemChanges:1;
    unsigned int _shouldAnnouncePeopleJoin:1;
    unsigned int _didPostWillChangeNotification:1;
}

@property(retain, nonatomic) IMMessage *invitationForPendingParticipants; // @synthesize invitationForPendingParticipants=_invitationForPendingParticipants;
@property(readonly, nonatomic) int joinState; // @synthesize joinState=_joinState;
@property(readonly, nonatomic) NSDate *dateModified; // @synthesize dateModified=_dateModified;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(readonly, nonatomic) unsigned char chatStyle; // @synthesize chatStyle=_style;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) NSArray *chatItems; // @synthesize chatItems=_chatItems;
- (id)_initWithDictionaryRepresentation:(id)arg1 initialItems:(id)arg2;
- (id)description;
- (void)_daemonDied:(id)arg1;
- (void)_daemonAlive:(id)arg1;
- (void)_accountControllerUpdated:(id)arg1;
- (BOOL)_sanityCheckAccounts;
- (void)addPendingParticipants:(id)arg1;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)_addParticipant:(id)arg1;
- (void)leave;
- (void)join;
@property(retain, nonatomic) IMHandle *recipient;
- (void)_setAccount:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (id)allPropertiesOfParticipant:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (id)valueForChatProperty:(id)arg1;
- (id)allChatProperties;
- (void)_setChatProperties:(id)arg1;
- (BOOL)_isDuplicate:(id)arg1;
- (id)_lastMessageChatItem;
- (void)markAllMessagesAsRead;
- (void)markMessagesAsRead:(id)arg1;
- (void)markMessageAsRead:(id)arg1;
- (void)_markMessagesAsRead:(id)arg1;
- (void)_cacheReadMessageGUID:(id)arg1;
- (void)_setTimerForReadMessageCache;
- (void)__clearReadMessageCache;
- (id)_messageChatItems;
- (void)updateMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)declineInvitation;
- (void)acceptInvitation;
@property(readonly, nonatomic) BOOL hasUnhandledInvitation;
@property(readonly, nonatomic) NSString *roomNameWithoutSuffix;
@property(readonly, nonatomic) NSString *persistentID;
- (void)setRoomName:(id)arg1;
@property(readonly, nonatomic) unsigned int overallChatStatus;
@property(readonly, nonatomic) BOOL canHaveMultipleParticipants;
- (id)convertToChatStyle:(unsigned char)arg1;
@property(readonly, nonatomic) NSString *chatIdentifier;
- (void)_clearCachedIdentifier;
- (unsigned int)stateForParticipant:(id)arg1;
- (id)participantsWithState:(unsigned int)arg1;
- (void)_fixLastStatusMessageIfNecessary;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_showErrorMessage:(id)arg1;
- (void)_participant:(id)arg1 statusChanged:(int)arg2;
- (void)_setJoinState:(int)arg1 quietly:(BOOL)arg2;
- (void)_setJoinState:(int)arg1;
- (void)_handleIncomingMessage:(id)arg1;
- (void)_handleCancelledMessage:(id)arg1;
- (void)_handleMessageGUIDDeletions:(id)arg1;
- (void)_setParticipantState:(unsigned int)arg1 forHandle:(id)arg2;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_accountLoggedOut:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)mark;
- (void)clear;
- (BOOL)deleteAllHistory;
- (BOOL)deleteChatItems:(id)arg1;
- (BOOL)deleteChatItem:(id)arg1;
- (BOOL)canDeleteChatItem:(id)arg1;
@property(readonly, nonatomic) unsigned int messageFailureCount;
- (unsigned int)_messageFailureCount;
@property(readonly, nonatomic) unsigned int unreadMessageCount;
- (unsigned int)_unreadMessageCount;
@property(readonly, nonatomic) unsigned int messageCount;
@property(readonly, nonatomic) IMMessage *lastMessage;
@property(readonly, nonatomic) IMMessage *lastFinishedMessage;
- (id)chatItemForMessage:(id)arg1;
- (id)_chatItemForGUID:(id)arg1;
- (id)messageForGUID:(id)arg1;
- (void)processChatItem:(id)arg1;
- (BOOL)shouldAppendDatestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldAppendTimestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldInsertChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_insertArchivedChatItems:(id)arg1;
- (void)_insertHistoricalChatItems:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3;
- (void)_removeInitialTypingIndicator;
- (void)_buildChatItemForErrorMessage:(id)arg1;
- (void)_buildChatItemForNewRecipient:(id)arg1 isNewAccount:(BOOL)arg2;
- (void)_buildChatItemForParticipantState:(unsigned int)arg1 handle:(id)arg2;
- (void)_buildChatItemForOverallChatStatusFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)_buildChatItemForDecidingHandleWentOffline:(id)arg1;
- (void)_buildChatItemForDisconnectOrLogout;
- (void)_buildInitialChatItems:(id)arg1;
- (void)_updateHeaderChatItem;
- (id)_newHeaderChatItemWithDate:(id)arg1;
- (void)_appendChatItem:(id)arg1;
- (void)_removeChatItem:(id)arg1 andTimestamp:(BOOL)arg2;
- (void)_replaceChatItem:(id)arg1 andTimestamp:(BOOL)arg2 withChatItem:(id)arg3;
- (unsigned int)_insertChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_replaceChatItem:(id)arg1 withChatItem:(id)arg2;
- (void)_postChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_postWillChangeIfNecessary;
- (id)_timeStampForChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_dateStampForChatItem:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_newInitialTypingIndicatorChatItem;
- (BOOL)_shouldDisplayInitialTypingIndicator;
- (BOOL)_shouldAnnouncePeopleJoin;
- (void)_endChatItemChanges;
- (void)_beginChatItemChanges;
- (void)_updateUnreadCount;
- (void)_clearUnreadCount;
- (void)_updateFailedCount;
- (void)_unmapChatItem:(id)arg1;
- (void)_mapChatItem:(id)arg1;
@property(readonly, nonatomic) BOOL _shouldRegisterChat;
- (void)dealloc;
- (id)init;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 chatItems:(id)arg5 participants:(id)arg6;
@property(nonatomic, setter=_setShouldPostIndividualItemChanges:) BOOL _shouldPostIndividualItemChanges;
- (void)_setIsRefreshing:(BOOL)arg1;
@property(readonly, nonatomic) BOOL _isRefreshing;

@end
