/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyCertificateHelper : NSObject

+ (bool)addTrustedCertificate:(id)arg1 trustedKeys:(id)arg2 error:(id*)arg3;
+ (struct __SecCertificate { }*)certificateFromData:(id)arg1 error:(id*)arg2;
+ (id)copyTrustedKeysFromDataArray:(id)arg1 error:(id*)arg2;
+ (id)createCACertificatesArray:(id)arg1 error:(id*)arg2;
+ (bool)verifyCertificates:(id)arg1 intermediates:(id)arg2 policy:(struct __SecPolicy { }*)arg3 error:(id*)arg4;
+ (bool)verifyLeaf:(id)arg1 intermediates:(id)arg2 policy:(struct __SecPolicy { }*)arg3 error:(id*)arg4;

@end
