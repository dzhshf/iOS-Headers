/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WDNetworkTask.h"

#import "WDTaskManager-Protocol.h"

@class NSMutableArray, NSSet, NSString;

@interface PDWhatChangedTask : WDNetworkTask <WDTaskManager>
{
    NSMutableArray *_pendingTasks;
    NSMutableArray *_completedTasks;
    NSMutableArray *_activeTasks;
    BOOL _gotUpdates;
    NSString *_passType;
    BOOL _partiallyComplete;
}

+ (id)taskWithPassType:(id)arg1 subtasks:(id)arg2;
@property(nonatomic) BOOL partiallyComplete; // @synthesize partiallyComplete=_partiallyComplete;
@property(retain, nonatomic) NSString *passType; // @synthesize passType=_passType;
- (void)_updateForTaskDeactivation:(BOOL)arg1;
- (void)_addTask:(id)arg1;
- (void)_commonInit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)task:(id)arg1 encounteredError:(id)arg2;
- (void)taskFailed:(id)arg1;
- (void)taskSucceeded:(id)arg1;
- (void)taskChangedState:(id)arg1;
- (void)task:(id)arg1 gotResult:(id)arg2;
- (BOOL)_matchesTask:(id)arg1;
- (id)description;
- (int)actionForActiveTask:(id)arg1;
- (int)actionForInactiveTask:(id)arg1;
- (BOOL)coalescesWithTaskSubclass:(Class)arg1;
- (void)performReset;
- (void)performCancel;
- (void)performStart;
- (BOOL)gotUpdates;
@property(readonly, nonatomic) NSSet *subtasks;
- (void)dealloc;
- (id)_initWithPassType:(id)arg1 subtasks:(id)arg2;

@end

