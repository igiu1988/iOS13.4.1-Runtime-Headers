/* Generated by EzioChiu.
 */

@protocol IMLocationManager <NSObject>

@required

- (NSError *)error;
- (CLLocation *)location;
- (bool)locationAuthorizationDenied;
- (bool)locationAuthorizationDetermined;
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(void *)arg1 updateHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, NSError *, void*
- (void)startUpdatingCurrentLocationWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, NSError *, void*

@end
