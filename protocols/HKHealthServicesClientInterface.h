/* Generated by EzioChiu.
 */

@protocol HKHealthServicesClientInterface <NSObject>

@required

- (void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(NSError *)arg2;
- (void)clientRemote_deliverDiscoveryHealthService:(HKHealthService *)arg1 toClient:(unsigned long long)arg2 finished:(bool)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverSessionCharacteristics:(NSArray *)arg1 forService:(NSString *)arg2 toClient:(unsigned long long)arg3 withError:(NSError *)arg4;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(bool)arg3 withError:(NSError *)arg4;

@end
