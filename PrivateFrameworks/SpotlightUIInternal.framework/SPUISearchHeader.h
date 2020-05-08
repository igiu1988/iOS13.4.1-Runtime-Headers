/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

@interface SPUISearchHeader : UIView <SearchUITextFieldDelegate, UITextPasteDelegate> {
    long long  _activeInterfaceOrientation;
    double  _blurProgress;
    NSLayoutConstraint * _bottomConstraint;
    UIButton * _cancelButton;
    NSLayoutConstraint * _cancelButtonTrailingConstraint;
    <SPUISearchHeaderDelegate> * _delegate;
    <SPUIHeaderInteractionDelegate> * _interactionDelegate;
    _UILegibilitySettings * _legibilitySettings;
    bool  _offersCompletions;
    SPSearchEntity * _searchEntity;
    SPUITextField * _searchField;
    NSLayoutConstraint * _searchFieldTrailingConstraint;
    bool  _searchTextScheduledForProcessing;
    unsigned long long  _suggestionID;
    NSLayoutConstraint * _topConstraint;
    NSLayoutConstraint * _widthConstraint;
    bool  _willClear;
}

@property (nonatomic) long long activeInterfaceOrientation;
@property (nonatomic) double blurProgress;
@property (retain) NSLayoutConstraint *bottomConstraint;
@property (retain) UIButton *cancelButton;
@property (retain) NSLayoutConstraint *cancelButtonTrailingConstraint;
@property (nonatomic, readonly) NSString *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property <SPUISearchHeaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SPUIHeaderInteractionDelegate> *interactionDelegate;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property bool offersCompletions;
@property (nonatomic, retain) SPSearchEntity *searchEntity;
@property (retain) SPUITextField *searchField;
@property (retain) NSLayoutConstraint *searchFieldTrailingConstraint;
@property bool searchTextScheduledForProcessing;
@property unsigned long long suggestionID;
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *topConstraint;
@property (nonatomic) bool useInPlaceFilteredBlur;
@property (retain) NSLayoutConstraint *widthConstraint;
@property bool willClear;

+ (id)tokenFromSearchEntity:(id)arg1;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)_searchTextField:(id)arg1 itemProviderForCopyingToken:(id)arg2;
- (void)_searchWithSearchEntity:(id)arg1 fromSuggestion:(bool)arg2;
- (void)_updateClearButtonVisibility;
- (long long)activeInterfaceOrientation;
- (void)addInputMethodInformationToQueryContext:(id)arg1;
- (id)backdropVisualEffectView;
- (void)beginDictation;
- (double)blurProgress;
- (id)bottomConstraint;
- (double)bottomPadding;
- (id)cancelButton;
- (void)cancelButtonClicked:(id)arg1;
- (bool)cancelButtonIsVisible;
- (id)cancelButtonTrailingConstraint;
- (void)clearSearchFieldWhyQuery:(unsigned long long)arg1 allowZKW:(bool)arg2;
- (id)currentQuery;
- (id)currentQueryContextWithString:(id)arg1;
- (id)delegate;
- (void)dictationButtonPressed;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)enableDictationIfRequired;
- (void)escapeKeyPressed;
- (void)focusSearchField;
- (void)focusSearchFieldAndBeginDictation:(bool)arg1;
- (id)init;
- (id)interactionDelegate;
- (bool)isFirstResponder;
- (bool)isOnDarkBackground;
- (id)legibilitySettings;
- (bool)offersCompletions;
- (void)performActionAfterCommit:(id /* block */)arg1;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(unsigned long long)arg3;
- (void)returnKeyPressed;
- (id)searchEntity;
- (id)searchField;
- (id)searchFieldTrailingConstraint;
- (void)searchForSuggestion:(id)arg1;
- (bool)searchTextScheduledForProcessing;
- (void)setActiveInterfaceOrientation:(long long)arg1;
- (void)setBlurProgress:(double)arg1;
- (void)setBottomConstraint:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonTrailingConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOffersCompletions:(bool)arg1;
- (void)setSearchEntity:(id)arg1;
- (void)setSearchEntity:(id)arg1 fromSuggestion:(bool)arg2;
- (void)setSearchField:(id)arg1;
- (void)setSearchFieldTrailingConstraint:(id)arg1;
- (void)setSearchTextScheduledForProcessing:(bool)arg1;
- (void)setSuggestionID:(unsigned long long)arg1;
- (void)setTopConstraint:(id)arg1;
- (void)setUseInPlaceFilteredBlur:(bool)arg1;
- (void)setWidthConstraint:(id)arg1;
- (void)setWillClear:(bool)arg1;
- (void)setupKeyboardSupportForResultViewController:(id)arg1;
- (void)showCancelButton:(bool)arg1 animated:(bool)arg2;
- (unsigned long long)suggestionID;
- (void)textDidChange:(id)arg1;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(bool)arg3;
- (void)textDidChange:(id)arg1 whyQuery:(unsigned long long)arg2 allowZKW:(bool)arg3 sourcePreference:(unsigned long long)arg4 engagedSuggestion:(id)arg5;
- (void)textFieldDidBeginEditing;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn;
- (void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)topConstraint;
- (double)topPadding;
- (void)triggerSearchForUnlock;
- (void)unfocusSearchField;
- (void)updateBlurProgress;
- (bool)useInPlaceFilteredBlur;
- (id)widthConstraint;
- (bool)willClear;

@end
