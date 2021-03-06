/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDActivityTodayWidgetTableViewCell : UITableViewCell <HKDateCacheObserver, WDDashboardCellForceTouchDelegate, _HKWheelchairUseCharacteristicCacheObserver> {
    HKActivityTodayWidgetView * _activityTodayWidgetView;
    HKGradientView * _backgroundGradientView;
    HKActivitySummary * _currentActivitySummary;
    NSDateComponents * _currentDateComponents;
    HKDateCache * _dateCache;
    UILabel * _dateLabel;
    HKHealthStore * _healthStore;
    bool  _isWheelchairUser;
    unsigned long long  _marginMode;
    WDProfile * _profile;
    UILabel * _titleLabel;
    UIView * _titleSeparatorView;
    _HKWheelchairUseCharacteristicCache * _wheelchairUseCharacteristicCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long marginMode;
@property (readonly) Class superclass;

+ (double)preferredCellHeight;

- (void).cxx_destruct;
- (id)_activeEnergyUnit;
- (id)_basalEnergyUnit;
- (void)_setIsWheelchairUser:(bool)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateActivitySummaryAnimated:(bool)arg1;
- (void)_updateDateLabel;
- (void)_updateTimeBasedUI;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })forceTouchFrame;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 profile:(id)arg3;
- (void)layoutSubviews;
- (unsigned long long)marginMode;
- (void)setActivitySummary:(id)arg1 animated:(bool)arg2;
- (void)setMarginMode:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(bool)arg2;

@end
