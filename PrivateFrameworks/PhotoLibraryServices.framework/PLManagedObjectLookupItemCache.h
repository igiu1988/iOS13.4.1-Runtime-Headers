/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedObjectLookupItemCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    PLManagedObjectContext * _creationContext;
    NSMutableDictionary * _objectIDsByKey;
    PLPhotoLibraryPathManager * _pathManager;
}

- (void).cxx_destruct;
- (id)createObjectIfNecessaryForKey:(id)arg1 withManagedObjectContext:(id)arg2 createBlock:(id /* block */)arg3;
- (id)initWithPathManager:(id)arg1;
- (void)invalidateWithReason:(id)arg1;
- (id)objectIDForKey:(id)arg1;
- (void)setObjectID:(id)arg1 forKey:(id)arg2;

@end
