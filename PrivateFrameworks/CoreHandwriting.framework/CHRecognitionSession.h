/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHRecognitionSession : NSObject <CHRecognitionSessionTaskDelegate> {
    NSMutableArray * __activeTasks;
    unsigned long long  __changeCoalescingIndex;
    NSMutableArray * __changeObservers;
    NSArray * __effectiveLocales;
    bool  __hasUnprocessedChanges;
    NSMutableArray * __inputDrawingClients;
    NSMutableDictionary * __recognizersByLocaleID;
    NSObject<OS_dispatch_queue> * __sessionQueue;
    unsigned int  __taskQueueQoSClass;
    NSObject<OS_dispatch_queue> * __tasksWorkQueue;
    <CHRecognitionSessionDataSource> * _dataSource;
    CHRecognitionSessionResult * _lastRecognitionResult;
    <CHStrokeProvider> * _latestStrokeProvider;
    long long  _mode;
    NSArray * _preferredLocales;
    long long  _priority;
    long long  _recognitionEnvironment;
    long long  _status;
    bool  _strokeGroupingOnly;
}

@property (nonatomic, readonly, retain) NSMutableArray *_activeTasks;
@property (nonatomic) unsigned long long _changeCoalescingIndex;
@property (nonatomic, readonly, retain) NSMutableArray *_changeObservers;
@property (setter=_setEffectiveLocales:, nonatomic, copy) NSArray *_effectiveLocales;
@property (setter=_setHasUnprocessedChanges:, nonatomic) bool _hasUnprocessedChanges;
@property (nonatomic, readonly, retain) NSMutableArray *_inputDrawingClients;
@property (nonatomic, readonly, retain) NSMutableDictionary *_recognizersByLocaleID;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *_sessionQueue;
@property (nonatomic, readonly) unsigned int _taskQueueQoSClass;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *_tasksWorkQueue;
@property (nonatomic) <CHRecognitionSessionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setLastRecognitionResult:, retain) CHRecognitionSessionResult *lastRecognitionResult;
@property (readonly, retain) CHRecognitionSessionResult *lastRecognitionResult;
@property (readonly, retain) <CHStrokeProvider> *latestStrokeProvider;
@property (setter=_setLatestStrokeProvider:, retain) <CHStrokeProvider> *latestStrokeProvider;
@property (nonatomic, copy) NSArray *locales;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, copy) NSArray *preferredLocales;
@property (nonatomic) long long priority;
@property (nonatomic) long long recognitionEnvironment;
@property (nonatomic, readonly) NSData *sessionData;
@property (setter=_setStatus:, nonatomic) long long status;
@property (nonatomic, readonly) long long status;
@property (nonatomic) bool strokeGroupingOnly;
@property (readonly) Class superclass;

+ (bool)_isLocaleSupported:(id)arg1;
+ (id)createRecognizerForLocale:(id)arg1 remote:(bool)arg2 priority:(long long)arg3;
+ (id)effectiveLocalesFromLocales:(id)arg1;

- (id)_activeTasks;
- (void)_cancelOngoingRequests;
- (unsigned long long)_changeCoalescingIndex;
- (id)_changeObservers;
- (void)_cleanupCachedRecognizers;
- (id)_effectiveLocales;
- (bool)_hasPendingRecognitionTasks;
- (bool)_hasUnprocessedChanges;
- (id)_inputDrawingClients;
- (bool)_isReadyToProcessChanges;
- (id)_newRecognitionSessionTask;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (double)_preferredCoalescingInterval;
- (void)_processPendingStrokeChangesIfAvailable;
- (id)_recognizersByLocaleID;
- (void)_scheduleProcessStrokeProviderChangesImmediately:(bool)arg1;
- (id)_sessionQueue;
- (void)_setEffectiveLocales:(id)arg1;
- (void)_setHasUnprocessedChanges:(bool)arg1;
- (void)_setLastRecognitionResult:(id)arg1;
- (void)_setLatestStrokeProvider:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_setupExecutionQueuesForMode:(long long)arg1;
- (bool)_shouldRunRecognitionLocally;
- (unsigned int)_taskQueueQoSClass;
- (id)_tasksWorkQueue;
- (void)_updateRecognitionSessionStatus;
- (void)cancelOngoingRequests;
- (id)dataSource;
- (void)dealloc;
- (id)indexableContent;
- (id)init;
- (id)initWithMode:(long long)arg1;
- (id)lastRecognitionResult;
- (id)lastRecognitionResultWaitingForPendingTasks;
- (id)latestStrokeProvider;
- (bool)loadSessionData:(id)arg1 error:(id*)arg2;
- (id)locales;
- (long long)mode;
- (id)preferredLocales;
- (long long)priority;
- (void)rebuildRecognitionResults;
- (long long)recognitionEnvironment;
- (id)recognizableDrawingForStrokeGroupQueryItem:(id)arg1;
- (id)recognizerForLocale:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)registerInputDrawingClient:(id)arg1;
- (id)sessionData;
- (void)setDataSource:(id)arg1;
- (void)setLocales:(id)arg1;
- (void)setNeedsRecognitionUpdate;
- (void)setPreferredLocales:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRecognitionEnvironment:(long long)arg1;
- (void)setStrokeGroupingOnly:(bool)arg1;
- (void)set_changeCoalescingIndex:(unsigned long long)arg1;
- (long long)status;
- (bool)strokeGroupingOnly;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterInputDrawingClient:(id)arg1;
- (void)waitForPendingRecognitionTasks;

@end
