/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult {
    CKContainer * _container;
    CKDatabase * _database;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;

- (id)container;
- (id)database;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 success:(bool)arg2 error:(id)arg3 container:(id)arg4 database:(id)arg5;

@end
