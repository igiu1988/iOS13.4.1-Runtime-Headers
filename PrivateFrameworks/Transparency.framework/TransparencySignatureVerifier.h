/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencySignatureVerifier : NSObject {
    bool  _needsRefresh;
    NSDictionary * _trustedKeys;
}

@property bool needsRefresh;
@property (retain) NSDictionary *trustedKeys;

+ (int)protoAlgorithmForSecKeyAlgorithm:(struct __CFString { }*)arg1;
+ (const struct __CFString { }*)secKeyAlgorithmForProtoAlgorithm:(int)arg1;
+ (bool)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 trustedKeys:(id)arg4 algorithm:(struct __CFString { }*)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (id)initWithTrustedKeys:(id)arg1;
- (bool)needsRefresh;
- (void)setNeedsRefresh:(bool)arg1;
- (void)setTrustedKeys:(id)arg1;
- (id)trustedKeys;
- (bool)verifyMessage:(id)arg1 signature:(id)arg2 spkiHash:(id)arg3 algorithm:(struct __CFString { }*)arg4 error:(id*)arg5;

@end
