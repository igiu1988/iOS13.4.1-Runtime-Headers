/* Generated by EzioChiu.
 */

@protocol _PARFlightResponse <NSObject>

@required

- (NSData *)apiData;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setApiData:(NSData *)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end