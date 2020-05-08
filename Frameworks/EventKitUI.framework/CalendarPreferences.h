/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarPreferences : NSObject {
    bool  _drawDebugViewColors;
    CalPreferences * _preferences;
}

@property (nonatomic, retain) NSArray *calendarUUIDsExcludedFromNotifications;
@property (nonatomic, retain) NSNumber *dayViewFirstVisibleSecond;
@property (nonatomic, retain) NSNumber *dayViewHourScale;
@property (nonatomic) unsigned long long debugOccurrenceViewIconOverload;
@property (nonatomic, readonly) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) bool disableContinuity;
@property (nonatomic) bool disableTodayPushes;
@property (nonatomic) bool drawDebugViewColors;
@property (nonatomic) bool enableAvatars;
@property (nonatomic) bool enableMultiwindowAsserts;
@property (nonatomic) bool eventAutocompleteEnabled;
@property (nonatomic) bool hideInlineDayViewInEventDetails;
@property (nonatomic) bool highColorCarplayEnabled;
@property (nonatomic) bool immediateAlarmCreation;
@property (nonatomic) bool largeListViewDisclosingEventDetails;
@property (nonatomic, retain) NSNumber *lastSuspendTime;
@property (nonatomic, retain) NSNumber *lastViewMode;
@property (nonatomic, retain) NSNumber *lastViewedDate;
@property (nonatomic, retain) NSNumber *locationSearchResultLimit;
@property (nonatomic, retain) NSString *overlayCalendarID;
@property (nonatomic) unsigned long long promptForCommentWhenDeclining;
@property (nonatomic) bool requestSyncOnApplicationLaunch;
@property (nonatomic, retain) NSString *searchString;
@property (getter=isShortResumeToTodayTimeout, nonatomic) bool shortResumeToTodayTimeout;
@property (nonatomic) bool showDetailedListView;
@property (nonatomic) bool showEventsInPhoneMonthView;
@property (nonatomic) bool showExperimentalUI;
@property (nonatomic) bool showListView;
@property (nonatomic) bool showMonthDividedListView;
@property (nonatomic) bool showWeekNumbers;
@property (nonatomic) bool showWindowDebugButton;
@property (nonatomic, retain) NSDate *simulatedCurrentDate;
@property (nonatomic, retain) NSString *sourceIdentifierForSelectedIdentity;
@property (nonatomic) bool swipeToDeleteEnabled;
@property (nonatomic, retain) NSString *upNextColor;
@property (nonatomic) double upNextDuration;
@property (nonatomic, retain) NSString *upNextLocation;
@property (nonatomic) bool upNextSimpleModeEnabled;
@property (nonatomic, retain) NSDate *upNextStartTime;
@property (nonatomic, retain) NSString *upNextTitle;
@property (nonatomic) bool viewedTimeZoneAutomatic;
@property (nonatomic, retain) NSNumber *weekStart;
@property (nonatomic, retain) NSNumber *weekViewHourScale;
@property (nonatomic) bool weekViewStartsOnToday;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)calendarUUIDsExcludedFromNotifications;
- (id)dayViewFirstVisibleSecond;
- (id)dayViewHourScale;
- (unsigned long long)debugOccurrenceViewIconOverload;
- (id)deselectedCalendarSyncHashes;
- (bool)disableContinuity;
- (bool)disableTodayPushes;
- (bool)drawDebugViewColors;
- (bool)enableAvatars;
- (bool)enableMultiwindowAsserts;
- (bool)eventAutocompleteEnabled;
- (bool)hideInlineDayViewInEventDetails;
- (bool)highColorCarplayEnabled;
- (bool)immediateAlarmCreation;
- (id)init;
- (bool)isShortResumeToTodayTimeout;
- (bool)largeListViewDisclosingEventDetails;
- (id)lastSuspendTime;
- (id)lastViewMode;
- (id)lastViewedDate;
- (id)locationSearchResultLimit;
- (id)overlayCalendarID;
- (unsigned long long)promptForCommentWhenDeclining;
- (bool)requestSyncOnApplicationLaunch;
- (id)searchString;
- (void)setCalendarUUIDsExcludedFromNotifications:(id)arg1;
- (void)setDayViewFirstVisibleSecond:(id)arg1;
- (void)setDayViewHourScale:(id)arg1;
- (void)setDebugOccurrenceViewIconOverload:(unsigned long long)arg1;
- (void)setDisableContinuity:(bool)arg1;
- (void)setDisableTodayPushes:(bool)arg1;
- (void)setDrawDebugViewColors:(bool)arg1;
- (void)setEnableAvatars:(bool)arg1;
- (void)setEnableMultiwindowAsserts:(bool)arg1;
- (void)setEventAutocompleteEnabled:(bool)arg1;
- (void)setHideInlineDayViewInEventDetails:(bool)arg1;
- (void)setHighColorCarplayEnabled:(bool)arg1;
- (void)setImmediateAlarmCreation:(bool)arg1;
- (void)setLargeListViewDisclosingEventDetails:(bool)arg1;
- (void)setLastSuspendTime:(id)arg1;
- (void)setLastViewMode:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setLocationSearchResultLimit:(id)arg1;
- (void)setOverlayCalendarID:(id)arg1;
- (void)setPromptForCommentWhenDeclining:(unsigned long long)arg1;
- (void)setRequestSyncOnApplicationLaunch:(bool)arg1;
- (void)setSearchString:(id)arg1;
- (void)setShortResumeToTodayTimeout:(bool)arg1;
- (void)setShowDetailedListView:(bool)arg1;
- (void)setShowEventsInPhoneMonthView:(bool)arg1;
- (void)setShowExperimentalUI:(bool)arg1;
- (void)setShowListView:(bool)arg1;
- (void)setShowMonthDividedListView:(bool)arg1;
- (void)setShowWeekNumbers:(bool)arg1;
- (void)setShowWindowDebugButton:(bool)arg1;
- (void)setSimulatedCurrentDate:(id)arg1;
- (void)setSourceIdentifierForSelectedIdentity:(id)arg1;
- (void)setSwipeToDeleteEnabled:(bool)arg1;
- (void)setUpNextColor:(id)arg1;
- (void)setUpNextDuration:(double)arg1;
- (void)setUpNextLocation:(id)arg1;
- (void)setUpNextSimpleModeEnabled:(bool)arg1;
- (void)setUpNextStartTime:(id)arg1;
- (void)setUpNextTitle:(id)arg1;
- (void)setViewedTimeZoneAutomatic:(bool)arg1;
- (void)setWeekStart:(id)arg1;
- (void)setWeekViewHourScale:(id)arg1;
- (void)setWeekViewStartsOnToday:(bool)arg1;
- (bool)showDetailedListView;
- (bool)showEventsInPhoneMonthView;
- (bool)showExperimentalUI;
- (bool)showListView;
- (bool)showMonthDividedListView;
- (bool)showWeekNumbers;
- (bool)showWindowDebugButton;
- (id)simulatedCurrentDate;
- (id)sourceIdentifierForSelectedIdentity;
- (bool)swipeToDeleteEnabled;
- (id)upNextColor;
- (double)upNextDuration;
- (id)upNextLocation;
- (bool)upNextSimpleModeEnabled;
- (id)upNextStartTime;
- (id)upNextTitle;
- (bool)viewedTimeZoneAutomatic;
- (id)weekStart;
- (id)weekViewHourScale;
- (bool)weekViewStartsOnToday;

@end
