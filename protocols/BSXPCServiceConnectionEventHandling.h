/* Generated by EzioChiu.
 */

@protocol BSXPCServiceConnectionEventHandling <NSObject>

@required

- (void)connection:(BSXPCServiceConnection *)arg1 handleConnection:(BSXPCServiceConnection *)arg2;
- (void)connection:(BSXPCServiceConnection *)arg1 handleError:(NSError *)arg2;
- (void)connection:(BSXPCServiceConnection *)arg1 handleMessage:(id <BSXPCServiceConnectionMessage>)arg2;
- (void)connectionActivated:(BSXPCServiceConnection *)arg1;
- (void)connectionHandleNoMoreChildren:(BSXPCServiceConnection *)arg1;
- (void)connectionInterrupted:(BSXPCServiceConnection *)arg1;
- (void)connectionInvalidated:(BSXPCServiceConnection *)arg1;

@end
