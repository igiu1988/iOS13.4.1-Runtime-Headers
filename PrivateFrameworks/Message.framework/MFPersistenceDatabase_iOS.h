/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFPersistenceDatabase_iOS : EDPersistenceDatabase <EFLoggable, MFMailMessageLibraryMigratorDelegate> {
    bool  _createdTempTable;
    bool  _migrationHasRun;
    id  _migrationLock;
}

@property (nonatomic) bool createdTempTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool migrationHasRun;
@property (nonatomic, readonly) id migrationLock;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)checkInConnection:(id)arg1;
- (id)checkOutConnectionIsWriter:(bool)arg1;
- (bool)createdTempTable;
- (bool)enforceDataProtection;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7;
- (bool)mailMessageLibraryMigrator:(id)arg1 attachProtectedDatabaseWithName:(id)arg2 connection:(id)arg3 error:(id*)arg4;
- (void)mailMessageLibraryMigrator:(id)arg1 detachProtectedDatabaseWithConnection:(id)arg2;
- (void)mailMessageLibraryMigrator:(id)arg1 isInitializingDatabaseWithConnection:(id)arg2;
- (void)mailMessageLibraryMigratorScheduleSpotlightReindex:(id)arg1;
- (bool)migrationHasRun;
- (id)migrationLock;
- (id)openConnectionIsWriter:(bool)arg1;
- (void)setCreatedTempTable:(bool)arg1;
- (void)setMigrationHasRun:(bool)arg1;

@end
