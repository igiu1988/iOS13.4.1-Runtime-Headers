/* Generated by EzioChiu.
 */

@protocol IDSSocketPairMessage

@optional

- (NSData *)data;
- (bool)expectsPeerResponse;
- (NSDate *)expiryDate;
- (NSString *)messageUUID;
- (NSString *)peerResponseIdentifier;
- (unsigned int)sequenceNumber;
- (void)setExpiryDate:(NSDate *)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;
- (bool)wantsAppAck;

@end
