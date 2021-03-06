/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTInclusionProofVerifier : NSObject {
    NSString * _application;
    KTApplicationPublicKeyStore * _keyStore;
}

@property (retain) NSString *application;
@property (readonly) KTApplicationPublicKeyStore *keyStore;

- (void).cxx_destruct;
- (id)application;
- (id)initWithKeyStore:(id)arg1 application:(id)arg2;
- (id)keyStore;
- (void)setApplication:(id)arg1;
- (bool)verifyInclusionProofWithMapEntry:(id)arg1 perAppLogEntry:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id*)arg4;

@end
