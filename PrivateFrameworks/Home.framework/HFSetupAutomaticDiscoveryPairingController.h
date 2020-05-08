/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSetupAutomaticDiscoveryPairingController : NSObject <HFSetupPairingController> {
    NSTimer * _accessoryNotFoundFatalTimeoutTimer;
    NSTimer * _accessoryNotFoundSoftTimeoutTimer;
    HMAccessorySetupCompletedInfo * _completedInfo;
    HFSetupPairingContext * _context;
    HFDiscoveredAccessory * _discoveredAccessoryToPair;
    HMHome * _home;
    NSSet * _pairedAccessories;
    NAFuture * _pairingFuture;
    NSHashTable * _pairingObservers;
    unsigned long long  _phase;
    NSDate * _phaseStartDate;
    HFSetupAccessoryResult * _setupResult;
    NSString * _statusDescription;
    NSString * _statusTitle;
}

@property (nonatomic, retain) NSTimer *accessoryNotFoundFatalTimeoutTimer;
@property (nonatomic, retain) NSTimer *accessoryNotFoundSoftTimeoutTimer;
@property (nonatomic, retain) HMAccessorySetupCompletedInfo *completedInfo;
@property (nonatomic, readonly) HFSetupPairingContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSSet *pairedAccessories;
@property (nonatomic, retain) NAFuture *pairingFuture;
@property (nonatomic, retain) NSHashTable *pairingObservers;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, retain) NSDate *phaseStartDate;
@property (nonatomic, retain) HFSetupAccessoryResult *setupResult;
@property (nonatomic, retain) NSString *statusDescription;
@property (nonatomic, retain) NSString *statusTitle;
@property (readonly) Class superclass;

+ (bool)supportsSetupPayloadRetry;

- (void).cxx_destruct;
- (void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2;
- (void)_failPairingWithError:(id)arg1;
- (void)_finishPairingWithAccessories:(id)arg1 completedInfo:(id)arg2;
- (id)_sendCancellationRequestToHomeKit;
- (void)_updateStatusTextAndNotifyDelegate:(bool)arg1;
- (id)accessoryNotFoundFatalTimeoutTimer;
- (id)accessoryNotFoundSoftTimeoutTimer;
- (void)addPairingObserver:(id)arg1;
- (id)cancel;
- (id)completedInfo;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)discoveredAccessoryToPair;
- (id)home;
- (id)initWithContext:(id)arg1;
- (id)pairedAccessories;
- (id)pairingFuture;
- (id)pairingObservers;
- (unsigned long long)phase;
- (id)phaseStartDate;
- (void)removePairingObserver:(id)arg1;
- (void)setAccessoryNotFoundFatalTimeoutTimer:(id)arg1;
- (void)setAccessoryNotFoundSoftTimeoutTimer:(id)arg1;
- (void)setCompletedInfo:(id)arg1;
- (void)setDiscoveredAccessoryToPair:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPairedAccessories:(id)arg1;
- (void)setPairingFuture:(id)arg1;
- (void)setPairingObservers:(id)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setPhaseStartDate:(id)arg1;
- (void)setSetupResult:(id)arg1;
- (void)setStatusDescription:(id)arg1;
- (void)setStatusTitle:(id)arg1;
- (id)setupResult;
- (void)startWithHome:(id)arg1;
- (id)statusDescription;
- (id)statusTitle;

@end
