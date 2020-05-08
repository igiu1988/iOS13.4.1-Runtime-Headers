/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction {
    long long  _conversationID;
    long long  _conversationNotificationLevel;
    long long  _originalConversationNotificationLevel;
}

@property long long conversationID;
@property (nonatomic, readonly) long long conversationNotificationLevel;
@property (nonatomic, readonly) long long originalConversationNotificationLevel;

+ (bool)supportsSecureCoding;

- (long long)conversationID;
- (long long)conversationNotificationLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationID:(long long)arg1 conversationNotificationLevel:(long long)arg2 originalConversationNotificationLevel:(long long)arg3;
- (id)initWithMessage:(id)arg1 conversationNotificationLevel:(long long)arg2;
- (long long)originalConversationNotificationLevel;
- (void)setConversationID:(long long)arg1;
- (long long)signpostType;

@end
