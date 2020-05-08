/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AUHostExtensionContext : NSExtensionContext <AUAudioUnitHostProtocol, _AURemoteParameterSynchronization> {
    AUAudioUnit * _audioUnit;
    NSExtension * _extension;
    NSUUID * _requestIdentifier;
    NSObject<OS_dispatch_queue> * mParameterQueue;
}

@property (nonatomic) AUAudioUnit *audioUnit;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) NSUUID *requestIdentifier;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)MIDICIProfileChanged:(unsigned char)arg1 channel:(unsigned char)arg2 profile:(id)arg3 enabled:(bool)arg4;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (id)audioUnit;
- (void)dealloc;
- (id)extension;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)propertiesChanged:(id)arg1;
- (id)requestIdentifier;
- (void)setAudioUnit:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (id)xpcConnection;

@end
