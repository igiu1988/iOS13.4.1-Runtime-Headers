/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSAppleCareDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    id /* block */  _disconnectedBlock;
    IDSDaemonRequestTimer * _requestTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;
- (void)daemonDisconnected;
- (id)initWithDisconnectedBlockAndNoTimeout:(id /* block */)arg1;
- (id)initWithRequestTimer:(id)arg1;

@end
