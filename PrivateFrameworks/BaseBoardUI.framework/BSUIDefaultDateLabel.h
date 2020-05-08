/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel> {
    bool  _allDay;
    <BSUIDateLabelDelegate> * _delegate;
    bool  _effectiveAllDay;
    NSDate * _effectiveAllDayEndDate;
    NSDate * _effectiveAllDayLastValidDate;
    NSDate * _effectiveAllDayStartDate;
    bool  _isCoalescingUpdates;
    bool  _isTimestamp;
    long long  _labelType;
    bool  _needsUpdateFromCoalesce;
    NSDate * _timeZoneRelativeEndDate;
    NSDate * _timeZoneRelativeStartDate;
    NSTimer * _updateTimer;
}

@property (getter=isAllDay, nonatomic) bool allDay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BSUIDateLabelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTimestamp;
@property (nonatomic) long long labelType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timeZoneRelativeStartDate;

+ (id)_currentCalendar;

- (void).cxx_destruct;
- (void)_configureTimer;
- (id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(bool)arg3 sameDayDates:(bool)arg4 eventOngoing:(bool)arg5 withCurrentDate:(id)arg6 forStartLabel:(bool)arg7;
- (void)_forceUpdate;
- (void)_invalidateTimer;
- (id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2;
- (void)_resetEffectiveAllDayState:(bool)arg1;
- (void)_resetModelProperties;
- (void)_updateEffectiveAllDayTimes;
- (void)_updateTimerFired:(id)arg1;
- (id)constructLabelString;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isAllDay;
- (bool)isDateWithinEffectiveAllDayRange:(id)arg1;
- (bool)isEffectiveAllDay;
- (bool)isTimestamp;
- (long long)labelType;
- (void)prepareForReuse;
- (void)setAllDay:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setIsTimestamp:(bool)arg1;
- (void)setLabelType:(long long)arg1;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)setTimeZoneRelativeEndDate:(id)arg1;
- (void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2;
- (void)startCoalescingUpdates;
- (void)stopCoalescingUpdates;
- (id)timeZoneRelativeStartDate;
- (void)update;
- (void)updateTextIfNecessary;
- (void)updateTextIfNecessary:(bool)arg1;

@end
