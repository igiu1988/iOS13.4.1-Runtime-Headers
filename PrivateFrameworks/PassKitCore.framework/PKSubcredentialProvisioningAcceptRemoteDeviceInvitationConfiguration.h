/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration {
    bool  _canRequestInvitation;
    PKAppletSubcredentialSharingInvitation * _invitation;
    PKPaymentWebService * _localDeviceWebService;
    PKPaymentWebService * _remoteDeviceWebService;
}

@property (nonatomic, readonly) bool canRequestInvitation;
@property (nonatomic, readonly) PKAppletSubcredentialSharingInvitation *invitation;
@property (nonatomic, readonly) PKPaymentWebService *localDeviceWebService;
@property (nonatomic, readonly) PKPaymentWebService *remoteDeviceWebService;

- (void).cxx_destruct;
- (bool)canRequestInvitation;
- (id)description;
- (id)initWithInvitation:(id)arg1 canRequestInvitation:(bool)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4;
- (id)initWithInvitation:(id)arg1 canRequestInvitation:(bool)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 configurationType:(long long)arg5;
- (id)invitation;
- (id)localDeviceWebService;
- (id)remoteDeviceWebService;
- (long long)startingState;
- (id)transitionTable;

@end
