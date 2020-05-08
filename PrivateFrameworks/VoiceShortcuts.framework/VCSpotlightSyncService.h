/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCSpotlightSyncService : NSObject <VCSpotlightSyncOperationDelegate, WFDatabaseResultObserver> {
    <VCDatabaseProvider> * _databaseProvider;
    WFDebouncer * _debouncer;
    CSSearchableIndex * _index;
    bool  _isFetchingClientState;
    NSObject<OS_dispatch_queue> * _queue;
    VCSpotlightSyncOperation * _syncOperation;
    WFDatabaseResult * _workflows;
}

@property (nonatomic, readonly) <VCDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) WFDebouncer *debouncer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic) bool isFetchingClientState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) VCSpotlightSyncOperation *syncOperation;
@property (nonatomic, readonly) WFDatabaseResult *workflows;

- (void).cxx_destruct;
- (id)databaseProvider;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)debouncer;
- (id)index;
- (id)initWithDatabaseProvider:(id)arg1;
- (bool)isFetchingClientState;
- (id)queue;
- (void)requestSync;
- (void)setIsFetchingClientState:(bool)arg1;
- (void)setSyncOperation:(id)arg1;
- (void)sync;
- (id)syncOperation;
- (void)syncOperationFinishedWithRequestToRelaunch:(bool)arg1;
- (id)workflows;

@end