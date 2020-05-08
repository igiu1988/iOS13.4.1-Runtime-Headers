/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface MTDB : MTSingleton <NSManagedObjectContextProvider> {
    MTDBConfig * _config;
    MTCoreDataContainer * _coreDataContainer;
}

@property (nonatomic, retain) MTDBConfig *config;
@property (nonatomic, retain) MTCoreDataContainer *coreDataContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)canExtensionOpenDatabase;
+ (long long)coreDataVersion;
+ (bool)createDatabaseIfNeeded;
+ (id)fetchManagedObjectModelFromDisk;
+ (bool)isCorrupt;
+ (long long)libraryDataVersion;
+ (id)libraryPath;
+ (id)libraryShmPath;
+ (id)libraryWalPath;
+ (void)setCoreDataVersion:(long long)arg1;
+ (void)setLibraryDataVersion:(long long)arg1;

- (void).cxx_destruct;
- (void)addChangeNotifier:(id)arg1;
- (id)carPlayContext;
- (id)config;
- (id)coreDataContainer;
- (id)importContext;
- (id)init;
- (id)mainOrPrivateContext;
- (id)mainQueueContext;
- (id)managedObjectModel;
- (id)persistentStoreUuid;
- (id)privateQueueContext;
- (void)removeChangeNotifier:(id)arg1;
- (id)resetableImportContext;
- (void)setConfig:(id)arg1;
- (void)setCoreDataContainer:(id)arg1;
- (id)storeContext;

@end
