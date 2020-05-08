/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {
    UIImageView * _accessoryImageView;
    UIImageView * _angleStripeBackgroundView;
    bool  _areCurrentCellConstraintsForLargeText;
    EKUIOccurrenceTableViewCellLabel * _bottomTimeLabel;
    NSString * _bottomTimeString;
    NSDictionary * _bottomTimeStringDrawingAttributes;
    bool  _cancelled;
    bool  _carplayMode;
    ColorBarView * _colorBarView;
    ColoredBackgroundView * _coloredBackgroundView;
    NSLayoutConstraint * _contentBottom_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint * _contentTop_to_colorBarTop_Constraint;
    NSLayoutConstraint * _contentTop_to_primaryTextBaseline_Constraint;
    NSLayoutConstraint * _contentTop_to_travelTextBaseline_Constraint;
    EKUIOccurrenceTableViewCellLabel * _countdownLabel;
    NSLayoutConstraint * _countdownLabelBaseling_to_contentBottom_Constraint;
    NSLayoutConstraint * _countdownLabelRightMarginConstraint;
    NSString * _countdownLabelString;
    NSObject<OS_dispatch_source> * _countdownLabelUpdateTimer;
    bool  _declined;
    bool  _doesNotUseTemplate;
    NSArray * _ekUIOccurrenceTableViewCellConstraints;
    UIColor * _eventCalendarColor;
    EKCalendarDate * _eventEndDate;
    NSString * _eventLocation;
    EKCalendarDate * _eventStartDate;
    NSDate * _eventStartDateIncludingTravelTime;
    NSString * _eventTitle;
    NSLayoutConstraint * _horizontalDividerBarBottom_to_colorBarTop_Constraint;
    bool  _includesTopTimeLabel;
    bool  _invitationTemplate;
    bool  _isAllDay;
    bool  _isBirthday;
    bool  _isFakeInvitation;
    bool  _isPast;
    bool  _isRecurring;
    bool  _isTemplateCell;
    bool  _needsReply;
    bool  _opaque;
    EKUIOccurrenceTableViewCellLabel * _primaryLabel;
    NSLayoutConstraint * _primaryTextBaseline_to_secondaryTextBaseline_Constraint;
    UIVisualEffect * _primaryVisualEffect;
    NSMutableArray * _primaryVisualEffectViews;
    EKUIOccurrenceTableViewCellLabel * _secondaryLabel;
    bool  _secondaryLabelShouldShowAlertDot;
    NSDictionary * _secondaryStringDrawingAttributes;
    UIVisualEffect * _secondaryVisualEffect;
    NSMutableArray * _secondaryVisualEffectViews;
    UIColor * _selectedBackGroundColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeWhenLayerLastCalculated;
    bool  _tentative;
    NSLayoutConstraint * _timeTextLeftMarginConstraint;
    NSLayoutConstraint * _timeTextRightMarginConstraint;
    NSLayoutConstraint * _timeTextWidthConstraint;
    EKUIOccurrenceTableViewCellLabel * _topTimeLabel;
    NSString * _topTimeString;
    NSDictionary * _topTimeStringDrawingAttributes;
    NSString * _travelAddressString;
    NSDictionary * _travelAddressStringDrawingAttributes;
    EKUIOccurrenceTableViewCellLabel * _travelDepartureTimeLabel;
    NSString * _travelDepartureTimeString;
    NSDictionary * _travelDepartureTimeStringDrawingAttributes;
    NSLayoutConstraint * _travelTextBaseline_to_primaryTextBaseLine_Constraint;
    EKUIOccurrenceTableViewCellLabel * _travelTextLabel;
    NSString * _travelTextLabelString;
    NSDictionary * _travelTextLabelStringDrawingAttributes;
    double  _travelTime;
    ColorBarView * _travelTimeColorBarView;
    bool  _travelTimeTemplate;
}

@property (nonatomic) bool doesNotUseTemplate;
@property (nonatomic, retain) UIColor *eventCalendarColor;
@property (nonatomic, readonly) EKCalendarDate *eventStartDate;
@property (nonatomic) bool isFakeInvitation;
@property (nonatomic) bool isTemplateCell;
@property (nonatomic, retain) UIVisualEffect *primaryVisualEffect;
@property (nonatomic, retain) UIVisualEffect *secondaryVisualEffect;

+ (id)_allDayLocalizedString;
+ (void)_clearCaches;
+ (id)_needsReplyAngledStripeBackground:(id)arg1;
+ (id)_nowLocalizedString;
+ (double)_rightImageSpacing;
+ (id)_tentativeAngledStripeBackground:(id)arg1;
+ (id)allReuseIdentifiers;
+ (id)cancelledDeclinedColorBarColor;
+ (double)cellHeightForWidth:(double)arg1;
+ (id)color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3;
+ (void)initialize;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)needsReplyStripeColor;
+ (id)normalBackgroundColor;
+ (bool)requiresConstraintBasedLayout;
+ (id)reuseIdentifierForEvent:(id)arg1;
+ (id)reuseIdentifierForTemplate;
+ (id)reuseIdentifierForTemplateInvitation;
+ (id)reuseIdentifierForTemplateWithTravelTime;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (bool)vibrant;

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 forVibrancy:(bool)arg2 usingPrimaryEffect:(bool)arg3;
- (void)_addVibrantSubview:(id)arg1 usingPrimaryEffect:(bool)arg2;
- (id)_birthdayIcon;
- (void)_countdownTimerFired;
- (id)_createParentVisualEffectViewWithVisualEffect:(id)arg1;
- (void)_createViewsForReuseIdentifier:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)_eventIsNow;
- (void)_installCountdownTimerWithFireDate:(id)arg1;
- (double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1;
- (id)_needsReplyDot;
- (void)_resetCountdownTimerBasedOnCurrentDateForStringGeneration:(id)arg1;
- (double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1;
- (id)_selectedBackgroundViewWithColor:(id)arg1;
- (void)_setUpConstraints;
- (id)_setUpLargeTextConstraints;
- (id)_setUpStandardConstraints;
- (id)_sharedNumberFormatter;
- (id)_textForBottomTimeLabel;
- (id)_textForCountdownLabelWithCurrentDate:(id)arg1;
- (id)_textForDepartureTimeLabel;
- (id)_textForTopTimeLabel;
- (void)_uninstallCountdownTimer;
- (void)_updateAccessoryImage;
- (void)_updateBottomTimeLabel;
- (void)_updateColorBarColor;
- (void)_updateColoredBackgroundViewColor;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)_updateCountdownLabel;
- (void)_updateNumberOfLinesForLabel:(id)arg1 isRightAlignedInStandardLayout:(bool)arg2;
- (void)_updatePrimaryTextLabel;
- (void)_updateSecondaryTextLabel;
- (void)_updateTopTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateTravelTimeLabel;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (double)_verticalSpacingPrimaryLabelToTimeLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (double)_verticalSpacingTopToTopForNonPrimaryLabel;
- (double)_widthForTimeViews;
- (id)accessoryImage;
- (id)birthdayIconColor;
- (id)cancelledDeclinedColorBarColor;
- (id)colorBarColor;
- (id)coloredBackgroundViewColor;
- (id)coloredBackgroundViewFilter;
- (id)coloredBackgroundViewFilterColor;
- (void)contentCategorySizeChanged;
- (void)dealloc;
- (id)detailTextLabel;
- (bool)doesNotUseTemplate;
- (id)eventCalendarColor;
- (id)eventStartDate;
- (void)forceUpdateOfAllElements;
- (void)hideUnwantedItemsInCarplayMode;
- (id)imageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)invitationPrimaryTextColor;
- (bool)isAllDay;
- (bool)isBirthday;
- (bool)isCancelled;
- (bool)isDeclined;
- (bool)isFakeInvitation;
- (bool)isPast;
- (bool)isTemplateCell;
- (bool)isTentative;
- (void)layoutSubviews;
- (bool)needsReply;
- (id)needsReplyAngledStripeBackground;
- (double)needsReplyStripeBackgroundAlpha;
- (id)needsReplyStripeColor;
- (id)normalBackgroundColor;
- (id)prefixTextColor;
- (id)primaryPastTextColor;
- (id)primaryStrikethroughTextColor;
- (id)primaryTextColor;
- (id)primaryVisualEffect;
- (id)reuseIdentifier;
- (id)secondaryPastTextColor;
- (id)secondaryStrikethroughTextColor;
- (id)secondaryTextColor;
- (id)secondaryVisualEffect;
- (void)setCalendarColor:(id)arg1;
- (void)setColorBarLayerFilter:(id)arg1;
- (void)setDoesNotUseTemplate:(bool)arg1;
- (void)setEventCalendarColor:(id)arg1;
- (void)setIsFakeInvitation:(bool)arg1;
- (void)setIsTemplateCell:(bool)arg1;
- (void)setPrimaryVisualEffect:(id)arg1;
- (void)setSecondaryVisualEffect:(id)arg1;
- (id)tentativeAngledStripeBackground;
- (double)tentativeStripeBackgroundAlpha;
- (id)tentativeStripeColor;
- (id)textLabel;
- (id)topTimeColor;
- (void)updateAngleBackgroundColor;
- (void)updateConstraints;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(bool)arg4 drawsDimmedForPast:(bool)arg5;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(bool)arg4 drawsDimmedForPast:(bool)arg5 includingTravelTime:(bool)arg6;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(bool)arg4 drawsDimmedForPast:(bool)arg5 includingTravelTime:(bool)arg6 includingCountdown:(bool)arg7;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(bool)arg4 drawsDimmedForPast:(bool)arg5 includingTravelTime:(bool)arg6 includingCountdown:(bool)arg7 includingTopTimeLabel:(bool)arg8 carplayMode:(bool)arg9;

@end
