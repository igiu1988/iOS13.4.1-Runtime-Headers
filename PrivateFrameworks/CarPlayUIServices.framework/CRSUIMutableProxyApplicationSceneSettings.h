/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
 */

@interface CRSUIMutableProxyApplicationSceneSettings : UIMutableApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *proxiedApplicationBundleIdentifier;
@property (nonatomic) bool proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)proxiedApplicationBundleIdentifier;
- (bool)proxiedApplicationLinkedOnOrAfterYukon;
- (void)setProxiedApplicationBundleIdentifier:(id)arg1;
- (void)setProxiedApplicationLinkedOnOrAfterYukon:(bool)arg1;

@end
