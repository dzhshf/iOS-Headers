/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBManagerClientInterface-Protocol.h"

@class NSXPCConnection;

@interface SBManagerClient : NSObject <SBManagerClientInterface>
{
    NSXPCConnection *_serverConnection;
    id <SBManagerClientDelegate> _delegate;
    BOOL _connected;
    BOOL _serverIsExiting;
    int _clientType;
    struct dispatch_queue_s *_queue;
}

@property struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(nonatomic) id <SBManagerClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)noteServerExiting;
- (void)noteConnectionDropped;
- (void)connectToServerIfNecessary;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(id)arg1 connectIfNecessary:(void)arg2;
- (id)_remoteInterfaceWithErrorHandler:(id)arg1;
- (id)_remoteInterface;
- (void)checkForSoftwareBehaviorBundleUpdate:(id)arg1;
- (void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(id)arg2;
- (void)isSoftwareBehaviorBundleSupported:(id)arg1;
- (void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(id)arg3;
- (void)_setClientType;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1 clientType:(int)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

