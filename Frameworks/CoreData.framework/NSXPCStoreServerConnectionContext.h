/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext * _context;
    NSXPCStoreConnectionInfo * _info;
    id  _manager;
}

- (bool)_allowCoreDataFutures;
- (struct { unsigned int x1[8]; })auditToken;
- (id)cache;
- (void)dealloc;
- (id)description;
- (id)entitlements;
- (id)initWithConnectionInfo:(id)arg1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)managedObjectContext;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)notificationManager;
- (id)persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)arg1;
- (void)setNotificationManager:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
