/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSXPCServiceDefinition : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSString * _identifier;
    long long  _scope;
    long long  _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long scope;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long variant;

+ (id)definitionWithIdentifier:(id)arg1 variant:(long long)arg2 scope:(long long)arg3;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)scope;
- (long long)variant;

@end
