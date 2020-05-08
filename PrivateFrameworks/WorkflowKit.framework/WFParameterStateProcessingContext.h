/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFParameterStateProcessingContext : NSObject {
    WFContentSourceTracker * _contentSourceTracker;
    long long  _environment;
    bool  _isInputParameter;
    WFParameter * _parameter;
    <WFVariableDataSource> * _variableSource;
}

@property (nonatomic, readonly) WFContentSourceTracker *contentSourceTracker;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) bool isInputParameter;
@property (nonatomic, readonly) WFParameter *parameter;
@property (nonatomic, readonly) <WFVariableDataSource> *variableSource;

- (void).cxx_destruct;
- (void)addContentSource:(id)arg1;
- (id)contentSourceTracker;
- (long long)environment;
- (id)initWithVariableSource:(id)arg1 parameter:(id)arg2 isInputParameter:(bool)arg3 environment:(long long)arg4 contentSourceTracker:(id)arg5;
- (bool)isInputParameter;
- (id)parameter;
- (id)variableSource;

@end
