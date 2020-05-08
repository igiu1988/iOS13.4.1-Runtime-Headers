/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNTriggeredEventNotificationSource : NSObject <CALNNotificationSource, CALNTriggeredEventNotificationDataSourceDelegate> {
    <CALNTriggeredEventNotificationBodyDescriptionProvider> * _bodyDescriptionProvider;
    <CALNTriggeredEventNotificationDataSource> * _dataSource;
    <CalDateProvider> * _dateProvider;
    NSMutableDictionary * _eventURLToObjectIDMap;
    <CALNCalendarIconIdentifierProvider> * _iconIdentifierProvider;
    <CALNTriggeredEventNotificationMapItemURLProvider> * _mapItemURLProvider;
    <CALNTriggeredEventNotificationDataStorage> * _notificationDataStorage;
    <CALNNotificationManager> * _notificationManager;
    <CALNSourceEventRepresentationProvider> * _sourceEventRepresentationProvider;
    <CALNTimeToLeaveRefreshStorage> * _timeToLeaveRefreshStorage;
    <CALNTriggeredEventNotificationTransitionProvider> * _transitionProvider;
    <CALNTravelAdvisoryTimelinessAuthority> * _travelAdvisoryTimelinessAuthority;
    <CALNTriggeredEventNotificationTriggerHelper> * _triggerHelper;
    <CALNURLHandler> * _urlHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <CALNTriggeredEventNotificationBodyDescriptionProvider> *bodyDescriptionProvider;
@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) <CALNTriggeredEventNotificationDataSource> *dataSource;
@property (nonatomic, readonly) <CalDateProvider> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *eventURLToObjectIDMap;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CALNCalendarIconIdentifierProvider> *iconIdentifierProvider;
@property (nonatomic, readonly) <CALNTriggeredEventNotificationMapItemURLProvider> *mapItemURLProvider;
@property (nonatomic, readonly) <CALNTriggeredEventNotificationDataStorage> *notificationDataStorage;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly) <CALNSourceEventRepresentationProvider> *sourceEventRepresentationProvider;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CALNTimeToLeaveRefreshStorage> *timeToLeaveRefreshStorage;
@property (nonatomic, readonly) <CALNTriggeredEventNotificationTransitionProvider> *transitionProvider;
@property (nonatomic, readonly) <CALNTravelAdvisoryTimelinessAuthority> *travelAdvisoryTimelinessAuthority;
@property (nonatomic, readonly) <CALNTriggeredEventNotificationTriggerHelper> *triggerHelper;
@property (nonatomic, readonly) <CALNURLHandler> *urlHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_conferenceURLForNotification:(id)arg1;
+ (id)_mapItemURLForNotification:(id)arg1;
+ (id)conferenceCallActionIdentifier;
+ (id)conferenceURLUserInfoKey;
+ (id)directionsActionIdentifier;
+ (id)mailOrganizerActionIdentifier;
+ (id)mapItemURLUserInfoKey;
+ (id)snoozeActionIdentifier;

- (void).cxx_destruct;
- (void)_addEventURL:(id)arg1 mappingToEventObjectID:(id)arg2;
- (void)_addNotificationData:(id)arg1 forSourceClientIdentifier:(id)arg2;
- (void)_addNotificationDataForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 transition:(unsigned long long)arg4 now:(id)arg5;
- (void)_addRecord:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 trigger:(unsigned long long)arg4 transition:(unsigned long long)arg5 now:(id)arg6;
- (unsigned long long)_calnTravelAdvisoryTimelinessPeriodFromEKTravelAvisoryTimelinessPeriod:(unsigned long long)arg1;
- (void)_clearTravelAdvisoryFromNotificationMetaDataForSourceClientIdentifier:(id)arg1;
- (void)_clearTravelAdvisoryHypotheses;
- (id)_contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (id)_contentForNotificationWithSourceClientIdentifier:(id)arg1 shouldClearHypothesis:(bool)arg2;
- (void)_didReceiveResponse:(id)arg1;
- (id)_eventRepresentationDictionaryWithSourceNotificationInfo:(id)arg1 hypothesisMessage:(id)arg2;
- (id)_existingNotificationDataMatchingEventForSourceClientIdentifier:(id)arg1;
- (id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg1;
- (id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg1 existingRecords:(id)arg2;
- (void)_handleConferenceCallActionWithResponse:(id)arg1;
- (void)_handleDirectionsActionWithResponse:(id)arg1;
- (void)_handleMailOrganizerActionWithResponse:(id)arg1;
- (bool)_isNotificationMetaDataExpired:(id)arg1 eventID:(id)arg2;
- (bool)_itemWithEventID:(id)arg1 affectedByChangesToObjects:(id)arg2;
- (id)_launchURLForResponse:(id)arg1;
- (bool)_mayCeaseRouteMonitoringForExistingNotificationData:(id)arg1;
- (void)_notificationAddedWithSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 trigger:(unsigned long long)arg3;
- (id)_notificationDataForSourceNotificationInfo:(id)arg1 existingNotificationData:(id)arg2 transition:(unsigned long long)arg3 now:(id)arg4;
- (id)_notificationResponseDataForRecord:(id)arg1;
- (id)_notificationResponseDataForSourceNotificationInfo:(id)arg1;
- (bool)_notificationWithSourceClientIdentifier:(id)arg1 affectedByChangesToObjects:(id)arg2;
- (void)_refreshNotification:(id)arg1;
- (void)_refreshNotificationMetaData:(id)arg1 eventID:(id)arg2;
- (void)_refreshNotificationMetaDataWithObjectIDs:(id)arg1;
- (void)_refreshNotificationRecordsWithObjectIDs:(id)arg1;
- (void)_refreshNotifications:(id)arg1;
- (void)_refreshTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;
- (void)_refreshTimeToLeaveRefreshTimersWithObjectIDs:(id)arg1;
- (void)_removeStoredNotificationDataForEventWithEventID:(id)arg1;
- (void)_resetStoredNotificationDataTimeToLeaveDisplayStateForSourceClientIdentifier:(id)arg1;
- (id)_resolvedSourceClientIdentifierForNewSourceClientIdentifier:(id)arg1 oldSourceClientIdentifier:(id)arg2;
- (void)_setNotificationResponseData:(id)arg1 onNotificationContent:(id)arg2;
- (bool)_shouldCeaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1;
- (bool)_shouldRemoveNotificationMetaData:(id)arg1 eventID:(id)arg2;
- (bool)_shouldRemoveStoredNotificationDataGivenShouldWithdrawNotification:(bool)arg1 hasExistingTravelInformation:(bool)arg2 mayCeaseRouteMonitoring:(bool)arg3;
- (bool)_shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;
- (bool)_shouldUpdateStoredNotificationDataGivenTransition:(unsigned long long)arg1;
- (bool)_sourceClientIdentifier:(id)arg1 matchesEventForSourceClientIdentifier:(id)arg2;
- (id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg1 notificationInfo:(id)arg2 existingNotificationData:(id)arg3 hypothesis:(id)arg4 shouldClearHypothesis:(bool)arg5 isOffsetFromTravelTimeStart:(bool)arg6 isForContentCreation:(bool)arg7;
- (id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg1 shouldClearHypothesis:(bool)arg2 isForContentCreation:(bool)arg3;
- (void)_travelAdvisoryAuthorizationChanged:(bool)arg1;
- (unsigned long long)_travelAdvisoryTimelinessPeriodForHypothesis:(id)arg1;
- (void)_travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg1;
- (void)_triggeredWithSourceClientIdentifier:(id)arg1 triggerData:(id)arg2;
- (void)_updateNotification:(id)arg1 shouldClearHypothesis:(bool)arg2;
- (void)_updateStoredNotificationDataForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 transition:(unsigned long long)arg4 now:(id)arg5;
- (void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1;
- (void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 allowsLocationAlerts:(bool)arg3;
- (id)_updatedLastFireTimeOfAlertOffsetFromTravelTimeGivenIsOffsetFromTravelTime:(bool)arg1;
- (id)_updatedNotificationDataResettingTimeToLeaveDisplayState:(id)arg1;
- (id)_updatedSourceNotificationInfoForContentCreation:(id)arg1;
- (id)bodyDescriptionProvider;
- (id)categories;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (id)contentForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 isProtectedDataAvailable:(bool)arg3;
- (id)dataSource;
- (void)dataSource:(id)arg1 travelAdvisoryAuthorizationChanged:(bool)arg2;
- (void)dataSource:(id)arg1 travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg2;
- (void)dataSource:(id)arg1 triggeredWithSourceClientIdentifier:(id)arg2 triggerData:(id)arg3;
- (id)dateProvider;
- (void)didReceiveResponse:(id)arg1;
- (id)eventURLToObjectIDMap;
- (id)iconIdentifierProvider;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4 triggerHelper:(id)arg5 transitionProvider:(id)arg6 bodyDescriptionProvider:(id)arg7 travelAdvisoryTimelinessAuthority:(id)arg8 dateProvider:(id)arg9 notificationDataStorage:(id)arg10 urlHandler:(id)arg11 mapItemURLProvider:(id)arg12 timeToLeaveRefreshStorage:(id)arg13;
- (id)mapItemURLProvider;
- (id)notificationDataStorage;
- (id)notificationManager;
- (void)refreshNotifications:(id)arg1;
- (bool)sourceClientIdentifier:(id)arg1 matchesEventForSourceClientIdentifier:(id)arg2;
- (id)sourceEventRepresentationProvider;
- (id)sourceIdentifier;
- (id)timeToLeaveRefreshStorage;
- (id)transitionProvider;
- (id)travelAdvisoryTimelinessAuthority;
- (id)triggerHelper;
- (id)urlHandler;
- (id)workQueue;

@end
