/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSSecureCoding> {
    NSSet * _actions;
    bool  _activatingForSiri;
    NSUUID * _activityContinuationIdentifier;
    NSDictionary * _legacyAlertOptions;
    SBSRemoteAlertPresentationTarget * _presentationTarget;
    NSString * _reason;
    bool  _shouldInvalidateWhenDeactivated;
    bool  _switcherEligible;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSSet *actions;
@property (getter=isActivatingForSiri, nonatomic) bool activatingForSiri;
@property (nonatomic, copy) NSUUID *activityContinuationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *legacyAlertOptions;
@property (nonatomic, retain) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) bool shouldInvalidateWhenDeactivated;
@property (readonly) Class superclass;
@property (getter=isSwitcherEligible, nonatomic) bool switcherEligible;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)activationContextWithLegacyAlertOptions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)activityContinuationIdentifier;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithActions:(id)arg1;
- (id)initWithActions:(id)arg1 presentationTarget:(id)arg2;
- (id)initWithActions:(id)arg1 presentationTarget:(id)arg2 userInfo:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isActivatingForSiri;
- (bool)isSwitcherEligible;
- (id)legacyAlertOptions;
- (id)presentationTarget;
- (id)reason;
- (void)setActions:(id)arg1;
- (void)setActivatingForSiri:(bool)arg1;
- (void)setActivityContinuationIdentifier:(id)arg1;
- (void)setLegacyAlertOptions:(id)arg1;
- (void)setPresentationTarget:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setShouldInvalidateWhenDeactivated:(bool)arg1;
- (void)setSwitcherEligible:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldInvalidateWhenDeactivated;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInfo;

@end
