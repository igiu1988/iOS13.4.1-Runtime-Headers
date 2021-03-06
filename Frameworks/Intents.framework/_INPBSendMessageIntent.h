/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSendMessageIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSendMessageIntent> {
    bool  __encodeLegacyGloryData;
    NSArray * _attachments;
    _INPBString * _content;
    NSString * _conversationIdentifier;
    int  _effect;
    _INPBString * _groupName;
    struct { 
        unsigned int effect : 1; 
        unsigned int messageType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _messageType;
    NSArray * _recipients;
    _INPBContact * _sender;
    NSString * _serviceName;
    _INPBDataString * _speakableGroupName;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, readonly) unsigned long long attachmentsCount;
@property (nonatomic, retain) _INPBString *content;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effect;
@property (nonatomic, retain) _INPBString *groupName;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasConversationIdentifier;
@property (nonatomic) bool hasEffect;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasMessageType;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic, readonly) bool hasSpeakableGroupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int messageType;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic, retain) _INPBContact *sender;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, retain) _INPBDataString *speakableGroupName;
@property (readonly) Class superclass;

+ (Class)attachmentsType;
+ (Class)recipientType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsEffect:(id)arg1;
- (int)StringAsMessageType:(id)arg1;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addAttachments:(id)arg1;
- (void)addRecipient:(id)arg1;
- (id)attachments;
- (id)attachmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attachmentsCount;
- (void)clearAttachments;
- (void)clearRecipients;
- (id)content;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)effect;
- (id)effectAsString:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasEffect;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasMessageType;
- (bool)hasSender;
- (bool)hasServiceName;
- (bool)hasSpeakableGroupName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (id)sender;
- (id)serviceName;
- (void)setAttachments:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setEffect:(int)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHasEffect:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (id)speakableGroupName;
- (void)writeTo:(id)arg1;

@end
