/* Generated by EzioChiu.
 */

@protocol UISApplicationStateXPCServerInterface <NSObject>

@required

- (void)badgeValueWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSError *, void*
- (void)nextWakeIntervalSinceReferenceDateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (oneway void)setBadgeValue:(NSObject *)arg1;
- (oneway void)setMinimumBackgroundFetchInterval:(NSNumber *)arg1;
- (oneway void)setNextWakeIntervalSinceReferenceDate:(NSNumber *)arg1;
- (oneway void)setUsesBackgroundNetwork:(NSNumber *)arg1;
- (void)usesBackgroundNetworkWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
