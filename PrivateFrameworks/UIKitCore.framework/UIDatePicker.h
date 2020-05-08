/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDatePicker : UIControl <DebugHierarchyObject_Fallback, NSCoding, UIPickerViewScrollTesting> {
    _UIDatePickerDataModel * _data;
    UIView<_UIDatePickerViewComponent> * _pickerView;
    long long  _preferredDatePickerStyle;
    bool  _useCurrentDateDuringDecoding;
}

@property (getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:, nonatomic) bool allowsZeroCountDownDuration;
@property (getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:, nonatomic) bool allowsZeroTimeInterval;
@property (nonatomic, copy) NSCalendar *calendar;
@property (getter=_contentWidth, nonatomic, readonly) double contentWidth;
@property (nonatomic) double countDownDuration;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) long long datePickerMode;
@property (nonatomic, readonly) long long datePickerStyle;
@property (getter=_dateUnderSelectionBar, nonatomic, readonly) NSDate *dateUnderSelectionBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_drawsBackground, setter=_setDrawsBackground:, nonatomic) bool drawsBackground;
@property (readonly) unsigned long long hash;
@property (getter=_highlightColor, setter=_setHighlightColor:, nonatomic, retain) UIColor *highlightColor;
@property (getter=_isTimeIntervalMode, nonatomic, readonly) bool isTimeIntervalMode;
@property (nonatomic, retain) NSLocale *locale;
@property (getter=_magnifierLineColor, setter=_setMagnifierLineColor:, nonatomic, retain) UIColor *magnifierLineColor;
@property (nonatomic, retain) NSDate *maximumDate;
@property (nonatomic, retain) NSDate *minimumDate;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) long long preferredDatePickerStyle;
@property (readonly) Class superclass;
@property (getter=_textColor, setter=_setTextColor:, nonatomic, retain) UIColor *textColor;
@property (getter=_textShadowColor, setter=_setTextShadowColor:, nonatomic, retain) UIColor *textShadowColor;
@property (nonatomic) double timeInterval;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (getter=_useCurrentDateDuringDecoding, setter=_setUseCurrentDateDuringDecoding:, nonatomic) bool useCurrentDateDuringDecoding;
@property (getter=_usesBlackChrome, setter=_setUsesBlackChrome:, nonatomic) bool usesBlackChrome;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_allowsZeroCountDownDuration;
- (bool)_allowsZeroTimeInterval;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (double)_contentWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_dateUnderSelectionBar;
- (bool)_drawsBackground;
- (void)_emitValueChanged;
- (id)_highlightColor;
- (void)_installPickerView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isTimeIntervalMode;
- (id)_labelTextForCalendarUnit:(unsigned long long)arg1;
- (id)_lastSelectedDateComponents;
- (id)_locale;
- (id)_magnifierLineColor;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned long long)arg1;
- (void)_setAllowsZeroCountDownDuration:(bool)arg1;
- (void)_setAllowsZeroTimeInterval:(bool)arg1;
- (void)_setDrawsBackground:(bool)arg1;
- (void)_setHidesLabels:(bool)arg1;
- (void)_setHighlightColor:(id)arg1;
- (void)_setHighlightsToday:(bool)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setMagnifierLineColor:(id)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setTextShadowColor:(id)arg1;
- (void)_setUpInitialValues;
- (void)_setUseCurrentDateDuringDecoding:(bool)arg1;
- (void)_setUsesBlackChrome:(bool)arg1;
- (id)_systemDefaultFocusGroupDescriptor;
- (id)_textColor;
- (id)_textShadowColor;
- (bool)_useCurrentDateDuringDecoding;
- (bool)_usesBlackChrome;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)awakeFromNib;
- (id)calendar;
- (double)countDownDuration;
- (id)date;
- (id)dateComponents;
- (long long)datePickerMode;
- (long long)datePickerStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (int)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (int)minute;
- (long long)minuteInterval;
- (long long)preferredDatePickerStyle;
- (int)second;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCalendar:(id)arg1;
- (void)setCountDownDuration:(double)arg1;
- (void)setDate:(id)arg1;
- (void)setDate:(id)arg1 animate:(bool)arg2;
- (void)setDate:(id)arg1 animated:(bool)arg2;
- (void)setDateComponents:(id)arg1;
- (void)setDatePickerMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightsToday:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(long long)arg1;
- (void)setPreferredDatePickerStyle:(long long)arg1;
- (void)setStaggerTimeIntervals:(bool)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimeZone:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)timeInterval;
- (id)timeZone;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
