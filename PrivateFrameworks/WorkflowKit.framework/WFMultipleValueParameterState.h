/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (id)containedVariables;
- (void)finishProcessingWithContent:(id)arg1 error:(id)arg2 forParameterStateClass:(Class)arg3 valueHandler:(id /* block */)arg4;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)stateByAppendingValue:(id)arg1;
- (id)stateByRemovingValueAtIndex:(unsigned long long)arg1;
- (id)stateByReplacingValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (id)stateByTogglingValue:(id)arg1;

@end
