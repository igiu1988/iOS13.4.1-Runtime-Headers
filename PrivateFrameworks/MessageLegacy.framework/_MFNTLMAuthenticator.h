/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFNTLMAuthenticator : ECSASLAuthenticator {
    int  _ntlmError;
    struct NtlmGenerator { } * _ntlmGeneratorRef;
}

- (void)dealloc;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(long long)arg1;

@end
