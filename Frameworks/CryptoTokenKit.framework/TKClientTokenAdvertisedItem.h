/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKClientTokenAdvertisedItem : NSObject {
    NSDictionary * _keychainAttributes;
    id  _secRef;
    TKClientTokenSession * _session;
}

@property (nonatomic, readonly) struct __SecCertificate { }*certificateRef;
@property (nonatomic, readonly) struct __SecIdentity { }*identityRef;
@property (nonatomic, readonly) struct __SecKey { }*keyRef;
@property (nonatomic, readonly) unsigned long long keyUsage;
@property (nonatomic, readonly) NSDictionary *keychainAttributes;
@property (nonatomic, readonly) id keychainClass;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) TKClientTokenSession *session;

- (void).cxx_destruct;
- (struct __SecCertificate { }*)certificateRef;
- (struct __SecIdentity { }*)identityRef;
- (id)initWithSession:(id)arg1 keychainAttributes:(id)arg2 secRef:(id)arg3;
- (struct __SecKey { }*)keyRef;
- (unsigned long long)keyUsage;
- (id)keychainAttributes;
- (id)keychainClass;
- (id)localizedName;
- (id)session;

@end
