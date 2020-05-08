/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFWorkflowPickerParameterComponent : WFParameterComponent {
    <WFComponentNavigationContext> * _navigationContext;
    WFParameter * _parameter;
    bool  _processing;
    WFVariableSubstitutableParameterState * _state;
    id /* block */  _updateBlock;
    <WFVariableProvider> * _variableProvider;
}

@property (nonatomic, readonly) <WFComponentNavigationContext> *navigationContext;
@property (nonatomic) bool processing;
@property (nonatomic, readonly) WFVariableSubstitutableParameterState *state;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; id x5; bool x6; })arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

- (void).cxx_destruct;
- (id)navigationContext;
- (id)parameter;
- (bool)processing;
- (void)setProcessing:(bool)arg1;
- (id)state;
- (id /* block */)updateBlock;
- (id)variableProvider;

@end
