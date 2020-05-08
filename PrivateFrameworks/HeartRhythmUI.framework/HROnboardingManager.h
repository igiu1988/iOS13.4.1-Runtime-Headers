/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

@interface HROnboardingManager : NSObject <HROnboardingPageViewControllerDelegate, UINavigationControllerDelegate> {
    HKHeartRhythmAvailability * _availability;
    unsigned long long  _currentPageNumber;
    HKDateCache * _dateCache;
    bool  _firstTimeOnboarding;
    HKHealthStore * _healthStore;
    NPSManager * _nanoPreferenceSyncManager;
    UINavigationController * _navigationController;
    long long  _onboardingIntent;
    <HROnboardingManagerDelegate> * _onboardingManagerDelegate;
    NSString * _productType;
    HROnboardingSequence * _sequence;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, retain) HKHeartRhythmAvailability *availability;
@property (nonatomic) unsigned long long currentPageNumber;
@property (nonatomic, retain) HKDateCache *dateCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool firstTimeOnboarding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) NPSManager *nanoPreferenceSyncManager;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic) long long onboardingIntent;
@property (nonatomic) <HROnboardingManagerDelegate> *onboardingManagerDelegate;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) HROnboardingSequence *sequence;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (void)_advancingToOnboardingPageNumber:(long long)arg1;
- (void)_didStepBackward;
- (void)_wrapUpOnboardingWithAtrialFibrillationDetectionEnabled:(bool)arg1;
- (id)availability;
- (unsigned long long)currentPageNumber;
- (id)dateCache;
- (bool)firstTimeOnboarding;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4;
- (id)initWithHealthStore:(id)arg1 dateCache:(id)arg2 onboardingIntent:(long long)arg3 delegate:(id)arg4 firstTimeOnboarding:(bool)arg5;
- (id)nanoPreferenceSyncManager;
- (id)navigationController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)notNowTapped;
- (long long)onboardingIntent;
- (id)onboardingManagerDelegate;
- (id)onboardingNavigationController;
- (id)productType;
- (id)sequence;
- (void)setAvailability:(id)arg1;
- (void)setCurrentPageNumber:(unsigned long long)arg1;
- (void)setDateCache:(id)arg1;
- (void)setFirstTimeOnboarding:(bool)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setNanoPreferenceSyncManager:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setOnboardingIntent:(long long)arg1;
- (void)setOnboardingManagerDelegate:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSequence:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)stepForward;
- (id)userInfo;

@end
