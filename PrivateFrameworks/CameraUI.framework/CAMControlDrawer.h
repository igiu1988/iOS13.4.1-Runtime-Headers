/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMControlDrawer : UIView <CAMAccessibilityHUDItemProvider, CAMBarsAccessibilityHUDManagerGestureProvider, CAMControlDrawerMenuButtonDelegate, UIScrollViewDelegate> {
    NSMutableDictionary * __controlMap;
    CAMControlDrawerButton<CAMControlDrawerExpandableButton> * __expandedControl;
    UIScrollView * __scrollView;
    CEKApertureSlider * _apertureSlider;
    NSString * _contentSize;
    <CAMControlDrawerDelegate> * _delegate;
    CEKWheelScrubberView * _filterScrubberView;
    CEKSlider * _intensitySlider;
    long long  _layoutStyle;
    CAMLowLightSlider * _lowLightSlider;
    long long  _orientation;
    <CAMControlDrawerPresentationDelegate> * _presentationDelegate;
    NSArray * _visibleControlTypes;
}

@property (nonatomic, readonly) NSMutableDictionary *_controlMap;
@property (setter=_setExpandedControl:, nonatomic, retain) CAMControlDrawerButton<CAMControlDrawerExpandableButton> *_expandedControl;
@property (nonatomic, readonly) UIScrollView *_scrollView;
@property (nonatomic, readonly) CAMDrawerApertureButton *apertureButton;
@property (nonatomic, readonly) CEKApertureSlider *apertureSlider;
@property (getter=isApertureSliderVisible, nonatomic) bool apertureSliderVisible;
@property (nonatomic, readonly) CAMDrawerAspectRatioButton *aspectRatioButton;
@property (nonatomic, retain) NSString *contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMControlDrawerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CAMDrawerFilterButton *filterButton;
@property (nonatomic, readonly) CEKWheelScrubberView *filterScrubberView;
@property (getter=isFilterScrubberVisible, nonatomic, readonly) bool filterScrubberVisible;
@property (nonatomic, readonly) CAMDrawerFlashButton *flashButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAMDrawerHDRButton *hdrButton;
@property (nonatomic, readonly) CAMDrawerIntensityButton *intensityButton;
@property (nonatomic, readonly) CEKSlider *intensitySlider;
@property (getter=isIntensitySliderVisible, nonatomic) bool intensitySliderVisible;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) CAMDrawerLivePhotoButton *livePhotoButton;
@property (nonatomic, readonly) CAMDrawerLowLightButton *lowLightButton;
@property (nonatomic, readonly) CAMLowLightSlider *lowLightSlider;
@property (getter=isLowLightSliderVisible, nonatomic) bool lowLightSliderVisible;
@property (nonatomic) long long orientation;
@property (nonatomic) <CAMControlDrawerPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAMDrawerTimerButton *timerButton;
@property (nonatomic, retain) NSArray *visibleControlTypes;

- (void).cxx_destruct;
- (void)_commonInitializationWithLayoutStyle:(long long)arg1;
- (double)_controlCenterSpacingForControlCount:(unsigned long long)arg1;
- (id)_controlMap;
- (id)_createControlForType:(long long)arg1;
- (void)_ensureVisibleControls;
- (id)_expandedControl;
- (void)_handleControlReleased:(id)arg1;
- (void)_handleControlValueChanged:(id)arg1;
- (void)_installControlIfNeededForType:(long long)arg1;
- (void)_iterateViewsForHUDManager:(id)arg1 withItemFoundBlock:(id /* block */)arg2;
- (void)_layoutApertureSlider;
- (void)_layoutCustomControlsAnimated:(bool)arg1;
- (void)_layoutFilterScrubberView;
- (void)_layoutFullWidthCustomView:(id)arg1 forAssociatedControl:(id)arg2 expanded:(bool)arg3;
- (void)_layoutFullWidthCustomView:(id)arg1 withAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forAssociatedControl:(id)arg3 expanded:(bool)arg4;
- (void)_layoutIntensitySlider;
- (void)_layoutLowLightSlider;
- (void)_layoutVisibleControlForType:(long long)arg1 visibleControlTypes:(id)arg2;
- (void)_loadApertureSliderIfNeeded;
- (void)_loadControlIfNeededForType:(long long)arg1;
- (void)_loadCustomUIIfNeededForControlType:(long long)arg1;
- (void)_loadFilterScrubberIfNeeded;
- (void)_loadIntensitySliderIfNeeded;
- (void)_loadLowLightSliderIfNeeded;
- (id)_scrollView;
- (struct CGSize { double x1; double x2; })_scrollingContentSizeForControlCount:(unsigned long long)arg1;
- (struct { double x1; double x2; })_scrubberGradientEdgeInsets;
- (void)_setExpandedControl:(id)arg1;
- (void)_setExpandedControl:(id)arg1 animated:(bool)arg2;
- (unsigned long long)_sliderFontStyle;
- (void)_updateControlsScaleAnimated:(bool)arg1;
- (void)_updateControlsVisibilityAnimated:(bool)arg1;
- (void)_updateExpansionInsetsForExpandableButton:(id)arg1;
- (double)_viewportLength;
- (unsigned long long)_viewportMaximumControlCount;
- (id)apertureButton;
- (id)apertureSlider;
- (id)aspectRatioButton;
- (void)collapseExpandableButtonsAnimated:(bool)arg1;
- (id)contentSize;
- (id)delegate;
- (void)expandControlForType:(long long)arg1 animated:(bool)arg2;
- (void)expandableButton:(id)arg1 willChangeExpanded:(bool)arg2;
- (id)filterButton;
- (id)filterScrubberView;
- (id)flashButton;
- (id)hdrButton;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (id)intensityButton;
- (id)intensitySlider;
- (bool)isApertureSliderVisible;
- (bool)isControlExpandedForType:(long long)arg1;
- (bool)isFilterScrubberVisible;
- (bool)isIntensitySliderVisible;
- (bool)isLowLightSliderVisible;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (id)livePhotoButton;
- (id)lowLightButton;
- (id)lowLightSlider;
- (void)menuButtonDidSelectItem:(id)arg1;
- (long long)orientation;
- (id)presentationDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setApertureSliderVisible:(bool)arg1;
- (void)setApertureSliderVisible:(bool)arg1 animated:(bool)arg2;
- (void)setContentSize:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilterScrubberVisible:(bool)arg1 animated:(bool)arg2;
- (void)setIntensitySliderVisible:(bool)arg1;
- (void)setIntensitySliderVisible:(bool)arg1 animated:(bool)arg2;
- (void)setLayoutStyle:(long long)arg1;
- (void)setLowLightSliderVisible:(bool)arg1;
- (void)setLowLightSliderVisible:(bool)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setPresentationDelegate:(id)arg1;
- (void)setVisibleControlTypes:(id)arg1;
- (void)setVisibleControlTypes:(id)arg1 animated:(bool)arg2;
- (bool)shouldAccessibilityGestureBeginForHUDManager:(id)arg1;
- (id)timerButton;
- (id)touchingRecognizersToCancel;
- (id)visibleControlTypes;

@end
