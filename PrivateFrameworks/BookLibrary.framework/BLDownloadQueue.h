/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLDownloadQueue : NSObject <SSBookDownloadQueue> {
    NSMutableDictionary * _activeDownloads;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeDownloadsLock;
    NSNumber * _currentAccountNumber;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    BLServiceProxy * _serviceProxy;
}

@property (nonatomic, retain) NSMutableDictionary *activeDownloads;
@property (nonatomic, retain) NSNumber *currentAccountNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) BLServiceProxy *serviceProxy;
@property (readonly) Class superclass;

+ (void)cancelAllActiveDownloads;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addDownloadWithMetadata:(id)arg1 isRestore:(bool)arg2 completion:(id /* block */)arg3;
- (void)_cancelAllPausedDownloads;
- (id)_dateFromObject:(id)arg1;
- (id)_downloadStatusFromDictionary:(id)arg1 outParamNewlyTrackedDownload:(bool*)arg2;
- (id)_downloadStatusStoreID:(id)arg1 orPermLink:(id)arg2 downloadID:(id)arg3 isPaused:(bool)arg4 isAudiobook:(bool)arg5;
- (void)_notifyComplete:(id)arg1;
- (void)_notifyFailed:(id)arg1;
- (void)_notifyProgress:(id)arg1;
- (id)_numberFromObject:(id)arg1;
- (void)_postDownloadCompleteNotificationWithDictionary:(id)arg1 failed:(bool)arg2;
- (void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg1;
- (void)_purchaseFailed:(id)arg1;
- (id)_purchaseResponseFromDictionary:(id)arg1;
- (void)_purchaseSucceeded:(id)arg1;
- (void)_sendCancelCompletionNotificationForDownloadWithDownloadID:(id)arg1;
- (void)_sendInitialProgressNotificationForDownloadWithStoreID:(id)arg1 orPermlink:(id)arg2 downloadID:(id)arg3 isPaused:(bool)arg4 isAudiobook:(bool)arg5 targetObserver:(id)arg6;
- (void)_storeChanged:(id)arg1;
- (id)_stringFromObject:(id)arg1;
- (id)activeDownloads;
- (void)addDownloadWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (void)addDownloadWithPurchaseParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)addDownloadWithPurchaseParameters:(id)arg1 storeID:(id)arg2 completion:(id /* block */)arg3;
- (void)addDownloadsWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)addRestoreDownloadWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAllActiveDownloadsWithCompletion:(id /* block */)arg1;
- (void)cancelDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)currentAccountNumber;
- (void)dealloc;
- (id)downloads;
- (id)init;
- (id)observers;
- (void)pauseDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 completion:(id /* block */)arg3;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(bool)arg3 completion:(id /* block */)arg4;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(bool)arg3 userInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)purchaseWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)resumeDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)serviceProxy;
- (void)setActiveDownloads:(id)arg1;
- (void)setCurrentAccountNumber:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setServiceProxy:(id)arg1;

@end
