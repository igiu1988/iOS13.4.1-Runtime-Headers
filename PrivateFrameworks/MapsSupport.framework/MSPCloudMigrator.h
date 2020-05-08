/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudMigrator : NSObject <MSPCloudContainerObserver> {
    NSArray * _containers;
    MSPJournal * _journal;
    NSOrderedSet * _migratedFavoriteIdentifiers;
}

@property (nonatomic, retain) NSArray *containers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MSPJournal *journal;
@property (nonatomic, retain) NSOrderedSet *migratedFavoriteIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performMigrationsForCollectionsContainerWithCompletion:(id /* block */)arg1;
- (void)_performMigrationsForFavoritesContainerWithCompletion:(id /* block */)arg1;
- (void)_performMigrationsForHistoryContainerWithCompletion:(id /* block */)arg1;
- (void)_performMigrationsForPinnedPlacesContainerWithCompletion:(id /* block */)arg1;
- (void)_performPreSyncMigrationsForCollectionsContainerWithCompletion:(id /* block */)arg1;
- (void)_performPreSyncMigrationsForFavoritesContainerWithCompletion:(id /* block */)arg1;
- (void)_performPreSyncMigrationsForHistoryContainerWithCompletion:(id /* block */)arg1;
- (void)cloudContainer:(id)arg1 didFetchChanges:(id)arg2;
- (void)cloudContainerDidChange:(id)arg1;
- (id)containers;
- (id)initWithCloudContainers:(id)arg1;
- (id)initWithContainers:(id)arg1;
- (id)journal;
- (id)migratedFavoriteIdentifiers;
- (void)performMigrationsWithCompletion:(id /* block */)arg1;
- (void)performPreSyncMigrationsWithCompletion:(id /* block */)arg1;
- (void)setContainers:(id)arg1;
- (void)setJournal:(id)arg1;
- (void)setMigratedFavoriteIdentifiers:(id)arg1;

@end
