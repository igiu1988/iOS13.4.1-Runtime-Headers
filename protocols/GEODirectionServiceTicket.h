/* Generated by EzioChiu.
 */

@protocol GEODirectionServiceTicket <NSObject>

@required

- (void)cancel;
- (bool)isDoom;
- (bool)isReroute;
- (GEOComposedRoute *)originalRoute;
- (GEODirectionsRequest *)request;
- (NSNumber *)requestPriority;
- (NSDictionary *)responseUserInfo;
- (void)submitWithHandler:(void *)arg1 auditToken:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEODirectionsResponse *, NSError *, GEODirectionsError *, void*, GEOApplicationAuditToken *, id /* block */, void*, void, id /* block */, bool, void*
- (NSArray *)waypoints;

@end
