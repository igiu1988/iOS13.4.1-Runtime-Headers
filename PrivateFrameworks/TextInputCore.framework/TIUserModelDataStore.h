/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring> {
    NSObject<OS_dispatch_queue> * _database_queue;
    struct sqlite3 { } * _user_model_db;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)initializeDataStoreAtPath:(id)arg1;
+ (void)setSharedTIUserModelDataStore:(id)arg1;
+ (id)sharedUserModelDataStore;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (bool)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
- (bool)applySchema:(id)arg1;
- (bool)attemptSchemaMigration;
- (bool)closeDatabase;
- (bool)createOrOpenDatabaseAtPath:(id)arg1;
- (void)dealloc;
- (id)getAllKnownInputModes;
- (id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
- (id)getCreationSchema;
- (int)getDatabaseVersion;
- (id)getDurableValueForKey:(id)arg1;
- (id)getInputModesForKey:(id)arg1;
- (id)getV1MigrationSchema;
- (bool)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (bool)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
- (bool)purgeDurableDataForKeyPrefix:(id)arg1;
- (bool)setDatabaseVersion:(int)arg1;
- (bool)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;

@end
