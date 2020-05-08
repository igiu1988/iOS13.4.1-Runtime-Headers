/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSProcessInstance : NSObject <BSXPCSecureCoding, NSCopying, RBSProcessIdentifier, RBSProcessMatching> {
    RBSProcessIdentifier * _identifier;
    RBSProcessIdentity * _identity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBSProcessIdentifier *identifier;
@property (nonatomic, readonly) RBSProcessIdentity *identity;
@property (readonly) Class superclass;

+ (id)instanceWithIdentifier:(id)arg1 identity:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 identity:(id)arg2;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)identity;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;
- (int)rbs_pid;

@end