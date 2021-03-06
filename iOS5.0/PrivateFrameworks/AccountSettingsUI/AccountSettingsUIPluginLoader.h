/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, PSViewController;

@interface AccountSettingsUIPluginLoader : NSObject
{
    PSViewController *_parentController;
    NSMutableArray *_bundles;
    BOOL _includeNonAccountBundles;
}

- (void)_addBundleWithName:(id)arg1 commonSpecifierMode:(int)arg2 accountTypes:(id)arg3;
- (id)initWithParentController:(id)arg1 includeNonAccountBundles:(BOOL)arg2;
- (void)dealloc;
@property(readonly) NSArray *plugins;
- (id)pluginsForAccountTypes:(id)arg1;
- (id)orderedPluginsForAdd;
- (id)_pluginsWithCommonSpecifierMode:(int)arg1;
- (id)pluginsWithEagerlyLoadedCommonSpecifiers;
- (id)pluginsWithLazilyLoadedCommonSpecifiers;
- (id)pluginsWithCommonsSpecifiers;
- (void)invalidatePluginParentController;

@end

