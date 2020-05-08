/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFRunnableLibraryResultsController : WFDatabaseCollectionViewResultsController <WFBaseLibraryWorkflowCellDelegate, WFLibraryRunCoordinatorDelegate, WFLibraryRunCoordinatorObserver> {
    <WFBaseLibraryWorkflowCellDelegate> * _cellDelegate;
    <WFBaseLibraryWorkflowCellMetrics> * _cellLayoutMetrics;
    UICollectionView * _collectionView;
    <WFRunnableLibraryResultsControllerDelegate> * _delegate;
    WFLibraryRunCoordinator * _runCoordinator;
}

@property (nonatomic) <WFBaseLibraryWorkflowCellDelegate> *cellDelegate;
@property (nonatomic, copy) <WFBaseLibraryWorkflowCellMetrics> *cellLayoutMetrics;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFRunnableLibraryResultsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFLibraryRunCoordinator *runCoordinator;
@property (readonly) Class superclass;

+ (Class)libraryWorkflowCellClass;

- (void).cxx_destruct;
- (id)cellDelegate;
- (id)cellLayoutMetrics;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3;
- (id)delegate;
- (id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3;
- (id)runCoordinator;
- (void)runCoordinator:(id)arg1 didChangeRunningStateWithProgress:(double)arg2 forWorkflow:(id)arg3;
- (id)runCoordinator:(id)arg1 userInterfaceForWorkflow:(id)arg2;
- (void)setCellDelegate:(id)arg1;
- (void)setCellLayoutMetrics:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (void)workflowCellDidRequestRun:(id)arg1;
- (void)workflowCellDidRequestStop:(id)arg1;

@end
