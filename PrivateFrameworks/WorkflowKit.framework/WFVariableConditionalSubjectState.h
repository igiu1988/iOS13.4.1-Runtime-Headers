/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState {
    WFContentProperty * _effectiveContentProperty;
    WFVariableParameterState * _variableState;
}

@property (nonatomic, readonly) WFContentProperty *effectiveContentProperty;
@property (nonatomic, readonly) WFVariable *variable;
@property (nonatomic, readonly) WFVariableParameterState *variableState;

+ (id)subjectType;

- (void).cxx_destruct;
- (unsigned long long)comparableTimeUnits;
- (id)containedVariables;
- (Class)contentClassProvidingContentProperty;
- (long long)contentType;
- (unsigned long long)displayableTimeUnits;
- (id)effectiveContentProperty;
- (void)getContentWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithVariable:(id)arg1;
- (id)initWithVariableState:(id)arg1;
- (bool)isCaseInsensitive;
- (bool)isEnumeration;
- (bool)isEqual:(id)arg1;
- (bool)isIrrational;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;
- (id)serializedRepresentation;
- (id)supportedComparisonOperators;
- (unsigned long long)tense;
- (id)unitType;
- (id)variable;
- (id)variableState;

@end
