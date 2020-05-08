/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDProfile : NSObject <HDHealthDaemonReadyObserver> {
    HDRestorableAlarmScheduler * _alarmScheduler;
    HDAuthorizationManager * _authorizationManager;
    HDAWDSubmissionManager * _awdSubmissionManager;
    HDCloudSyncManager * _cloudSyncManager;
    HDDaemon * _daemon;
    HDDataManager * _dataManager;
    HDDataProvenanceManager * _dataProvenanceManager;
    HDDatabase * _database;
    HDDatabasePruningManager * _databasePruningManager;
    HDDeviceManager * _deviceManager;
    NSString * _directoryPath;
    HDMedicalIDDataManager * _medicalIDDataManager;
    NSString * _medicalIDDirectoryPath;
    HDMetadataManager * _metadataManager;
    HDMigrationManager * _migrationManager;
    NSDictionary * _profileExtensionsByIdentifier;
    HKProfileIdentifier * _profileIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _profileLock;
    long long  _profileType;
    HDAssertionManager * _sessionAssertionManager;
    HDSourceManager * _sourceManager;
    HDSourceOrderManager * _sourceOrderManager;
    HDDaemonSyncEngine * _syncEngine;
    HDUnitPreferencesManager * _unitPreferencesManager;
    HDUserCharacteristicsManager * _userCharacteristicsManager;
    HDWorkoutCondenser * _workoutCondenser;
}

@property (nonatomic, readonly) HDActivityCacheManager *activityCacheManager;
@property (nonatomic, readonly) HDRestorableAlarmScheduler *alarmScheduler;
@property (nonatomic, readonly) HDAppSubscriptionManager *appSubscriptionManager;
@property (nonatomic, readonly) HDAuthorizationManager *authorizationManager;
@property (nonatomic, readonly) HDAWDSubmissionManager *awdSubmissionManager;
@property (nonatomic, readonly) HDCloudSyncManager *cloudSyncManager;
@property (nonatomic, readonly) HDCurrentActivitySummaryHelper *currentActivitySummaryHelper;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (nonatomic, readonly) HDDataManager *dataManager;
@property (nonatomic, readonly) HDDataProvenanceManager *dataProvenanceManager;
@property (nonatomic, readonly) HDDatabase *database;
@property (nonatomic, readonly) HDDatabasePruningManager *databasePruningManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDDeviceManager *deviceManager;
@property (nonatomic, readonly, copy) NSString *directoryPath;
@property (nonatomic, readonly, copy) NSURL *directoryURL;
@property (nonatomic, readonly) HDFitnessMachineManager *fitnessMachineManager;
@property (nonatomic, readonly) bool hasHealthRecordsAccounts;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, readonly) HDMedicalIDDataManager *medicalIDDataManager;
@property (nonatomic, readonly, copy) NSString *medicalIDDirectoryPath;
@property (nonatomic, readonly) HDMetadataManager *metadataManager;
@property (nonatomic, readonly) HDMigrationManager *migrationManager;
@property (nonatomic, readonly) HDNanoSyncManager *nanoSyncManager;
@property (nonatomic, readonly) HDNotificationManager *notificationManager;
@property (nonatomic, readonly) HDOntologyLifecycleManager *ontologyLifecycleManager;
@property (nonatomic, readonly, copy) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, readonly) long long profileType;
@property (nonatomic, readonly) HDServiceConnectionManager *serviceConnectionManager;
@property (nonatomic, readonly) HDHealthServiceManager *serviceManager;
@property (nonatomic, readonly) HDAssertionManager *sessionAssertionManager;
@property (nonatomic, readonly) HDSourceManager *sourceManager;
@property (nonatomic, readonly) HDSourceOrderManager *sourceOrderManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDSyncEngine> *syncEngine;
@property (nonatomic, readonly) HDUnitPreferencesManager *unitPreferencesManager;
@property (nonatomic, readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property (nonatomic, readonly) HDWorkoutCondenser *workoutCondenser;
@property (nonatomic, readonly) HDWorkoutManager *workoutManager;

- (void).cxx_destruct;
- (void)_createExtensionsIfNeeded;
- (id)_displayNameWithError:(id*)arg1;
- (id)_lastNameWithError:(id*)arg1;
- (id)_newAWDSubmissionManager;
- (id)_newCloudSyncManager;
- (id)_newUserCharacteristicsManager;
- (id)activityCacheManager;
- (id)alarmScheduler;
- (id)appSubscriptionManager;
- (id)authorizationManager;
- (id)awdSubmissionManager;
- (id)cloudSyncManager;
- (id)currentActivitySummaryHelper;
- (id)daemon;
- (void)daemonReady:(id)arg1;
- (id)dataCollectionManager;
- (id)dataManager;
- (id)dataProvenanceManager;
- (id)database;
- (id)databasePruningManager;
- (id)description;
- (id)deviceManager;
- (id)directoryPath;
- (id)directoryURL;
- (bool)fetchDisplayFirstName:(id*)arg1 lastName:(id*)arg2 error:(id*)arg3;
- (id)fitnessMachineManager;
- (bool)hasHealthRecordsAccounts;
- (id)healthDaemon;
- (id)healthDeviceManager;
- (id)healthSourceManager;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3 profileType:(long long)arg4 profileIdentifier:(id)arg5;
- (void)invalidateAndWait;
- (id)medicalIDDataManager;
- (id)medicalIDDirectoryPath;
- (id)metadataManager;
- (id)migrationManager;
- (id)nanoSyncManager;
- (id)notificationManager;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)obliterateWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (id)ontologyLifecycleManager;
- (id)profileExtensionWithIdentifier:(id)arg1;
- (id)profileExtensionsConformingToProtocol:(id)arg1;
- (id)profileIdentifier;
- (long long)profileType;
- (id)serviceConnectionManager;
- (id)serviceManager;
- (id)sessionAssertionManager;
- (bool)setDisplayFirstName:(id)arg1 lastName:(id)arg2 error:(id*)arg3;
- (id)sourceManager;
- (id)sourceOrderManager;
- (id)syncEngine;
- (void)terminationCleanup;
- (id)unitPreferencesManager;
- (id)userCharacteristicsManager;
- (id)workoutCondenser;
- (id)workoutManager;

@end
