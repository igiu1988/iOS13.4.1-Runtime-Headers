/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXQuickLookComponentView : SXComponentView {
    UILabel * _errorLabel;
    NFStateMachineState * _errorState;
    <SXQuickLookComponentFileProvider> * _fileProvider;
    NFStateMachineState * _idleState;
    UIActivityIndicatorView * _loadingIndicator;
    NFStateMachineState * _loadingState;
    NFStateMachineState * _presentingState;
    <SXQuickLookModule> * _quickLookModule;
    SXQuickLookViewController * _quickLookViewController;
    NFStateMachine * _stateMachine;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) UILabel *errorLabel;
@property (nonatomic, readonly) NFStateMachineState *errorState;
@property (nonatomic, readonly) <SXQuickLookComponentFileProvider> *fileProvider;
@property (nonatomic, readonly) NFStateMachineState *idleState;
@property (nonatomic, readonly) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, readonly) NFStateMachineState *loadingState;
@property (nonatomic, readonly) NFStateMachineState *presentingState;
@property (nonatomic, readonly) <SXQuickLookModule> *quickLookModule;
@property (nonatomic, retain) SXQuickLookViewController *quickLookViewController;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

- (void).cxx_destruct;
- (void)configure;
- (id)createErrorState;
- (id)createIdleState;
- (id)createLoadingState;
- (id)createPresentingState;
- (void)discardContents;
- (id)errorLabel;
- (id)errorState;
- (id)fileProvider;
- (void)handleTap;
- (id)idleState;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 fileProvider:(id)arg5 quickLookModule:(id)arg6;
- (void)layout;
- (void)layoutErrorView;
- (void)layoutLoadingIndicator;
- (void)layoutWebView;
- (id)loadingIndicator;
- (id)loadingState;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (id)presentingState;
- (id)quickLookModule;
- (id)quickLookViewController;
- (void)renderContents;
- (void)setErrorLabel:(id)arg1;
- (void)setQuickLookViewController:(id)arg1;
- (id)stateMachine;
- (id)tapGestureRecognizer;

@end
