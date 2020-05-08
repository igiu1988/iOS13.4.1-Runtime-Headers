/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSSQLTableMigrationDescription : NSObject {
    NSMutableSet * _addedColumnSet;
    NSMutableArray * _addedEntityMigrations;
    NSMutableArray * _addedManyToManys;
    NSMutableSet * _columnsUpgradedToMandatory;
    NSMutableArray * _copiedEntityMigrations;
    NSMutableSet * _droppedEntitySet;
    NSNumber * _hasComplexSchemaTransformations;
    NSMutableDictionary * _migrationByEntity;
    int  _migrationType;
    NSMutableSet * _raisedColumnSet;
    NSMutableArray * _removedEntityMigrations;
    NSMutableArray * _removedManyToManys;
    NSMutableSet * _renamedColumnSet;
    NSMutableSet * _renamedMTMSet;
    NSSQLEntity * _rootEntity;
    NSSQLEntity * _sourceRootEntity;
    NSMutableDictionary * _tempTableNames;
    NSMutableArray * _transformedEntityMigrations;
    NSMutableArray * _transformedManyToManys;
}

@property (nonatomic, readonly) int migrationType;
@property (nonatomic, readonly) NSSQLEntity *rootEntity;

- (id)_addedManyToManys;
- (void)_determineSchemaTransformationComplexityInMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (bool)_doAttributesHaveChangesRequiringCopyForMigration:(id)arg1 withContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (bool)_doRelationshipsHaveChangesRequiringCopyForMigration:(id)arg1 inContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (bool)_hasComplexSchemaTransformationsInMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)_removedManyToManys;
- (id)_retainedRemovedSubEntitiesOfEntity:(id)arg1;
- (id)_sourceRootEntity;
- (id)_tempNameForTableName:(id)arg1;
- (id)_transformedManyToManys;
- (void)addEntityMigrationDescription:(id)arg1;
- (void)appendDefaultValueStatementsToCompleteMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToCreateOrDropTables:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToRenameTables:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createDefaultValuePopulationStatementsForAddedColumnsEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createDeleteStatementForEntityMigrations:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)dealloc;
- (id)description;
- (id)initWithRootEntity:(id)arg1 migrationType:(int)arg2;
- (int)migrationType;
- (id)newCloudKitMetadataUpdateStatements;
- (id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(bool)arg4 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg5;
- (id)rootEntity;

@end