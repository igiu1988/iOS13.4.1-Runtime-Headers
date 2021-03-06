/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STTelephonyStatusDomainData : NSObject <NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    STTelephonyStatusDomainSIMInfo * _SIMOneInfo;
    STTelephonyStatusDomainSIMInfo * _SIMTwoInfo;
    bool  _cellularRadioCapabilityEnabled;
    bool  _dualSIMEnabled;
    bool  _radioModuleDead;
}

@property (nonatomic, readonly, copy) STTelephonyStatusDomainSIMInfo *SIMOneInfo;
@property (nonatomic, readonly, copy) STTelephonyStatusDomainSIMInfo *SIMTwoInfo;
@property (getter=isCellularRadioCapabilityEnabled, nonatomic, readonly) bool cellularRadioCapabilityEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDualSIMEnabled, nonatomic, readonly) bool dualSIMEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) STTelephonyStatusDomainSIMInfo *primarySIMInfo;
@property (getter=isRadioModuleDead, nonatomic, readonly) bool radioModuleDead;
@property (nonatomic, readonly, copy) STTelephonyStatusDomainSIMInfo *secondarySIMInfo;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SIMOneInfo;
- (id)SIMTwoInfo;
- (id)_anySIMInfoWithSIMPresent;
- (id)_dataPreferredSIMInfoIfSIMPresent;
- (id)_otherSIMInfoIfSIMPresent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithSIMOneInfo:(id)arg1 SIMTwoInfo:(id)arg2 cellularRadioCapabilityEnabled:(bool)arg3 dualSIMEnabled:(bool)arg4 radioModuleDead:(bool)arg5;
- (bool)isCellularRadioCapabilityEnabled;
- (bool)isDualSIMEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isRadioModuleDead;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primarySIMInfo;
- (id)secondarySIMInfo;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
