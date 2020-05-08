/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
 */

@interface AIDAMutableServiceContext : AIDAServiceContext

@property (nonatomic, copy) NSDictionary *authenticationResults;
@property (nonatomic) <CDPStateUIProvider> *cdpUiProvider;
@property (nonatomic) long long operationUIPermissions;
@property (nonatomic) bool shouldForceOperation;
@property (nonatomic, retain) UIViewController *viewController;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAuthenticationResults:(id)arg1;
- (void)setCdpUiProvider:(id)arg1;
- (void)setOperationUIPermissions:(long long)arg1;
- (void)setShouldForceOperation:(bool)arg1;
- (void)setViewController:(id)arg1;

@end