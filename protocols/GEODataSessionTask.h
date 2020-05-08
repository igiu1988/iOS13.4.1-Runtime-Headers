/* Generated by EzioChiu.
 */

@protocol GEODataSessionTask <NSObject>

@required

- (void)cancel;
- (GEOClientMetrics *)clientMetrics;
- (NSURL *)downloadedFileURL;
- (NSError *)error;
- (bool)failedDueToCancel;
- (unsigned long long)incomingPayloadSize;
- (bool)mptcpNegotiated;
- (unsigned long long)outgoingPayloadSize;
- (<NSObject> *)parsedResponse;
- (bool)protocolBufferHasPreamble;
- (NSData *)receivedData;
- (bool)receivedRNFNotification;
- (NSString *)remoteAddressAndPort;
- (<GEORequestCounterTicket> *)requestCounterTicket;
- (unsigned long long)requestedMultipathServiceType;
- (void)start;

@end
