/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTCoreDataStoreBackend : NSObject <AVTStoreBackend> {
    <AVTCoreDataPersistentStoreConfiguration> * _configuration;
    NSString * _localProcessName;
    <AVTUILogger> * _logger;
    <AVTAvatarRecordChangeTracker> * _recordChangeTracker;
    <AVTAvatarManagedRecordTransformer> * _recordTransformer;
    <AVTCoreDataRemoteChangesObserver> * _remoteChangesObserver;
    <AVTStoreBackendDelegate> * backendDelegate;
}

@property (nonatomic) <AVTStoreBackendDelegate> *backendDelegate;
@property (nonatomic, readonly) <AVTCoreDataPersistentStoreConfiguration> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localProcessName;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) <AVTAvatarRecordChangeTracker> *recordChangeTracker;
@property (nonatomic, readonly) <AVTAvatarManagedRecordTransformer> *recordTransformer;
@property (nonatomic, readonly) <AVTCoreDataRemoteChangesObserver> *remoteChangesObserver;
@property (readonly) Class superclass;

+ (id)cdFetchRequestForAvatarFetchRequest:(id)arg1 recordTransformer:(id)arg2;
+ (id)cdFetchRequestWithPredicate:(id)arg1 fetchLimit:(long long)arg2;
+ (bool)fetchRequestCriteriaSupported:(long long)arg1;

- (void).cxx_destruct;
- (id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)backendDelegate;
- (bool)canCreateAvatarWithError:(id*)arg1;
- (id)configuration;
- (void)contentDidChangeWithIdentifiers:(id)arg1;
- (bool)deleteAvatarWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)duplicateAvatarRecord:(id)arg1 error:(id*)arg2;
- (void)getChangedObjectIDsOfInterest:(id*)arg1 deletedIdentifiers:(id*)arg2 forTransactions:(id)arg3;
- (id)initWithConfiguration:(id)arg1 environment:(id)arg2;
- (id)initWithConfiguration:(id)arg1 recordTransformer:(id)arg2 remoteChangesObserver:(id)arg3 localProcessName:(id)arg4 recordChangeTracker:(id)arg5 environment:(id)arg6;
- (id)localProcessName;
- (id)logger;
- (id)newManagedObjectContext;
- (unsigned long long)nts_avatarCountWithManagedObjectContext:(id)arg1 error:(id*)arg2;
- (bool)nts_saveManagedObjectContext:(id)arg1 error:(id*)arg2;
- (void)performWorkWithManagedObjectContext:(id /* block */)arg1;
- (id)recordChangeTracker;
- (id)recordIdentifiersForManagedObjectIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
- (id)recordTransformer;
- (id)remoteChangesObserver;
- (bool)saveAvatar:(id)arg1 error:(id*)arg2;
- (bool)saveAvatars:(id)arg1 error:(id*)arg2;
- (void)setBackendDelegate:(id)arg1;
- (bool)setupStoreIfNeeded:(id*)arg1;
- (void)startObservingChangesIfNeeded;

@end
