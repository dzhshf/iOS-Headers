/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "EKCalendarEditItemDelegate-Protocol.h"

@class EKCalendar, EKCalendarShareesEditItem, EKEventStore, EKSource, NSArray, UITableView;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate>
{
    UITableView *_tableView;
    NSArray *_editItems;
    EKCalendarShareesEditItem *_shareesEditItem;
    EKSource *_source;
    unsigned int _entityType;
    BOOL _isNewCalendar;
    EKEventStore *_eventStore;
    EKCalendar *_calendar;
    id <EKCalendarEditorDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL isNewCalendar; // @synthesize isNewCalendar=_isNewCalendar;
@property(nonatomic) __weak id <EKCalendarEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView;
- (id)owningNavigationController;
- (int)sectionForCalendarEditItem:(id)arg1;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_deleteCalendar;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_presentValidationAlert:(id)arg1;
- (id)_editItems;
- (void)setupForCalendar;
- (struct CGSize)contentSizeForViewInPopover;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_shouldShowDeleteButton;
- (void)_eventStoreChanged:(id)arg1;
- (void)_localeChanged;
- (void)dealloc;
- (id)initWithSource:(id)arg1 eventStore:(id)arg2 entityType:(unsigned int)arg3;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned int)arg3;

@end

