/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFWorkflowViewController : UIViewController <CKComponentProvider, CKSupplementaryViewDataSource, WFCollectionViewDelegateModulesLayout, WFModuleDelegate, WFVariableUIDelegate> {
    WFContentClassesToolbar * _acceptsToolbar;
    <WFContentClassesToolbarDelegate> * _acceptsToolbarDelegate;
    id /* block */  _actionOutputCompletionHandler;
    NSIndexPath * _actionOutputIndexPath;
    bool  _allowsAcceptsToolbar;
    bool  _alwaysBounceCollectionViewVertically;
    int (* _cellConfigurationFunction;
    <WFModulesCollectionViewDelegate> * _collectionViewDelegate;
    WFModulesCollectionViewLayout * _collectionViewLayout;
    <WFComponentNavigationContext> * _context;
    double  _currentModuleWidth;
    CKCollectionViewTransactionalDataSource * _dataSource;
    <WFWorkflowViewControllerDelegate> * _delegate;
    WFWorkflowModuleIndentationCache * _indentationCache;
    double  _maximumContentWidth;
    double  _maximumModuleWidth;
    <WFModuleModelProvider> * _modelProvider;
    WFScrollPositionPinningCollectionView * _pinningCollectionView;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    <WFModulesSupplementaryViewDataSource> * _supplementaryViewDataSource;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
    WFWorkflow * _workflow;
    unsigned long long  _workflowViewStyle;
}

@property (nonatomic, readonly) WFContentClassesToolbar *acceptsToolbar;
@property (nonatomic) <WFContentClassesToolbarDelegate> *acceptsToolbarDelegate;
@property (nonatomic, copy) id /* block */ actionOutputCompletionHandler;
@property (nonatomic, retain) NSIndexPath *actionOutputIndexPath;
@property (nonatomic) bool allowsAcceptsToolbar;
@property (nonatomic) bool alwaysBounceCollectionViewVertically;
@property (nonatomic, readonly) int (*cellConfigurationFunction;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic) <WFModulesCollectionViewDelegate> *collectionViewDelegate;
@property (nonatomic, readonly) WFModulesCollectionViewLayout *collectionViewLayout;
@property (nonatomic, readonly) <WFComponentNavigationContext> *context;
@property (nonatomic) double currentModuleWidth;
@property (nonatomic, readonly) CKCollectionViewTransactionalDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWorkflowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWorkflowModuleIndentationCache *indentationCache;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic) double maximumModuleWidth;
@property (nonatomic) <WFModuleModelProvider> *modelProvider;
@property (nonatomic) WFScrollPositionPinningCollectionView *pinningCollectionView;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (readonly) Class superclass;
@property (nonatomic) <WFModulesSupplementaryViewDataSource> *supplementaryViewDataSource;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) unsigned long long workflowViewStyle;

+ (id)componentForModel:(id)arg1 context:(id)arg2;
+ (id)moduleAppearanceForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)acceptsToolbar;
- (id)acceptsToolbarDelegate;
- (id /* block */)actionOutputCompletionHandler;
- (id)actionOutputIndexPath;
- (bool)allowsAcceptsToolbar;
- (bool)alwaysBounceCollectionViewVertically;
- (void)cancelActionOutputPicking;
- (int (*)cellConfigurationFunction;
- (id)collectionView;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (bool)collectionView:(id)arg1 layout:(id)arg2 itemAtIndexPath:(id)arg3 isConnectedToItemAtIndexPath:(id)arg4;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 verticalOffsetForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionViewDelegate;
- (id)collectionViewLayout;
- (id)context;
- (id)createModelForAction:(id)arg1;
- (double)currentModuleWidth;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)generateNewModelsAndReload;
- (id)indentationCache;
- (unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
- (id)indexPathOfCellContainingResponder:(id)arg1;
- (id)indexPathOfCellWithSubview:(id)arg1;
- (id)initWithWorkflow:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithWorkflow:(id)arg1 style:(unsigned long long)arg2 context:(id)arg3 cellConfigurationFunction:(int (*)arg4;
- (void)invalidateActionConnections;
- (void)loadView;
- (double)maximumContentWidth;
- (double)maximumModuleWidth;
- (id)modelProvider;
- (double)moduleWidthForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pinningCollectionView;
- (void)removeOutputTokens;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(id /* block */)arg3 goBackHandler:(id /* block */)arg4 scrolledAwayHandler:(id /* block */)arg5;
- (id)scrollViewDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAcceptsToolbarDelegate:(id)arg1;
- (void)setActionOutputCompletionHandler:(id /* block */)arg1;
- (void)setActionOutputIndexPath:(id)arg1;
- (void)setAllowsAcceptsToolbar:(bool)arg1;
- (void)setAlwaysBounceCollectionViewVertically:(bool)arg1;
- (void)setCollectionViewDelegate:(id)arg1;
- (void)setCurrentModuleWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumContentWidth:(double)arg1;
- (void)setMaximumModuleWidth:(double)arg1;
- (void)setModelProvider:(id)arg1;
- (void)setPinningCollectionView:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setSupplementaryViewDataSource:(id)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(bool)arg2 variableProvider:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)supplementaryViewDataSource;
- (void)tappedOutputToken:(id)arg1 withModel:(id)arg2;
- (void)textSizeChanged;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (struct CGSize { double x1; double x2; })viewSize;
- (void)viewWillLayoutSubviews;
- (id)workflow;
- (unsigned long long)workflowViewStyle;

@end
