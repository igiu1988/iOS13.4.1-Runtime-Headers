/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

@interface PRContactWhitelist : NSObject <PRBeaconListenerDelegate> {
    NSObject<OS_os_log> * _logger;
    PRBeaconListener * _nearbyDaemonSession;
    bool  _needToRestart;
    NSMutableArray * _whitelist;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addTrustedContact:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)beaconListener:(id)arg1 didFailWithError:(id)arg2;
- (void)clear:(id /* block */)arg1;
- (id)init;
- (void)removeTrustedContact:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
