/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseValueCache : NSObject <HDDiagnosticObject> {
    NSMutableDictionary * _cache;
    long long  _cacheScope;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    struct { 
        long long faultCount; 
        long long lookupCount; 
        long long resetCount; 
    }  _statistics;
    NSString * _threadLocalKey;
}

@property (readonly) long long cacheScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly) struct { long long x1; long long x2; long long x3; } statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commitTransactionStorage:(id)arg1;
- (id)_lock_objectForKey:(id)arg1 database:(id)arg2;
- (void)_lock_removeAllObjectsWithDatabase:(id)arg1;
- (void)_lock_storeObject:(id)arg1 forKey:(id)arg2 database:(id)arg3;
- (id)_transactionStorageWithDatabase:(id)arg1 createIfNecessary:(bool)arg2;
- (long long)cacheScope;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)fetchObjectForKey:(id)arg1 database:(id)arg2 error:(id*)arg3 faultHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 cacheScope:(long long)arg2;
- (id)name;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjectsWithDatabase:(id)arg1;
- (void)removeObjectForKey:(id)arg1 database:(id)arg2;
- (struct { long long x1; long long x2; long long x3; })statistics;

@end
