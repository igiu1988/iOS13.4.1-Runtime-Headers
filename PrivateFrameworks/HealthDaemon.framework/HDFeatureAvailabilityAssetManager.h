/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFeatureAvailabilityAssetManager : NSObject <HDPeriodicActivityDelegate> {
    NSURL * _assetDirectoryOverride;
    _HKMobileAssetDownloadManager * _downloadManager;
    HDPeriodicActivity * _periodicActivity;
    NSObject<OS_dispatch_queue> * _queue;
    double  _retryInterval;
    NPSManager * _syncManager;
    NSUserDefaults * _unitTest_defaults;
    id /* block */  _unitTest_errorObserver;
}

@property (nonatomic, readonly) NSURL *assetDirectoryOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _HKMobileAssetDownloadManager *downloadManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDPeriodicActivity *periodicActivity;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double retryInterval;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NPSManager *syncManager;
@property (nonatomic, retain) NSUserDefaults *unitTest_defaults;
@property (nonatomic, copy) id /* block */ unitTest_errorObserver;

- (void).cxx_destruct;
- (void)_configureDownloadManager;
- (void)_queue_downloadDidCompleteWithAssets:(id)arg1;
- (void)_queue_downloadDidCompleteWithError:(id)arg1;
- (id)assetDirectoryOverride;
- (id)downloadManager;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)periodicActivity;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (id)queue;
- (double)retryInterval;
- (void)setDownloadManager:(id)arg1;
- (void)setPeriodicActivity:(id)arg1;
- (void)setUnitTest_defaults:(id)arg1;
- (void)setUnitTest_errorObserver:(id /* block */)arg1;
- (id)syncManager;
- (id)unitTest_defaults;
- (id /* block */)unitTest_errorObserver;

@end
