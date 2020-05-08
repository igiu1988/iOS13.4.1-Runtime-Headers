/* Generated by EzioChiu.
 */

@protocol INMessageExport <NSObject, JSExport>

@required

- (NSString *)content;
- (NSString *)conversationIdentifier;
- (NSDate *)dateMessageWasLastRead;
- (NSDate *)dateSent;
- (NSString *)identifier;
- (id)init;
- (long long)messageEffectType;
- (long long)messageType;
- (NSNumber *)numberOfAttachments;
- (NSArray *)recipients;
- (INPerson *)sender;
- (void)setContent:(NSString *)arg1;
- (void)setConversationIdentifier:(NSString *)arg1;
- (void)setDateMessageWasLastRead:(NSDate *)arg1;
- (void)setDateSent:(NSDate *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setMessageEffectType:(long long)arg1;
- (void)setMessageType:(long long)arg1;
- (void)setNumberOfAttachments:(NSNumber *)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSender:(INPerson *)arg1;

@end
