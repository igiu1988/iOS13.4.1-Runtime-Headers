/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerCoordinator : NSObject <UIPopoverPresentationControllerDelegate, WFActionDescriptionViewControllerDelegate, WFActionDrawerAppsDetailViewControllerDelegate, WFActionDrawerAppsViewControllerDelegate, WFActionDrawerResultsViewControllerDelegate, WFActionDrawerStateConfigurable, WFActionDrawerStateRepresentable, WFActionDrawerViewControllerDelegate, WFComponentNavigationContext> {
    WFActionDrawerResultsController * _actionDrawerResultsController;
    <WFActionDrawerResultsControlling> * _actionDrawerResultsControllingDelegate;
    WFActionDrawerViewController * _actionsViewController;
    WFActionDrawerAppsViewController * _appsViewController;
    NSHashTable * _componentEditingSessions;
    WFComposeViewController * _composeViewController;
    UIViewController * _documentationPopoverViewController;
    WFDrawerController * _drawerController;
    UINavigationController * _navigationController;
    WFActionDrawerResults * _siriSuggestionsByIntentResults;
    WFActionDrawerResults * _siriSuggestionsResults;
    WFActionDrawerSiriSuggestionsViewController * _siriSuggestionsViewController;
    WFWorkflow * _workflow;
}

@property (nonatomic, retain) WFActionDrawerResultsController *actionDrawerResultsController;
@property (nonatomic) <WFActionDrawerResultsControlling> *actionDrawerResultsControllingDelegate;
@property (nonatomic, readonly) WFActionDrawerViewController *actionsViewController;
@property (nonatomic, retain) WFActionDrawerAppsViewController *appsViewController;
@property (nonatomic, readonly) NSHashTable *componentEditingSessions;
@property (nonatomic, readonly) UIViewController *componentHostingViewController;
@property (nonatomic, readonly) WFComposeViewController *composeViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIViewController *documentationPopoverViewController;
@property (nonatomic) WFDrawerController *drawerController;
@property (readonly) unsigned long long hash;
@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, retain) WFActionDrawerResults *siriSuggestionsByIntentResults;
@property (nonatomic, retain) WFActionDrawerResults *siriSuggestionsResults;
@property (nonatomic) WFActionDrawerSiriSuggestionsViewController *siriSuggestionsViewController;
@property (nonatomic, readonly) WFActionDrawerState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFWorkflow *workflow;

- (void).cxx_destruct;
- (void)actionDescriptionViewController:(id)arg1 didSelectAddAction:(id)arg2;
- (id)actionDrawerResultsController;
- (id)actionDrawerResultsControllingDelegate;
- (void)actionDrawerViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)actionDrawerViewController:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2;
- (void)actionDrawerViewController:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3;
- (void)actionDrawerViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)actionDrawerViewControllerDidSelectCategoryApps:(id)arg1 title:(id)arg2;
- (void)actionDrawerViewControllerDidSelectCategoryFavorites:(id)arg1 title:(id)arg2;
- (void)actionDrawerViewControllerDidSelectCategoryScripting:(id)arg1 title:(id)arg2;
- (id)actionsViewController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)appDetailsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)appDetailsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)appViewController:(id)arg1 didSelectAppWithBundleIdentifier:(id)arg2;
- (void)appendAction:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)appsViewController;
- (void)cancelEditingSessionsWithCompletionHandler:(id /* block */)arg1;
- (void)componentDidEndEditingSession:(id)arg1;
- (id)componentEditingSessions;
- (id)componentHostingViewController;
- (void)componentPresentDocumentationForAction:(id)arg1 withSourceView:(id)arg2;
- (void)componentPresentWorkflowSettings;
- (void)componentWillBeginEditingSession:(id)arg1;
- (id)composeViewController;
- (void)dealloc;
- (void)dismissDocumentationIfPresentedInPopoverAnimated:(bool)arg1;
- (id)documentationPopoverViewController;
- (id)drawerController;
- (id)initWithComposeViewController:(id)arg1 workflow:(id)arg2;
- (void)loadWithActionsViewController:(id)arg1 withState:(id)arg2;
- (bool)moveToState:(id)arg1 animated:(bool)arg2;
- (id)navigationController;
- (id)presentDescriptionForAction:(id)arg1 fromViewController:(id)arg2 view:(id)arg3 arrowDirections:(unsigned long long)arg4 animated:(bool)arg5;
- (void)presentResultsForAppWithBundleIdentifier:(id)arg1;
- (void)presentResultsViewController:(id)arg1 visibility:(unsigned long long)arg2 animated:(bool)arg3;
- (id)presentResultsViewControllerWithTitle:(id)arg1 results:(id)arg2 visibility:(unsigned long long)arg3 animated:(bool)arg4;
- (void)reloadSiriSuggestions;
- (void)responderDidBeginEditing:(id)arg1;
- (void)resultsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)resultsViewController:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)setActionDrawerResultsController:(id)arg1;
- (void)setActionDrawerResultsControllingDelegate:(id)arg1;
- (void)setAppsViewController:(id)arg1;
- (void)setDocumentationPopoverViewController:(id)arg1;
- (void)setDrawerController:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setSiriSuggestionsByIntentResults:(id)arg1;
- (void)setSiriSuggestionsResults:(id)arg1;
- (void)setSiriSuggestionsViewController:(id)arg1;
- (id)siriSuggestionsByIntentResults;
- (id)siriSuggestionsResults;
- (id)siriSuggestionsViewController;
- (id)state;
- (void)subscribeForTextEditingNotifications;
- (void)suggestionsViewController:(id)arg1 didSelectAction:(id)arg2;
- (id)workflow;

@end
