/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIResultsViewController : UIViewController <SearchUIKeyboardableTableViewScrollDelegate, SearchUITableViewTesting, UIGestureRecognizerDelegate> {
    <SearchUIResultsViewDelegate> * _delegate;
    bool  _immediatelyShowCardForSingleResult;
    NSString * _previousSearchString;
    SearchUIReplicatorView * _replicatorView;
    SearchUIResultTableViewController * _resultTableViewController;
    NSArray * _sections;
    bool  _shouldMonitorScrollingPastBottomOfContent;
    unsigned long long  _style;
    id /* block */  cellWillDisplayHandler;
    id /* block */  tableViewDidUpdateHandler;
    id /* block */  tableViewWillUpdateHandler;
}

@property (nonatomic, copy) id /* block */ cellWillDisplayHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SearchUIResultsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distanceToTopOfAppIcons;
@property (nonatomic) <SFFeedbackListener> *feedbackListener;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool immediatelyShowCardForSingleResult;
@property (nonatomic, retain) NSString *previousSearchString;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) SearchUIReplicatorView *replicatorView;
@property (nonatomic, retain) SearchUIResultTableViewController *resultTableViewController;
@property (nonatomic, retain) SearchUISearchField *searchField;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic) bool shortenTopFloatingHeader;
@property (nonatomic) bool shouldHideResultsUnderKeyboard;
@property (nonatomic) bool shouldMonitorScrollingPastBottomOfContent;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (nonatomic) bool shouldUseStandardSectionInsets;
@property (nonatomic) bool showsVerticalScrollIndicator;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableViewDidUpdateHandler;
@property (nonatomic, copy) id /* block */ tableViewWillUpdateHandler;
@property (nonatomic, retain) SearchUIBackgroundView *view;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id /* block */)cellWillDisplayHandler;
- (id)contentScrollView;
- (id)currentTableModel;
- (id)delegate;
- (void)didBeginScrolling;
- (void)didScrollPastBottomOfContent;
- (void)didTap;
- (double)distanceToTopOfAppIcons;
- (id)feedbackListener;
- (id)footerView;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)immediatelyShowCardForSingleResult;
- (id)init;
- (void)performReturnKeyPressAction;
- (void)performScrollTestWithCompletion:(id /* block */)arg1;
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)previousSearchString;
- (void)purgeMemory;
- (id)queryString;
- (void)replaceResult:(id)arg1 withResult:(id)arg2;
- (id)replicatorView;
- (void)restoreResultsIfNeeded;
- (id)resultTableViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollToIndexPath:(id)arg1;
- (id)searchField;
- (id)sections;
- (void)setCellWillDisplayHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setImmediatelyShowCardForSingleResult:(bool)arg1;
- (void)setPreviousSearchString:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setReplicatorView:(id)arg1;
- (void)setResultTableViewController:(id)arg1;
- (void)setSearchField:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setShortenTopFloatingHeader:(bool)arg1;
- (void)setShouldHideResultsUnderKeyboard:(bool)arg1;
- (void)setShouldMonitorScrollingPastBottomOfContent:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setShouldUseStandardSectionInsets:(bool)arg1;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTableViewDidUpdateHandler:(id /* block */)arg1;
- (void)setTableViewWillUpdateHandler:(id /* block */)arg1;
- (bool)shortenTopFloatingHeader;
- (bool)shouldHideResultsUnderKeyboard;
- (bool)shouldMonitorScrollingPastBottomOfContent;
- (bool)shouldUseInsetRoundedSections;
- (bool)shouldUseStandardSectionInsets;
- (bool)showsVerticalScrollIndicator;
- (unsigned long long)style;
- (id /* block */)tableViewDidUpdateHandler;
- (id /* block */)tableViewWillUpdateHandler;
- (void)tapAtIndexPath:(id)arg1;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;
- (void)updateWithResultSections:(id)arg1;
- (void)updateWithResultSections:(id)arg1 resetScrollPoint:(bool)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end
