/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSNotificationDispatcher : NSObject <CSNotificationAlertingController, CSNotificationDispatcher, SBNotificationDestination> {
    bool  _active;
    CSBehavior * _activeBehavior;
    SBNCAlertingController * _alertingController;
    <CSCarPlayStatusProviding> * _carPlayStatusProvider;
    <CSNotificationDestination> * _listDestination;
    <CSNotificationDestination> * _modalDestination;
    <NCNotificationDestinationDelegate> * _notificationDestinationDelegate;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) CSBehavior *activeBehavior;
@property (nonatomic) SBNCAlertingController *alertingController;
@property (nonatomic) <CSCarPlayStatusProviding> *carPlayStatusProvider;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationDestinationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) <CSNotificationDestination> *listDestination;
@property (nonatomic) <CSNotificationDestination> *modalDestination;
@property (nonatomic, readonly) long long participantState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearNotificationRequestsFromDashBoard:(id)arg1;
- (id)activeBehavior;
- (id)alertingController;
- (id)alertingControllerForDestination:(id)arg1;
- (bool)canReceiveNotificationRequest:(id)arg1;
- (id)carPlayStatusProvider;
- (id)coverSheetIdentifier;
- (id)delegate;
- (void)destination:(id)arg1 clearNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 clearNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 clearNotificationRequestsFromIncomingSection:(id)arg2;
- (void)destination:(id)arg1 clearNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(bool)arg4 withParameters:(id)arg5 completion:(id /* block */)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)destination:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(id)arg3;
- (id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2;
- (bool)dismissNotificationInLongLookAnimated:(bool)arg1;
- (id)endpoint;
- (id)identifier;
- (bool)interceptsQueueRequest:(id)arg1;
- (bool)isActive;
- (bool)isNotificationContentExtensionVisible:(id)arg1;
- (bool)isPresentingNotificationInLongLook;
- (id)listDestination;
- (id)modalDestination;
- (void)modifyNotificationRequest:(id)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (long long)participantState;
- (void)postNotificationRequest:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setActiveBehavior:(id)arg1;
- (void)setAlertingController:(id)arg1;
- (void)setCarPlayStatusProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListDestination:(id)arg1;
- (void)setModalDestination:(id)arg1;
- (void)stopAllRealerts;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1;

@end