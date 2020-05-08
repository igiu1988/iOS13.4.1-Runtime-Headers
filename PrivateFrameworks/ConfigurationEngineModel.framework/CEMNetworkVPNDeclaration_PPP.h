/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration_PPP : CEMPayloadBase {
    NSArray * _payloadAuthEAPPlugins;
    NSString * _payloadAuthName;
    NSString * _payloadAuthPassword;
    NSArray * _payloadAuthProtocol;
    NSNumber * _payloadCCPEnabled;
    NSNumber * _payloadCCPMPPE128Enabled;
    NSNumber * _payloadCCPMPPE40Enabled;
    NSString * _payloadCommRemoteAddress;
    NSNumber * _payloadDisconnectOnIdle;
    NSNumber * _payloadDisconnectOnIdleTimer;
    NSNumber * _payloadTokenCard;
}

@property (nonatomic, copy) NSArray *payloadAuthEAPPlugins;
@property (nonatomic, copy) NSString *payloadAuthName;
@property (nonatomic, copy) NSString *payloadAuthPassword;
@property (nonatomic, copy) NSArray *payloadAuthProtocol;
@property (nonatomic, copy) NSNumber *payloadCCPEnabled;
@property (nonatomic, copy) NSNumber *payloadCCPMPPE128Enabled;
@property (nonatomic, copy) NSNumber *payloadCCPMPPE40Enabled;
@property (nonatomic, copy) NSString *payloadCommRemoteAddress;
@property (nonatomic, copy) NSNumber *payloadDisconnectOnIdle;
@property (nonatomic, copy) NSNumber *payloadDisconnectOnIdleTimer;
@property (nonatomic, copy) NSNumber *payloadTokenCard;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAuthName:(id)arg1 withAuthPassword:(id)arg2 withTokenCard:(id)arg3 withCommRemoteAddress:(id)arg4 withAuthEAPPlugins:(id)arg5 withAuthProtocol:(id)arg6 withCCPMPPE40Enabled:(id)arg7 withCCPMPPE128Enabled:(id)arg8 withCCPEnabled:(id)arg9 withDisconnectOnIdle:(id)arg10 withDisconnectOnIdleTimer:(id)arg11;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAuthEAPPlugins;
- (id)payloadAuthName;
- (id)payloadAuthPassword;
- (id)payloadAuthProtocol;
- (id)payloadCCPEnabled;
- (id)payloadCCPMPPE128Enabled;
- (id)payloadCCPMPPE40Enabled;
- (id)payloadCommRemoteAddress;
- (id)payloadDisconnectOnIdle;
- (id)payloadDisconnectOnIdleTimer;
- (id)payloadTokenCard;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAuthEAPPlugins:(id)arg1;
- (void)setPayloadAuthName:(id)arg1;
- (void)setPayloadAuthPassword:(id)arg1;
- (void)setPayloadAuthProtocol:(id)arg1;
- (void)setPayloadCCPEnabled:(id)arg1;
- (void)setPayloadCCPMPPE128Enabled:(id)arg1;
- (void)setPayloadCCPMPPE40Enabled:(id)arg1;
- (void)setPayloadCommRemoteAddress:(id)arg1;
- (void)setPayloadDisconnectOnIdle:(id)arg1;
- (void)setPayloadDisconnectOnIdleTimer:(id)arg1;
- (void)setPayloadTokenCard:(id)arg1;

@end
