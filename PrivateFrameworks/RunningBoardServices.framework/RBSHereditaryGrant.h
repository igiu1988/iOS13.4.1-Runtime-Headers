/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSHereditaryGrant : RBSGrant {
    NSArray * _attributes;
    NSObject<OS_xpc_object> * _encodedEndowment;
    NSString * _endowmentNamespace;
    NSString * _sourceEnvironment;
}

@property (nonatomic, readonly) NSArray *attributes;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *encodedEndowment;
@property (nonatomic, readonly, copy) NSString *endowmentNamespace;
@property (nonatomic, readonly, copy) NSString *sourceEnvironment;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)grantWithNamespace:(id)arg1 endowment:(id)arg2 attributes:(id)arg3;
+ (id)grantWithNamespace:(id)arg1 sourceEnvironment:(id)arg2 attributes:(id)arg3;
+ (id)grantWithNamespace:(id)arg1 sourceEnvironment:(id)arg2 endowment:(id)arg3 attributes:(id)arg4;

- (void).cxx_destruct;
- (id)_initWithNamespace:(id)arg1 sourceEnvironment:(id)arg2 endowment:(id)arg3 attributes:(id)arg4;
- (id)attributes;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)encodedEndowment;
- (id)endowmentNamespace;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sourceEnvironment;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)_withEndowmentFromContext:(id)arg1 block:(id /* block */)arg2;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (id)effectiveAttributesWithContext:(id)arg1;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
