/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterProxy : NSFileReactorProxy {
    id  _currentWriterPurposeID;
    bool  _didObserveMovingByWriter;
    bool  _didObserveNonCoordinatedChanges;
    bool  _didObserveVersionChangingByWriter;
    bool  _disconnected;
    unsigned long long  _filePresenterResponses;
    NSFilePresenterXPCMessenger * _forwardedMessenger;
    bool  _inSubarbiter;
    NSSet * _observedUbiquityAttributes;
    NSMutableArray * _previousWriterPurposeIDs;
    NSFileAccessProcessManager * _processManager;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remotePresenter;
    bool  _usesMainThreadDuringRelinquishing;
    NSFileWatcher * _watcher;
    unsigned long long  _writingRelinquishmentCount;
}

@property (readonly) bool disconnected;
@property (nonatomic) unsigned long long filePresenterResponses;
@property bool inSubarbiter;
@property (copy) NSSet *observedUbiquityAttributes;
@property bool usesMainThreadDuringReliquishing;

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;

- (id)_clientProxy;
- (void)_settleNonCoordinatedChanges;
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)allowedForURL:(id)arg1;
- (void)dealloc;
- (void)disconnect;
- (bool)disconnected;
- (unsigned long long)filePresenterResponses;
- (void)forwardRelinquishmentForWritingClaim:(bool)arg1 withID:(id)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 options:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (void)forwardUsingProxy:(id)arg1;
- (bool)inSubarbiter;
- (id)initWithClient:(id)arg1 remotePresenter:(id)arg2 reactorID:(id)arg3;
- (void)invalidate;
- (void)localFileWasEvicted;
- (void)observeChangeAtSubitemPath:(id)arg1;
- (void)observeChangeOfUbiquityAttributes:(id)arg1;
- (void)observeDisappearanceAtSubitemPath:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeMoveByWriterWithPurposeID:(id)arg1 withPhysicalDestinationURL:(id)arg2;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeNewProvider:(id)arg1;
- (void)observePresenterChange:(bool)arg1 atSubitemURL:(id)arg2;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeSharingChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeUbiquityChangeAtSubitemPath:(id)arg1 withPhysicalURL:(id)arg2;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (id)observedUbiquityAttributes;
- (void)promisedFileWasFulfilled;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)saveChangesWithCompletionHandler:(id /* block */)arg1;
- (void)setFilePresenterResponses:(unsigned long long)arg1;
- (void)setInSubarbiter:(bool)arg1;
- (void)setItemLocation:(id)arg1;
- (void)setObservedUbiquityAttributes:(id)arg1;
- (void)setUsesMainThreadDuringReliquishing:(bool)arg1;
- (bool)shouldSendObservationMessageWithPurposeID:(id)arg1;
- (void)startObservingApplicationStateWithQueue:(id)arg1;
- (void)startWatchingWithQueue:(id)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(id /* block */)arg3;
- (void)stopObservingApplicationState;
- (bool)usesMainThreadDuringReliquishing;

@end
