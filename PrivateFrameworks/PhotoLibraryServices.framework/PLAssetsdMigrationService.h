/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsdMigrationService : PLAbstractLibraryServicesManagerService <PLAssetsdMigrationServiceProtocol> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundQueue;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)arg1 reply:(id /* block */)arg2;
- (void)dataMigrationWillFinishWithReply:(id /* block */)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)moveiPhotoLibraryMediaWithReply:(id /* block */)arg1;

@end