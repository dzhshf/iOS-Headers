/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

#import "ABPeoplePickerHostViewControllerDelegate-Protocol.h"

@class ABPeoplePickerHostViewControllerProxy, NSArray;

@interface _ABPeoplePickerNavigationController : UINavigationController <ABPeoplePickerHostViewControllerDelegate>
{
    ABPeoplePickerHostViewControllerProxy *_hostViewControllerProxy;
    void *_addressBook;
    NSArray *_displayedProperties;
    id <_ABPeoplePickerNavigationControllerDelegate> _peoplePickerDelegate;
}

@property(nonatomic) id <_ABPeoplePickerNavigationControllerDelegate> peoplePickerDelegate; // @synthesize peoplePickerDelegate=_peoplePickerDelegate;
- (BOOL)shouldContinueAfterSelectingPerson:(int)arg1 vcard:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)shouldContinueAfterSelectingPerson:(int)arg1 vcard:(id)arg2;
- (void)didCancel;
@property(nonatomic) void *addressBook;
@property(copy, nonatomic) NSArray *displayedProperties;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (id)initWithStyle:(int)arg1;
- (id)initWithAddressBook:(void *)arg1;
- (id)initAsAddressBook:(BOOL)arg1;
- (id)initAsAddressBook:(BOOL)arg1 withStyle:(int)arg2;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void *)arg2;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void *)arg2 withStyle:(int)arg3;

@end

