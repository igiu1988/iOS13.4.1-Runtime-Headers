/* Generated by EzioChiu.
 */

@protocol CDPRemoteDeviceSecretValidatorProtocol

@required

- (void)approveFromAnotherDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cancelApproveFromAnotherDevice;
- (void)cancelValidationWithError:(NSError *)arg1;
- (void)resetAccountCDPState;
- (void)setSupportedEscapeOfferMask:(unsigned long long)arg1;
- (unsigned long long)supportedEscapeOfferMask;
- (void)supportedEscapeOfferMaskCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)validateRecoveryKey:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)validateSecret:(void *)arg1 devices:(void *)arg2 type:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*

@end
