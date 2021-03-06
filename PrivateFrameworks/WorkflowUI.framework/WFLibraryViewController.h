/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFLibraryViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDropDelegate, UISearchControllerDelegate, UISearchResultsUpdating, WFApplicationStateObserver, WFLibraryWorkflowCellDelegate, WFRunnableLibraryResultsControllerDelegate, WFUIKitUserInterface> {
    WFDatabaseResult * _collection;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    WFDatabase * _database;
    bool  _handlesDropsOntoWorkflows;
    bool  _needsDelayWhenPresented;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _previousLayoutMargins;
    WFLibraryResultsController * _resultsController;
}

@property (nonatomic, readonly) WFDatabaseResult *collection;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool handlesDropsOntoWorkflows;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsDelayWhenPresented;
@property (nonatomic, readonly) bool needsTopPadding;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previousLayoutMargins;
@property (nonatomic, readonly) WFLibraryResultsController *resultsController;
@property (nonatomic, readonly) WFLibraryRunCoordinator *runCoordinator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIViewController *viewController;

+ (Class)collectionViewLayoutClass;
+ (Class)resultsControllerClass;

- (void).cxx_destruct;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)beginSearching;
- (bool)canBecomeFirstResponder;
- (id)collection;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionViewLayout;
- (id)database;
- (void)dealloc;
- (void)didDismissSearchController:(id)arg1;
- (void)endSearching;
- (void)handleDropOfItems:(id)arg1 ontoWorkflow:(id)arg2;
- (bool)handlesDropsOntoWorkflows;
- (id)init;
- (id)initWithCollection:(id)arg1;
- (void)invalidateLayoutMetrics;
- (id)keyCommands;
- (void)keyboardFrameWillChange;
- (void)loadView;
- (bool)needsDelayWhenPresented;
- (bool)needsTopPadding;
- (void)presentAlert:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previousLayoutMargins;
- (id)resultsController;
- (void)resultsController:(id)arg1 didChangeRunningStateForWorkflow:(id)arg2;
- (id)runCoordinator;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setHandlesDropsOntoWorkflows:(bool)arg1;
- (void)setPreviousLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willPresentSearchController:(id)arg1;
- (id)workflowAtIndexPath:(id)arg1;

@end
