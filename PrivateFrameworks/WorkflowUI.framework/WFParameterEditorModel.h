/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFParameterEditorModel : NSObject {
    WFGradient * _buttonGradient;
    WFParameter * _parameter;
    NSError * _resourceError;
    <WFParameterState> * _state;
}

@property (nonatomic, readonly) WFGradient *buttonGradient;
@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) NSError *resourceError;
@property (nonatomic, readonly) <WFParameterState> *state;

- (void).cxx_destruct;
- (id)buttonGradient;
- (id)initWithParameter:(id)arg1 state:(id)arg2;
- (id)initWithResourceError:(id)arg1 buttonGradient:(id)arg2;
- (id)parameter;
- (id)resourceError;
- (id)state;

@end