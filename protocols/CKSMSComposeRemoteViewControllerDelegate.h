/* Generated by EzioChiu.
 */

@protocol CKSMSComposeRemoteViewControllerDelegate <NSObject>

@required

- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerEntryViewContentInserted;
- (void)smsComposeControllerSendStartedWithText:(NSString *)arg1;
- (void)smsComposeControllerShouldSendMessageWithText:(void *)arg1 toRecipients:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)viewServiceDidTerminateWithError:(NSError *)arg1;

@end
