/* Generated by EzioChiu.
 */

@protocol CRKTrust <CRKKeychainItem>

@required

- (<CRKCertificate> *)leafCertificate;
- (struct __SecTrust { }*)underlyingTrust;

@end