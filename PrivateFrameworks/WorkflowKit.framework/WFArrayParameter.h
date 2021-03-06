/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFArrayParameter : WFParameter {
    NSSet * _allowedValueTypes;
    bool  _supportsVariables;
}

@property (nonatomic, readonly) NSSet *allowedValueTypes;
@property (nonatomic, readonly) bool supportsVariables;

- (void).cxx_destruct;
- (id)allowedValueTypes;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)stateClass;
- (bool)supportsVariables;

@end
