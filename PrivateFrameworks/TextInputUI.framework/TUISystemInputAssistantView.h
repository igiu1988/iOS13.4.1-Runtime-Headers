/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUISystemInputAssistantView : UIView <TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate> {
    UIKBVisualEffectView * _backdropView;
    bool  _backgroundVisible;
    bool  _buttonBarItemsExpanded;
    TUISystemInputAssistantPageView * _centerPageView;
    UIView * _centerView;
    bool  _centerViewHidden;
    double  _centerViewWidth;
    TUISystemInputAssistantLayoutStandard * _defaultLayout;
    <TUISystemInputAssistantViewDelegate> * _delegate;
    bool  _hidesExpandableButton;
    UITextInputAssistantItem * _inputAssistantItem;
    TUISystemInputAssistantLayout * _layout;
    TUIAssistantButtonBarView * _leftButtonBar;
    bool  _needsValidation;
    int  _needsValidationGuard;
    UIKBRenderConfig * _renderConfig;
    TUIAssistantButtonBarView * _rightButtonBar;
    bool  _showsButtonBarItemsInline;
    bool  _showsExpandableButtonBarItems;
    UITextInputAssistantItem * _systemInputAssistantItem;
    TUIAssistantButtonBarView * _unifiedButtonBar;
}

@property (nonatomic, retain) UIKBVisualEffectView *backdropView;
@property (nonatomic) bool backgroundVisible;
@property (nonatomic, readonly) TUICandidateView *candidateView;
@property (nonatomic, retain) TUISystemInputAssistantPageView *centerPageView;
@property (nonatomic, retain) UIView *centerView;
@property (nonatomic) bool centerViewHidden;
@property (nonatomic) double centerViewWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) TUISystemInputAssistantLayoutStandard *defaultLayout;
@property (nonatomic) <TUISystemInputAssistantViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesExpandableButton;
@property (nonatomic, retain) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, retain) TUISystemInputAssistantLayout *layout;
@property (nonatomic, retain) TUIAssistantButtonBarView *leftButtonBar;
@property (nonatomic, readonly) TUIPredictionView *predictionView;
@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic, retain) TUIAssistantButtonBarView *rightButtonBar;
@property (nonatomic) bool showsButtonBarItemsInline;
@property (nonatomic) bool showsExpandableButtonBarItems;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextInputAssistantItem *systemInputAssistantItem;
@property (nonatomic, retain) TUIAssistantButtonBarView *unifiedButtonBar;

- (void).cxx_destruct;
- (bool)_areButtonBarItemsVisible;
- (id)_createUnifiedButtonBarIfNecessary;
- (id)_currentLayoutViewSet;
- (void)_didTapExpandButton:(id)arg1;
- (void)_exchangeCenterViewIfNecessaryForCompatibility;
- (id)_hostedCenterView;
- (void)_setButtonBarItemsExpanded:(bool)arg1 animationType:(unsigned long long)arg2;
- (void)_setRenderConfig:(id)arg1;
- (bool)_shouldHostCenterViewOutsidePageView;
- (bool)_swiftPlaygroundsWorkaroundEnabled;
- (void)_updateBarButtonGroups;
- (void)_updateExpandableButtonBarItems;
- (void)_updateVisualProvider;
- (void)assistantButtonBarView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromButton:(id)arg3;
- (void)assistantPageView:(id)arg1 didSwitchToSecondaryViewVisible:(bool)arg2;
- (id)backdropView;
- (bool)backgroundVisible;
- (id)candidateView;
- (id)centerPageView;
- (id)centerView;
- (bool)centerViewHidden;
- (double)centerViewWidth;
- (id)defaultLayout;
- (id)delegate;
- (bool)hidesExpandableButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAssistantItem;
- (id)layout;
- (void)layoutSubviews;
- (id)leftButtonBar;
- (id)predictionView;
- (id)renderConfig;
- (id)rightButtonBar;
- (void)setBackdropView:(id)arg1;
- (void)setBackgroundVisible:(bool)arg1;
- (void)setButtonBarItemsExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setCenterPageView:(id)arg1;
- (void)setCenterView:(id)arg1;
- (void)setCenterViewHidden:(bool)arg1;
- (void)setCenterViewWidth:(double)arg1;
- (void)setDefaultLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidesExpandableButton:(bool)arg1;
- (void)setInputAssistantItem:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLeftButtonBar:(id)arg1;
- (void)setNeedsValidation;
- (void)setRenderConfig:(id)arg1;
- (void)setRightButtonBar:(id)arg1;
- (void)setShowsButtonBarItemsInline:(bool)arg1;
- (void)setShowsExpandableButtonBarItems:(bool)arg1;
- (void)setSystemInputAssistantItem:(id)arg1;
- (void)setUnifiedButtonBar:(id)arg1;
- (bool)showsButtonBarItemsInline;
- (bool)showsExpandableButtonBarItems;
- (id)systemInputAssistantItem;
- (id)unifiedButtonBar;
- (void)validateIfNeeded;

@end
