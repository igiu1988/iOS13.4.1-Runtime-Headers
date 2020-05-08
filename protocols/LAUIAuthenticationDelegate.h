/* Generated by EzioChiu.
 */

@protocol LAUIAuthenticationDelegate <NSObject>

@optional

- (void)authenticationResult:(NSDictionary *)arg1 error:(NSError *)arg2 context:(LAContext *)arg3;
- (void)biometricNoMatch;
- (NSString *)callerIconBundlePath;
- (NSString *)localizedCallerName;
- (NSString *)localizedSubTitleForMechanisms:(unsigned long long)arg1;
- (void)processBiometricMatchWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
