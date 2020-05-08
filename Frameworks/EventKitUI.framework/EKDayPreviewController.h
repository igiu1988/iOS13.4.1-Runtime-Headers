/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {
    NSArray * _cachedTimedEvents;
    NSDate * _date;
    EKDayView * _dayView;
    EKEvent * _event;
    bool  _firstshow;
    bool  _hasOverriddenEventDates;
    bool  _hasOverriddenStatus;
    bool  _hidesAllDayEvents;
    UIViewController * _hostingViewController;
    bool  _isAnimating;
    NSDate * _originalEventEndDate;
    NSDate * _originalEventStartDate;
    NSDate * _overriddenEventEndDate;
    NSDate * _overriddenEventStartDate;
    long long  _overriddenParticipantStatus;
    bool  _requireScrollPositionCorrection;
    bool  _respectsSelectedCalendarsFilter;
    UIView * _roundedView;
    unsigned long long  _style;
    bool  _userHasTappedToExpand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesAllDayEvents;
@property (nonatomic) UIViewController *hostingViewController;
@property (nonatomic) long long overriddenParticipantStatus;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool respectsSelectedCalendarsFilter;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic) bool useCustomBackButton;

- (void).cxx_destruct;
- (id)_anchorEvent;
- (id)_dateForFirstHourMarker;
- (double)_dayViewHeight;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_displayedHoursRange;
- (bool)_eventOccursOnThisDay:(id)arg1;
- (id)_eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_hourMaskForEvents:(id)arg1;
- (void)_scrollDayViewToCorrectOffsetAnimated:(bool)arg1;
- (id)_selectedCalendars;
- (void)_setNewVisibleHourLabels;
- (void)_setupAutoLayout;
- (void)_setupDayView;
- (bool)_shouldShowAllVisibleEvents;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (id)event;
- (bool)hidesAllDayEvents;
- (id)hostingViewController;
- (id)initWithDate:(id)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)loadView;
- (long long)overriddenParticipantStatus;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reload;
- (void)reloadWithNewDate:(id)arg1 overriddenEventStartDate:(id)arg2 overriddenEventEndDate:(id)arg3;
- (void)renderPressHighlight:(bool)arg1;
- (bool)respectsSelectedCalendarsFilter;
- (void)setEvent:(id)arg1;
- (void)setHidesAllDayEvents:(bool)arg1;
- (void)setHostingViewController:(id)arg1;
- (void)setOverriddenParticipantStatus:(long long)arg1;
- (void)setRespectsSelectedCalendarsFilter:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleExpandedState;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end