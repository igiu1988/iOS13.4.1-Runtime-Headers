/* Generated by EzioChiu.
 */

@protocol SBFAuthenticationAssertionProviding <NSObject>

@required

- (SBFAuthenticationAssertion *)createGracePeriodAssertionWithReason:(NSString *)arg1;
- (SBFAuthenticationAssertion *)createKeybagUnlockAssertionWithReason:(NSString *)arg1;

@end
