/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <NSCopying> {
    NSString * _associatedMessageGuid;
    unsigned int  _associatedMessageRangeLength;
    unsigned int  _associatedMessageRangeLocation;
    long long  _associatedMessageType;
    NSString * _baloonBundleId;
    unsigned long long  _expireState;
    NSString * _expressiveSendId;
    struct { 
        unsigned int associatedMessageType : 1; 
        unsigned int expireState : 1; 
        unsigned int timeDelivered : 1; 
        unsigned int timeExpressiveSentPlayed : 1; 
        unsigned int timePlayed : 1; 
        unsigned int timeRead : 1; 
        unsigned int associatedMessageRangeLength : 1; 
        unsigned int associatedMessageRangeLocation : 1; 
        unsigned int version : 1; 
    }  _has;
    NSString * _messageBody;
    NSData * _messageBodyData;
    NSString * _messageSubject;
    NSData * _messageSummaryInfo;
    NSData * _padding;
    NSData * _payloadData;
    unsigned long long  _timeDelivered;
    unsigned long long  _timeExpressiveSentPlayed;
    unsigned long long  _timePlayed;
    unsigned long long  _timeRead;
    unsigned int  _version;
}

@property (nonatomic, retain) NSString *associatedMessageGuid;
@property (nonatomic) unsigned int associatedMessageRangeLength;
@property (nonatomic) unsigned int associatedMessageRangeLocation;
@property (nonatomic) long long associatedMessageType;
@property (nonatomic, retain) NSString *baloonBundleId;
@property (nonatomic) unsigned long long expireState;
@property (nonatomic, retain) NSString *expressiveSendId;
@property (nonatomic, readonly) bool hasAssociatedMessageGuid;
@property (nonatomic) bool hasAssociatedMessageRangeLength;
@property (nonatomic) bool hasAssociatedMessageRangeLocation;
@property (nonatomic) bool hasAssociatedMessageType;
@property (nonatomic, readonly) bool hasBaloonBundleId;
@property (nonatomic) bool hasExpireState;
@property (nonatomic, readonly) bool hasExpressiveSendId;
@property (nonatomic, readonly) bool hasMessageBody;
@property (nonatomic, readonly) bool hasMessageBodyData;
@property (nonatomic, readonly) bool hasMessageSubject;
@property (nonatomic, readonly) bool hasMessageSummaryInfo;
@property (nonatomic, readonly) bool hasPadding;
@property (nonatomic, readonly) bool hasPayloadData;
@property (nonatomic) bool hasTimeDelivered;
@property (nonatomic) bool hasTimeExpressiveSentPlayed;
@property (nonatomic) bool hasTimePlayed;
@property (nonatomic) bool hasTimeRead;
@property (nonatomic) bool hasVersion;
@property (nonatomic, retain) NSString *messageBody;
@property (nonatomic, retain) NSData *messageBodyData;
@property (nonatomic, retain) NSString *messageSubject;
@property (nonatomic, retain) NSData *messageSummaryInfo;
@property (nonatomic, retain) NSData *padding;
@property (nonatomic, retain) NSData *payloadData;
@property (nonatomic) unsigned long long timeDelivered;
@property (nonatomic) unsigned long long timeExpressiveSentPlayed;
@property (nonatomic) unsigned long long timePlayed;
@property (nonatomic) unsigned long long timeRead;
@property (nonatomic) unsigned int version;

- (id)associatedMessageGuid;
- (unsigned int)associatedMessageRangeLength;
- (unsigned int)associatedMessageRangeLocation;
- (long long)associatedMessageType;
- (id)baloonBundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)expireState;
- (id)expressiveSendId;
- (bool)hasAssociatedMessageGuid;
- (bool)hasAssociatedMessageRangeLength;
- (bool)hasAssociatedMessageRangeLocation;
- (bool)hasAssociatedMessageType;
- (bool)hasBaloonBundleId;
- (bool)hasExpireState;
- (bool)hasExpressiveSendId;
- (bool)hasMessageBody;
- (bool)hasMessageBodyData;
- (bool)hasMessageSubject;
- (bool)hasMessageSummaryInfo;
- (bool)hasPadding;
- (bool)hasPayloadData;
- (bool)hasTimeDelivered;
- (bool)hasTimeExpressiveSentPlayed;
- (bool)hasTimePlayed;
- (bool)hasTimeRead;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageBody;
- (id)messageBodyData;
- (id)messageSubject;
- (id)messageSummaryInfo;
- (id)padding;
- (id)payloadData;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedMessageGuid:(id)arg1;
- (void)setAssociatedMessageRangeLength:(unsigned int)arg1;
- (void)setAssociatedMessageRangeLocation:(unsigned int)arg1;
- (void)setAssociatedMessageType:(long long)arg1;
- (void)setBaloonBundleId:(id)arg1;
- (void)setExpireState:(unsigned long long)arg1;
- (void)setExpressiveSendId:(id)arg1;
- (void)setHasAssociatedMessageRangeLength:(bool)arg1;
- (void)setHasAssociatedMessageRangeLocation:(bool)arg1;
- (void)setHasAssociatedMessageType:(bool)arg1;
- (void)setHasExpireState:(bool)arg1;
- (void)setHasTimeDelivered:(bool)arg1;
- (void)setHasTimeExpressiveSentPlayed:(bool)arg1;
- (void)setHasTimePlayed:(bool)arg1;
- (void)setHasTimeRead:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setMessageBody:(id)arg1;
- (void)setMessageBodyData:(id)arg1;
- (void)setMessageSubject:(id)arg1;
- (void)setMessageSummaryInfo:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setTimeDelivered:(unsigned long long)arg1;
- (void)setTimeExpressiveSentPlayed:(unsigned long long)arg1;
- (void)setTimePlayed:(unsigned long long)arg1;
- (void)setTimeRead:(unsigned long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned long long)timeDelivered;
- (unsigned long long)timeExpressiveSentPlayed;
- (unsigned long long)timePlayed;
- (unsigned long long)timeRead;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
