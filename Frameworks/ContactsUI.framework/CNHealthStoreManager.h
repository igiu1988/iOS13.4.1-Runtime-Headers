/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNHealthStoreManager : NSObject {
    CNUIContactsEnvironment * _environment;
    int  _healthNotificationToken;
    HKHealthStore * _healthStore;
    bool  _isListeningToChanges;
    _HKMedicalIDData * _medicalIDData;
    NSMutableDictionary * _medicalIDDataHandlers;
    bool  _needsFetching;
    <CNScheduler> * _stateLock;
    <CNScheduler> * _workQueue;
}

@property (nonatomic, retain) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic) bool isListeningToChanges;
@property (nonatomic, retain) _HKMedicalIDData *medicalIDData;
@property (nonatomic, readonly) NSMutableDictionary *medicalIDDataHandlers;
@property (nonatomic) bool needsFetching;
@property (nonatomic, readonly) <CNScheduler> *stateLock;
@property (nonatomic, readonly) <CNScheduler> *workQueue;

+ (id)descriptorForRequiredKeys;
+ (id /* block */)emergencyContactMatchingContact:(id)arg1;
+ (id)identifiersForContactMatchingEmergencyContacts:(id)arg1 contactStore:(id)arg2;
+ (bool)shouldShowEmergencyContacts;

- (void).cxx_destruct;
- (id)createMedicalIDFromContact:(id)arg1;
- (void)dealloc;
- (id)environment;
- (id)healthStore;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 healthStore:(id)arg2;
- (bool)isListeningToChanges;
- (id)medicalIDData;
- (id)medicalIDDataHandlers;
- (bool)needsFetching;
- (id)nts_lazyHealthStore;
- (id)registerMedicalIDDataHandler:(id /* block */)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setIsListeningToChanges:(bool)arg1;
- (void)setMedicalIDData:(id)arg1;
- (void)setNeedsFetching:(bool)arg1;
- (void)startListeningForChanges;
- (id)stateLock;
- (void)unregisterHandlerForToken:(id)arg1;
- (void)updateAndDispatchMedicalIDData;
- (id)workQueue;

@end
