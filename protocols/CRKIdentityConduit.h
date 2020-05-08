/* Generated by EzioChiu.
 */

@protocol CRKIdentityConduit

@required

- (CATOperation *)operationToRequestCertificateFromClassMember:(NSString *)arg1 fromDevice:(NSString *)arg2;
- (CATOperation *)operationToSendActiveCertificate:(NSData *)arg1 stagedCertificate:(NSData *)arg2 toRecipients:(NSSet *)arg3 fromDevice:(NSString *)arg4;
- (CATOperation *)operationToSendAdvertisingIdentifier:(NSUUID *)arg1 activeCertificate:(NSData *)arg2 stagedCertificate:(NSData *)arg3 toRecipients:(NSSet *)arg4 fromDevice:(NSString *)arg5;

@end