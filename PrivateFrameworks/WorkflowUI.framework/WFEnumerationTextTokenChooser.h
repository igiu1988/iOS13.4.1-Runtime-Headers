/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFEnumerationTextTokenChooser : WFTextTokenChooser <WFParameterEventObserver> {
    WFVariableSubstitutableParameterState * _currentState;
    WFEnumerationParameter * _parameter;
    NSArray * _parameterStates;
    id /* block */  _selectionHandler;
}

@property (nonatomic, retain) WFVariableSubstitutableParameterState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFEnumerationParameter *parameter;
@property (nonatomic, copy) NSArray *parameterStates;
@property (nonatomic, copy) id /* block */ selectionHandler;
@property (readonly) Class superclass;

+ (id)presentWithParameter:(id)arg1 state:(id)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4 processing:(bool)arg5 sourceView:(id)arg6 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 viewController:(id)arg8 selectionHandler:(id /* block */)arg9;

- (void).cxx_destruct;
- (id)currentState;
- (void)dealloc;
- (id)parameter;
- (void)parameterAttributesDidChange:(id)arg1;
- (id)parameterStates;
- (id /* block */)selectionHandler;
- (void)setCurrentState:(id)arg1;
- (void)setParameter:(id)arg1;
- (void)setParameterStates:(id)arg1;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)updateAdditionalButtons;
- (void)updateCurrentState;
- (void)updatePossibleStates;

@end
