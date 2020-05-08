/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceSyncSessionAssetTask : ATDeviceSyncSessionTask <ATAssetLinkControllerObserver> {
    bool  _addedTransportUpgradeException;
    <ATAssetClient> * _assetClient;
    ATAssetLinkController * _assetController;
    NSMutableSet * _assetStreams;
    NSMapTable * _assetToBytesMap;
    NSMutableOrderedSet * _clientAssetsInProgress;
    NSMutableOrderedSet * _clientAssetsRemaining;
    NSMutableDictionary * _detailedProgress;
    bool  _deviceShouldReportSyncProgress;
    NSDictionary * _installedAssetMetrics;
    NSDictionary * _itemsWithEstimatedFileSize;
    bool  _peerRequestsComplete;
    NSMutableDictionary * _progressMap;
    bool  _requestsComplete;
    NSMutableOrderedSet * _serverAssetsInProgress;
    unsigned long long  _successfullyCompletedItemCount;
    NSMutableDictionary * _syncProgresByAssetType;
    double  _taskStartTime;
    ATThroughputCalculator * _throughputCalculator;
    unsigned long long  _totalAssetSize;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_assetRequestsCompletedWithError:(id)arg1;
- (unsigned long long)_bytesDownloadedForAsset:(id)arg1;
- (void)_finishTaskWithError:(id)arg1;
- (id)_getMetricsWithCurrentProgressForInflightAssetsFromAssetMetrics:(id)arg1;
- (id)_getRawInstalledAssetMetricsFromAssetClient;
- (void)_handleAssetDownloadProgressed:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleAssetRequest:(id)arg1 onMessagLink:(id)arg2;
- (void)_handleBeginAssetTaskRequest:(id)arg1 onMessagLink:(id)arg2;
- (void)_handleEndAssetTaskRequest:(id)arg1 onMessagLink:(id)arg2;
- (void)_handleInstalledAssetMetricsChanged:(id)arg1 onMessageLink:(id)arg2;
- (void)_handleUpdateSessionTaskRequest:(id)arg1 onMessageLink:(id)arg2;
- (void)_loadInstalledAssetMetricsFromSyncClient;
- (id)_prepareInstalledAssetMetricsWithSerializedOutputFromClientMetrics:(id)arg1;
- (void)_removeAssetFromProgressMap:(id)arg1;
- (void)_sendUpdatedInstallMetrics;
- (id)_serializedAssetRequestsFromRequestDictionary:(id)arg1;
- (id)_serializedAssetSyncProgressFromAssetCacheDictionary:(id)arg1;
- (id)_serializedAssetsToDownloadDictionaryWithUpdatedProgressFromDownloadDictionary:(id)arg1;
- (id)_serializedDownloadedAssetsDictionaryFromDownloadedAssetsDictionary:(id)arg1;
- (void)_shouldDeviceReportSyncProgress;
- (void)_updateCachedInstalledAssetMetricsWithNewMetrics:(id)arg1;
- (void)_updateDetailedProgressForCompletedAsset:(id)arg1;
- (id)_updateProgressAndGetFileProgressParamsForAsset:(id)arg1;
- (void)_updateProgressWithBytesTransferred:(unsigned long long)arg1 forAsset:(id)arg2;
- (void)_updateProperties;
- (void)_updateTaskDescription;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)cancel;
- (id)initWithDataClass:(id)arg1 onMessageLink:(id)arg2;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (id)sessionGroupingKey;
- (void)start;
- (void)updateProgressWithCount:(unsigned long long)arg1 totalItemCount:(unsigned long long)arg2;

@end
