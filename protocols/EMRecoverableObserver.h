/* Generated by EzioChiu.
 */

@protocol EMRecoverableObserver <EFCancelable>

@required

- (void)performQueryWithRemoteConnection:(EMRemoteConnection *)arg1;
- (void)recoverQueryWithRemoteConnection:(EMRemoteConnection *)arg1;

@end