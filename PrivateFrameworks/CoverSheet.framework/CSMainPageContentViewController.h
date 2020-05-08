/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSMainPageContentViewController : CSPageViewController <CSCombinedListViewControllerDelegate, CSNotificationDestination, CSPageViewControllerProtocol, CSUserPresenceMonitorObserver, PTSettingsKeyObserver> {
    <SBFAuthenticationStatusProvider> * _authenticationProvider;
    CSCombinedListViewController * _combinedListViewController;
    CSLayoutStrategy * _layoutStrategy;
    CSLogoutButtonViewController * _logoutButtonViewController;
    long long  _smoothestPermittedStrategy;
    CSLockScreenSettings * _testSettings;
    <CSTouchEnvironmentStatusProviding> * _touchEnvironmentStatusProvider;
    bool  _useFakeBlur;
    CSUserPictureViewController * _userPictureViewController;
    CSUserPresenceMonitor * _userPresenceMonitor;
    CSUserPresenceMonitor * _userPresenceMontior;
    <CSUserSessionControlling> * _userSessionController;
    <CSWallpaperColorProvider> * _wallpaperColorProvider;
    <CSWallpaperViewProviding> * _wallpaperViewProvider;
}

@property (nonatomic, readonly, copy) CSAppearance *activeAppearance;
@property (nonatomic, readonly, copy) CSBehavior *activeBehavior;
@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) CSCombinedListViewController *combinedListViewController;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic) <CSCoverSheetViewControllerProtocol> *coverSheetViewController;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CSNotificationDispatcher> *dispatcher;
@property (nonatomic, readonly, copy) CSPresentation *externalPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, retain) CSLayoutStrategy *layoutStrategy;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly, copy) NSString *pageRole;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long presentationAltitude;
@property (nonatomic, readonly) <UICoordinateSpace> *presentationCoordinateSpace;
@property (nonatomic, readonly) long long presentationPriority;
@property (nonatomic, readonly, copy) NSArray *presentationRegions;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) long long presentationTransition;
@property (nonatomic, readonly) long long presentationType;
@property (nonatomic) <CSCoverSheetViewPresenting> *presenter;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (getter=isShowingMediaControls, nonatomic, readonly) bool showingMediaControls;
@property (readonly) Class superclass;
@property (nonatomic) <CSTouchEnvironmentStatusProviding> *touchEnvironmentStatusProvider;
@property (getter=isTransitioning, nonatomic) bool transitioning;
@property (nonatomic) bool useFakeBlur;
@property (nonatomic, retain) CSUserPresenceMonitor *userPresenceMonitor;
@property (nonatomic) <CSUserSessionControlling> *userSessionController;
@property (nonatomic) <CSWallpaperColorProvider> *wallpaperColorProvider;
@property (nonatomic) <CSWallpaperViewProviding> *wallpaperViewProvider;

+ (double)_phoneListWidth;
+ (bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
+ (Class)viewClass;

- (void).cxx_destruct;
- (void)_addOrRemoveLogoutButtonViewController;
- (void)_addOrRemoveNotificationsListIfNecessaryAnimated:(bool)arg1;
- (void)_addOrRemoveUserPictureViewController;
- (void)_addOrRemoveViewsAsAppropriate;
- (bool)_isPortrait;
- (bool)_listBelowDateTime;
- (id)_mainPageView;
- (bool)_pagingStyleRequiresUserPresenceDetection;
- (void)_updateSmoothestPermittedPagingStrategy;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (id)combinedListViewController;
- (void)combinedListViewController:(id)arg1 hasContent:(bool)arg2;
- (double)customListWidth;
- (double)dateTimeInsetX;
- (unsigned long long)dateTimeLayout;
- (void)dealloc;
- (bool)dismissNotificationInLongLookAnimated:(bool)arg1;
- (id)dispatcher;
- (bool)handleEvent:(id)arg1;
- (id)init;
- (id)initWithAuthenticationProvider:(id)arg1;
- (bool)isNotificationContentExtensionVisible:(id)arg1;
- (bool)isPresentingNotificationInLongLook;
- (bool)isShowingMediaControls;
- (id)layoutStrategy;
- (double)listInsetX;
- (unsigned long long)listLayout;
- (unsigned long long)listWidthStrategy;
- (double)minimumDateToListSpacing;
- (id)notificationSectionSettingsForCombinedListViewController:(id)arg1;
- (void)postNotificationRequest:(id)arg1;
- (void)setDispatcher:(id)arg1;
- (void)setLayoutStrategy:(id)arg1;
- (void)setTouchEnvironmentStatusProvider:(id)arg1;
- (void)setUseFakeBlur:(bool)arg1;
- (void)setUserPresenceMonitor:(id)arg1;
- (void)setUserSessionController:(id)arg1;
- (void)setWallpaperColorProvider:(id)arg1;
- (void)setWallpaperViewProvider:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)touchEnvironmentStatusProvider;
- (void)updateForPresentation:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (bool)useFakeBlur;
- (void)userPresenceDetectedSinceWakeDidChange:(id)arg1;
- (id)userPresenceMonitor;
- (id)userSessionController;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)wallpaperColorProvider;
- (id)wallpaperViewProvider;
- (void)withdrawNotificationRequest:(id)arg1;

@end
