/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

@interface BSServiceSpecification : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _derived;
    NSString * _identifier;
    bool  _launchWhitelisted;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDerived, nonatomic, readonly) bool derived;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isLaunchWhitelisted, nonatomic, readonly) bool launchWhitelisted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 launchWhitelisted:(bool)arg2 derived:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isDerived;
- (bool)isEqual:(id)arg1;
- (bool)isLaunchWhitelisted;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end