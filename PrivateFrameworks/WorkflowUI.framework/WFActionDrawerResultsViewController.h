/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerResultsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerActionTableViewCellDelegate, WFActionDrawerResultsControlling, WFActionDrawerStateConfigurable, WFActionDrawerStateRepresentable> {
    <WFActionDrawerResultsViewControllerDelegate> * _delegate;
    UILabel * _emptyLabel;
    NSString * _emptyText;
    WFActionDrawerResults * _results;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFActionDrawerResultsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UILabel *emptyLabel;
@property (nonatomic, copy) NSString *emptyText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFActionDrawerResults *results;
@property (nonatomic) bool scrollsToTop;
@property (nonatomic, readonly) WFActionDrawerState *state;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2;
- (id)delegate;
- (id)emptyLabel;
- (id)emptyText;
- (id)initWithTitle:(id)arg1;
- (void)loadView;
- (bool)moveToState:(id)arg1 animated:(bool)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)results;
- (void)scrollToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (bool)scrollsToTop;
- (void)setDelegate:(id)arg1;
- (void)setEmptyLabel:(id)arg1;
- (void)setEmptyText:(id)arg1;
- (void)setResults:(id)arg1 animated:(bool)arg2;
- (void)setScrollsToTop:(bool)arg1;
- (void)setTableView:(id)arg1;
- (id)state;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateEmptyLabelVisibility;
- (void)viewWillAppear:(bool)arg1;

@end
