/* Generated by EzioChiu.
 */

@protocol _SFAuthenticationContextDelegate <NSObject>

@optional

- (bool)contextRequiresSessionBasedAuthentication:(_SFAuthenticationContext *)arg1;
- (bool)contextShouldAllowMultipleBiometricFailures:(_SFAuthenticationContext *)arg1;
- (bool)contextShouldAllowPasscodeFallback:(_SFAuthenticationContext *)arg1;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(_SFAuthenticationContext *)arg1;

@end
