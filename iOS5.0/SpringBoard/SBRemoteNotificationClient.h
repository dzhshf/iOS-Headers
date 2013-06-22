/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSData, NSDate, NSDictionary, NSString;

@interface SBRemoteNotificationClient : NSObject <NSCoding>
{
    NSString *_bundleIdentifier;
    NSString *_environment;
    int _appEnabledTypes;
    int _settingsEnabledTypes;
    int _settingsPresentedTypes;
    NSData *_lastKnownDeviceToken;
    NSDate *_missingDate;
    NSDate *_contentPushDisallowedBeforeDate;
    BOOL _hasShownSystemwideEnableAlert;
    NSDictionary *_lastUserInfo;
}

- (id)initWithBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)effectivelyEnabledTypes;
@property(retain, nonatomic) NSDictionary *lastUserInfo; // @synthesize lastUserInfo=_lastUserInfo;
@property(nonatomic) BOOL hasShownSystemwideEnableAlert; // @synthesize hasShownSystemwideEnableAlert=_hasShownSystemwideEnableAlert;
@property(retain, nonatomic) NSDate *contentPushDisallowedBeforeDate; // @synthesize contentPushDisallowedBeforeDate=_contentPushDisallowedBeforeDate;
@property(retain, nonatomic) NSDate *missingDate; // @synthesize missingDate=_missingDate;
@property(retain, nonatomic) NSData *lastKnownDeviceToken; // @synthesize lastKnownDeviceToken=_lastKnownDeviceToken;
@property(nonatomic) int settingsPresentedTypes; // @synthesize settingsPresentedTypes=_settingsPresentedTypes;
@property(nonatomic) int settingsEnabledTypes; // @synthesize settingsEnabledTypes=_settingsEnabledTypes;
@property(nonatomic) int appEnabledTypes; // @synthesize appEnabledTypes=_appEnabledTypes;
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(readonly, retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

@end
