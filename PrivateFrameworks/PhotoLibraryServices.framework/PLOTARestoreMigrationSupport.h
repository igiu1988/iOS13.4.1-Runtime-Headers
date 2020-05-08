/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLOTARestoreMigrationSupport : NSObject {
    PLLibraryServicesManager * _libraryServicesManager;
}

- (void).cxx_destruct;
- (id)_assetTypesExcludedFromOTARestore;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)arg1;
- (id)_dataMigrationInfo;
- (void)_linkAsideAlbumMetadata;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAlbumPendingItemCountsWithContext:(id)arg1 shouldSave:(bool)arg2;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)arg1 populateAlbumMappings:(id)arg2;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (bool)isOTARestoreInProgress;
- (bool)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)arg1;

@end
