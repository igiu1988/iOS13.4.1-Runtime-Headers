/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginDelegatesResponse : AAResponse

@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSDictionary *responseParameters;
@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *statusMessage;

- (id)altDSID;
- (id)augmentedResponseParametersForServiceIdentifier:(id)arg1 withAppleID:(id)arg2 password:(id)arg3 DSID:(id)arg4 altDSID:(id)arg5;
- (id)dsid;
- (id)responseParameters;
- (id)responseParametersForServiceIdentifier:(id)arg1;
- (id)status;
- (id)statusMessage;

@end
