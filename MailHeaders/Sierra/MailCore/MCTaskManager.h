//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCActivityDelegate.h"
#import "MCHandlerDelegate.h"
#import "MCTaskListDelegate.h"

@class MCTaskList, NSArray, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface MCTaskManager : NSObject <MCTaskListDelegate, MCHandlerDelegate, MCActivityDelegate>
{
    NSMutableArray *_networkHandlers;	// 8 = 0x8
    NSMutableArray *_persistenceHandlers;	// 16 = 0x10
    NSMutableSet *_handlersCleaningUp;	// 24 = 0x18
    NSMutableSet *_activities;	// 32 = 0x20
    NSMutableSet *_bodyTrackers;	// 40 = 0x28
    NSMutableArray *_terminationBlocks;	// 48 = 0x30
    BOOL _reassignTasksWillRun;	// 56 = 0x38
    BOOL _hasActivity;	// 57 = 0x39
    NSOperationQueue *_serializationQueue;	// 64 = 0x40
    MCTaskList *_taskList;	// 72 = 0x48
    unsigned long long _maximumPersistenceHandlers;	// 80 = 0x50
    unsigned long long _maximumNetworkHandlers;	// 88 = 0x58
}

@property BOOL hasActivity; // @synthesize hasActivity=_hasActivity;
@property BOOL reassignTasksWillRun; // @synthesize reassignTasksWillRun=_reassignTasksWillRun;
@property unsigned long long maximumNetworkHandlers; // @synthesize maximumNetworkHandlers=_maximumNetworkHandlers;
@property unsigned long long maximumPersistenceHandlers; // @synthesize maximumPersistenceHandlers=_maximumPersistenceHandlers;
@property(readonly, nonatomic) MCTaskList *taskList; // @synthesize taskList=_taskList;
@property(readonly, nonatomic) NSOperationQueue *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
- (void).cxx_destruct;	// IMP=0x00000000000ac4c8
@property(readonly, nonatomic) BOOL networkIsLimited;
- (void)bodyTracker:(id)arg1 didCacheBodiesForMessages:(id)arg2;	// IMP=0x00000000000ac291
- (void)handlerDidCleanUp:(id)arg1;	// IMP=0x00000000000ac019
- (void)handler:(id)arg1 didFinishOperation:(id)arg2;	// IMP=0x00000000000ac007
- (void)resetNetworkHandlers;	// IMP=0x00000000000abe4d
- (void)cleanUp;	// IMP=0x00000000000abb6c
- (void)terminate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab8f5
- (id)newBodyFetchContext;	// IMP=0x00000000000ab8ed
- (void)goOffline;	// IMP=0x00000000000ab823
- (void)activity:(id)arg1 didEncounterError:(id)arg2;	// IMP=0x00000000000ab81d
- (void)activityDidFinish:(id)arg1;	// IMP=0x00000000000ab62a
- (void)addActivity:(id)arg1;	// IMP=0x00000000000ab410
- (void)taskListDidChange:(id)arg1;	// IMP=0x00000000000ab3fe
- (void)assignIdleTasks;	// IMP=0x00000000000ab3f8
- (void)assignActiveTasks;	// IMP=0x00000000000aab16
- (void)adjustHandlers;	// IMP=0x00000000000aa3f7
@property(readonly, copy, nonatomic) NSArray *orderedPersistenceHandlers;
@property(readonly, copy, nonatomic) NSArray *orderedNetworkHandlers;
- (void)_reassignTasks;	// IMP=0x00000000000aa208
- (void)tasksNeedAssignment;	// IMP=0x00000000000aa02f
- (void)removePersistenceHandler:(id)arg1;	// IMP=0x00000000000a9ef9
- (void)addPersistenceHandler:(id)arg1;	// IMP=0x00000000000a9dc5
- (void)removeNetworkHandler:(id)arg1;	// IMP=0x00000000000a9c6f
- (void)failedToCreateNetworkHandler;	// IMP=0x00000000000a9b5b
- (void)addNetworkHandler:(id)arg1;	// IMP=0x00000000000a9a27
@property(readonly, copy, nonatomic) NSArray *persistenceHandlers;
@property(readonly, copy, nonatomic) NSArray *networkHandlers;
@property(readonly, nonatomic) BOOL isInSerializationQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000a9806
@property(readonly, nonatomic) NSOperationQueue *utilityQueue;
- (void)dealloc;	// IMP=0x00000000000a95f1
- (id)init;	// IMP=0x00000000000a93f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
