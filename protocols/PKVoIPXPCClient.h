/* Generated by EzioChiu.
 */

@protocol PKVoIPXPCClient

@required

- (void)voipPayloadReceived:(void *)arg1 mustPostCall:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)voipPayloadReceived:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)voipRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional

- (void)voipRegistrationFailed;

@end
