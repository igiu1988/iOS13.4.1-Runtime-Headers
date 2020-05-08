/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSummaryDateTimeTableViewCell : UITableViewCell {
    UILabel * _dateLabel;
    FIUIDividerView * _dividerView;
    UIFont * _labelFont;
    UIFont * _smallCapFont;
    NSDateFormatter * _timeFormatter;
    UILabel * _timeLabel;
    NSDate * _workoutDate;
}

+ (double)rowHeight;

- (void).cxx_destruct;
- (void)_addSmallCapAttributeToString:(id)arg1 matchingString:(id)arg2;
- (void)_configureAttributedString:(id)arg1;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setDateStringWithDate:(id)arg1;
- (void)setTimeStringWithStartDate:(id)arg1 endDate:(id)arg2;

@end
