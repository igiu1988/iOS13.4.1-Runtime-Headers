/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSimpleDataEntryDateItem : HKSimpleDataEntryItem {
    HKSimpleDataEntryPlainTextCell * _cell;
    NSDate * _date;
    UIDatePicker * _datePicker;
    HKValueRange * _dateRange;
    NSDate * _defaultDate;
    NSDateFormatter * _exportFormatter;
    NSString * _registrantModelKey;
    NSString * _title;
}

+ (id)_dateFormatter;
+ (id)gregorianGMTCalendar;

- (void).cxx_destruct;
- (void)_setTextForInputTextField:(id)arg1;
- (void)beginEditing;
- (id)cell;
- (void)datePickerValueChanged:(id)arg1;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6;
- (void)localeDidChange:(id)arg1;
- (void)updateCellDisplay;

@end
