/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteDatabase : NSObject {
    NSMutableDictionary * _attachedDatabaseURLsByName;
    NSMutableArray * _beforeCommitBlocks;
    long long  _cacheScope;
    bool  _checkpointRequired;
    int  _corruptionResultCode;
    struct sqlite3 { } * _db;
    <HDSQLiteDatabaseDelegate> * _delegate;
    NSURL * _fileURL;
    bool  _hasEncounteredCorruptionError;
    bool  _isHandlingTransactionEnd;
    bool  _isInTransaction;
    NSMutableArray * _onCommitBlocks;
    NSMutableArray * _onRollbackBlocks;
    bool  _requiresRollback;
    HDSQLiteStatementCache * _statementCache;
    long long  _transactionType;
    bool  _writer;
}

@property (nonatomic) long long cacheScope;
@property (nonatomic) bool checkpointRequired;
@property (nonatomic, readonly) int corruptionResultCode;
@property (nonatomic) <HDSQLiteDatabaseDelegate> *delegate;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) bool hasEncounteredCorruptionError;
@property (nonatomic, readonly, copy) NSNumber *lastInsertRowID;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (nonatomic, readonly) HDSQLiteStatementCache *statementCache;
@property (nonatomic, readonly) long long statementCacheScope;
@property (getter=isWriter, nonatomic) bool writer;

+ (id)highFrequencyDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)mainDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)protectedDatabaseURLWithProfileDirectoryPath:(id)arg1;
+ (id)virtualFilesystemModule;

- (void).cxx_destruct;
- (int)_copyContentsFromDatabase:(struct sqlite3 { }*)arg1 toDatabase:(struct sqlite3 { }*)arg2;
- (bool)_executeSQL:(id)arg1 cache:(bool)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4 enumerationHandler:(id /* block */)arg5;
- (bool)_executeUncachedSQL:(id)arg1 error:(id*)arg2;
- (bool)_executeUncachedSQL:(id)arg1 error:(id*)arg2 retryIfBusy:(bool)arg3;
- (bool)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 value:(long long*)arg3 error:(id*)arg4;
- (int)_openForWriting:(bool)arg1 additionalFlags:(int)arg2 error:(id*)arg3;
- (bool)_prepareStatementForSQL:(id)arg1 cache:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (id)_schemaForDatabaseWithName:(id)arg1 error:(id*)arg2;
- (id)_schemaForIndexWithName:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)_schemaForTableWithName:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_setPragma:(id)arg1 integerValue:(long long)arg2 withDatabaseName:(id)arg3 error:(id*)arg4;
- (id)_statementCache;
- (bool)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(bool*)arg2 error:(id*)arg3;
- (id)_tableNamesForDatabaseWithName:(id)arg1 error:(id*)arg2;
- (bool)_verifyDatabaseOpenAndReturnError:(id*)arg1;
- (void)accessDatabaseUsingBlock:(id /* block */)arg1;
- (bool)accessHFDForReadingWithError:(id*)arg1 block:(id /* block */)arg2;
- (bool)accessHFDForWritingWithError:(id*)arg1 block:(id /* block */)arg2;
- (bool)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id*)arg3;
- (bool)attachProtectedDatabaseWithURL:(id)arg1 error:(id*)arg2;
- (void)beforeCommit:(id /* block */)arg1;
- (long long)cacheScope;
- (bool)checkpointRequired;
- (void)close;
- (bool)columnIsNullable:(id)arg1 inTable:(id)arg2 error:(id*)arg3;
- (bool)correlationCountForDataEntitySubclassTable:(id)arg1 count:(long long*)arg2 error:(id*)arg3;
- (int)corruptionResultCode;
- (void)dealloc;
- (id)delegate;
- (bool)deleteDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3;
- (bool)deleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3;
- (bool)detachDatabaseWithName:(id)arg1 error:(id*)arg2;
- (bool)detachProtectedDatabaseWithError:(id*)arg1;
- (id)dumpSchemaWithError:(id*)arg1;
- (bool)enableIncrementalAutovacuumForDatabaseWithName:(id)arg1 error:(id*)arg2;
- (bool)executeSQL:(id)arg1 error:(id*)arg2 bindingHandler:(id /* block */)arg3 enumerationHandler:(id /* block */)arg4;
- (bool)executeSQLStatements:(id)arg1 error:(id*)arg2;
- (bool)executeUncachedSQL:(id)arg1 error:(id*)arg2;
- (bool)executeUncachedSQL:(id)arg1 error:(id*)arg2 bindingHandler:(id /* block */)arg3 enumerationHandler:(id /* block */)arg4;
- (id)fileURL;
- (bool)foreignKeyExistsFromTable:(id)arg1 column:(id)arg2 toTable:(id)arg3 column:(id)arg4 error:(id*)arg5;
- (int)getChangesCount;
- (id)getLastErrorWithResultCode:(int)arg1;
- (bool)hasEncounteredCorruptionError;
- (id)highFrequencyDatabaseURL;
- (bool)incrementalVacuumDatabaseIfNeeded:(id)arg1 error:(id*)arg2;
- (id)initMemoryDatabaseFromURL:(id)arg1 delegate:(id)arg2;
- (id)initMemoryDatabaseWithDelegate:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 copyingDatabase:(id)arg2 delegate:(id)arg3;
- (id)initWithDatabaseURL:(id)arg1 delegate:(id)arg2;
- (bool)isDatabaseWithNameAttached:(id)arg1;
- (bool)isOpen;
- (bool)isProtectedDatabaseAttached;
- (bool)isWriter;
- (id)lastInsertRowID;
- (void)onCommit:(id /* block */)arg1 orRollback:(id /* block */)arg2;
- (int)openForReadingWithError:(id*)arg1;
- (int)openWithError:(id*)arg1;
- (int)openWithFileProtectionCompleteUnlessOpenWithError:(id*)arg1;
- (bool)performIntegrityCheckWithError:(id*)arg1 integrityErrorHandler:(id /* block */)arg2;
- (bool)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)queryPlanForSQL:(id)arg1 error:(id*)arg2;
- (void)requireRollback;
- (void)setCacheScope:(long long)arg1;
- (void)setCheckpointRequired:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setUserVersion:(long long)arg1 withDatabaseName:(id)arg2 error:(id*)arg3;
- (void)setWriter:(bool)arg1;
- (id)statementCache;
- (long long)statementCacheScope;
- (id)statementsForDeleteRowsFromDataEntitySubclassTable:(id)arg1 intermediateTables:(id)arg2 error:(id*)arg3;
- (bool)table:(id)arg1 hasColumnWithName:(id)arg2 error:(id*)arg3;
- (id)typeOfColumn:(id)arg1 inTable:(id)arg2 error:(id*)arg3;
- (long long)userVersionWithDatabaseName:(id)arg1 error:(id*)arg2;
- (long long)validateForeignKeysForTable:(id)arg1 databaseName:(id)arg2 error:(id*)arg3;

@end
