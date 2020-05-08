/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporter : NSObject {
    PFCloudKitImporterOptions * _options;
    NSCloudKitMirroringImportRequest * _request;
    unsigned long long  _totalImportedBytes;
    CKServerChangeToken * _updatedDatabaseChangeToken;
    NSMutableArray * _workItemResults;
    NSArray * _workItems;
}

@property (nonatomic, readonly, copy) PFCloudKitImporterOptions *options;
@property (nonatomic, readonly) NSCloudKitMirroringImportRequest *request;
@property (nonatomic, readonly) unsigned long long totalImportedBytes;
@property (nonatomic, readonly) CKServerChangeToken *updatedDatabaseChangeToken;
@property (nonatomic, readonly) NSArray *workItemResults;
@property (nonatomic, readonly) NSArray *workItems;

- (void)databaseFetchFinishWithContext:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)dequeueWorkItem;
- (void)importIfNecessaryWithCompletion:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1 request:(id)arg2;
- (id)options;
- (void)processDatabaseImportContext:(id)arg1 completion:(id /* block */)arg2;
- (void)processWorkItemsWithCompletion:(id /* block */)arg1;
- (id)request;
- (unsigned long long)totalImportedBytes;
- (id)updatedDatabaseChangeToken;
- (void)workItemFinished:(id)arg1 withResult:(id)arg2 completion:(id /* block */)arg3;
- (id)workItemResults;
- (id)workItems;

@end
