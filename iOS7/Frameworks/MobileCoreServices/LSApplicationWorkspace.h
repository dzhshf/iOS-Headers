/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface LSApplicationWorkspace : NSObject
{
}

+ (id)defaultWorkspace;
- (BOOL)_LSPrivateRebuildLaunchServicesDatabase;
- (BOOL)_LSPrivateRebuildApplicationDatabasesForSystemApps:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (BOOL)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned int)arg2;
- (void)removeInstallProgressForBundleID:(id)arg1;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)deviceIdentifierForVendor;
- (id)deviceIdentifierForAdvertising;
- (void)_clearCachedAdvertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (BOOL)invalidateIconCache:(id)arg1;
- (BOOL)unregisterApplication:(id)arg1;
- (BOOL)registerApplication:(id)arg1;
- (BOOL)registerApplicationDictionary:(id)arg1;
- (BOOL)registerApplicationDictionary:(id)arg1 withObserverNotification:(unsigned int)arg2;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id)arg3;
- (BOOL)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3 usingBlock:(id)arg4;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (BOOL)installApplication:(id)arg1 withOptions:(id)arg2;
- (id)privateURLSchemes;
- (id)publicURLSchemes;
- (BOOL)applicationIsInstalled:(id)arg1;
- (id)allApplications;
- (id)unrestrictedApplications;
- (id)placeholderApplications;
- (id)allInstalledApplications;
- (id)installedApplications;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(BOOL)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (BOOL)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)openURL:(id)arg1;
- (BOOL)openURL:(id)arg1 withOptions:(id)arg2;
- (BOOL)openApplicationWithBundleID:(id)arg1;
- (id)URLOverrideForURL:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (id)directionsApplications;
- (id)applicationForOpeningResource:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)delegateProxy;
- (id)remoteObserver;
- (BOOL)establishConnection;

@end

