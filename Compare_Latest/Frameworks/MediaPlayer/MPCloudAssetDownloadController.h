/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface MPCloudAssetDownloadController : NSObject
{
    NSMutableDictionary *_downloadSessionsForMediaItemIDs;
    BOOL _downloadSessionsPaused;
    unsigned long long _prioritizedMediaItemID;
}

+ (id)sharedAssetDownloadController;
- (void).cxx_destruct;
- (id)_urlConnectionRequestForMediaItem:(id)arg1;
- (void)_stopDownloadsBasedOnCurrentNetworkIfNeeded;
- (void)_resumedPausedDownloadSessionsForCompletedMediaItemID:(unsigned long long)arg1;
- (void)_removeNotificationObserversForDownloadSession:(id)arg1;
- (void)_prioritizeDownloadSessionForMediaItemPersistentID:(unsigned long long)arg1;
- (id)_newAVAssetForPurchaseResponseDictionary:(id)arg1 mediaItem:(id)arg2 preferredAssetFlavor:(id)arg3 options:(id)arg4;
- (id)_newAVAssetForMediaItem:(id)arg1 options:(id)arg2;
- (id)_newAssetForExistingDownloadSession:(id)arg1 options:(id)arg2;
- (BOOL)_mediaItemHasDownloadSessionForPersistentID:(unsigned long long)arg1;
- (id)_lowBitrateCachedAssetDestinationDirectory;
- (id)_downloadKeyCookieWithValue:(id)arg1 URL:(id)arg2;
- (BOOL)_canPlayCachedAssetAtPath:(id)arg1;
- (void)_cancelDownloadSession:(id)arg1;
- (id)_cachedAssetDestinationDirectory;
- (void)resumeAllDownloadSessions;
- (void)prioritizeDownloadSessionForMediaItem:(id)arg1;
- (void)pauseAllDownloadSessions;
- (BOOL)mediaItemHasDownloadSession:(id)arg1;
- (id)assetForMediaItem:(id)arg1 options:(id)arg2;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)_matchCellularDataRestrictedDidChangeNotification:(id)arg1;
- (void)_downloadSucceededNotification:(id)arg1;
- (void)_downloadFileSizeAvailableNotification:(id)arg1;
- (void)_downloadFailedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

