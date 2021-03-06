/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADMobileAssets : NSObject {
    NSURL * _assetPath;
    NSObject<OS_dispatch_queue_global> * _assetQueue;
    NSString * _assetType;
    NSDate * _creationTime;
    NSArray * _lookbackPeriods;
    NSNumber * _maxQueryElements;
    bool  _operationInProgress;
    ADBackgroundTaskRequest * _task;
    NSString * _version;
}

@property (nonatomic, retain) NSURL *assetPath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue_global> *assetQueue;
@property (nonatomic, retain) NSString *assetType;
@property (nonatomic, retain) NSDate *creationTime;
@property (nonatomic, retain) NSArray *lookbackPeriods;
@property (nonatomic, retain) NSNumber *maxQueryElements;
@property bool operationInProgress;
@property (nonatomic, retain) ADBackgroundTaskRequest *task;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)assetPath;
- (id)assetQueue;
- (id)assetType;
- (void)createAppUsageVectors:(id /* block */)arg1;
- (id)creationTime;
- (void)doneWithOperations;
- (void)downloadAssetCatalog:(id /* block */)arg1;
- (void)findProperAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithAsset:(id)arg1 andTask:(id)arg2;
- (id)lookbackPeriods;
- (id)maxQueryElements;
- (bool)operationInProgress;
- (void)queryAssetData:(id /* block */)arg1;
- (void)setAssetPath:(id)arg1;
- (void)setAssetQueue:(id)arg1;
- (void)setAssetType:(id)arg1;
- (void)setCreationTime:(id)arg1;
- (void)setLookbackPeriods:(id)arg1;
- (void)setMaxQueryElements:(id)arg1;
- (void)setOperationInProgress:(bool)arg1;
- (void)setTask:(id)arg1;
- (void)setVersion:(id)arg1;
- (bool)shouldStartOperations;
- (id)task;
- (id)version;

@end
