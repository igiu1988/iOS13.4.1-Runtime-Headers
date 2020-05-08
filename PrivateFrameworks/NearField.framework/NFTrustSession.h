/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFTrustSession : NFSession

- (id)createKey:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (bool)deleteKey:(id)arg1 error:(id*)arg2;
- (id)getKey:(id)arg1 error:(id*)arg2;
- (id)listKeys:(id*)arg1;
- (id)signWithKey:(id)arg1 request:(id)arg2 authorization:(id)arg3 error:(id*)arg4;
- (id)signWithKey:(id)arg1 request:(id)arg2 paymentRequest:(id)arg3 authorization:(id)arg4 error:(id*)arg5;

@end
