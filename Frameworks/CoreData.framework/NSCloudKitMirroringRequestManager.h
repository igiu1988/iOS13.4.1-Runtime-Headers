/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringRequestManager : NSObject {
    NSCloudKitMirroringRequest * _activeRequest;
    NSCloudKitMirroringDelegateResetRequest * _pendingDelegateResetRequest;
    NSCloudKitMirroringExportProgressRequest * _pendingExportProgressRequest;
    NSCloudKitMirroringExportRequest * _pendingExportRequest;
    NSCloudKitMirroringFetchRecordsRequest * _pendingFetchRecordsRequest;
    NSCloudKitMirroringImportRequest * _pendingImportRequest;
    NSCloudKitMirroringInitializeSchemaRequest * _pendingInitializeSchemaRequest;
    NSCloudKitMirroringResetMetadataRequest * _pendingResetMetadataRequest;
    NSCloudKitMirroringResetZoneRequest * _pendingResetRequest;
    NSCloudKitMirroringDelegateSerializationRequest * _pendingSerializationRequest;
    NSCloudKitMirroringDelegateSetupRequest * _pendingSetupRequest;
}

@property (nonatomic, readonly) NSCloudKitMirroringRequest *activeRequest;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateResetRequest *pendingDelegateResetRequest;
@property (nonatomic, readonly) NSCloudKitMirroringExportProgressRequest *pendingExportProgressRequest;
@property (nonatomic, readonly) NSCloudKitMirroringExportRequest *pendingExportRequest;
@property (nonatomic, readonly) NSCloudKitMirroringFetchRecordsRequest *pendingFetchRecordsRequest;
@property (nonatomic, readonly) NSCloudKitMirroringImportRequest *pendingImportRequest;
@property (nonatomic, readonly) NSCloudKitMirroringInitializeSchemaRequest *pendingInitializeSchemaRequest;
@property (nonatomic, readonly) NSCloudKitMirroringResetMetadataRequest *pendingResetMetadataRequest;
@property (nonatomic, readonly) NSCloudKitMirroringResetZoneRequest *pendingResetRequest;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateSerializationRequest *pendingSerializationRequest;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateSetupRequest *pendingSetupRequest;

- (id)activeRequest;
- (void)dealloc;
- (id)dequeueAllPendingRequests;
- (id)dequeueNextRequest;
- (id)duplicateRequestErrorForRequest:(id)arg1;
- (bool)enqueueRequest:(id)arg1 error:(id*)arg2;
- (id)pendingDelegateResetRequest;
- (id)pendingExportProgressRequest;
- (id)pendingExportRequest;
- (id)pendingFetchRecordsRequest;
- (id)pendingImportRequest;
- (id)pendingInitializeSchemaRequest;
- (id)pendingResetMetadataRequest;
- (id)pendingResetRequest;
- (id)pendingSerializationRequest;
- (id)pendingSetupRequest;
- (void)requestFinished:(id)arg1;

@end