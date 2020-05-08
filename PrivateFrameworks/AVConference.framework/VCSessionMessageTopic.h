/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSessionMessageTopic : NSObject {
    bool  allowConcurrent;
    NSArray * associatedStrings;
    id  controlChannelWeak;
    NSObject<OS_dispatch_queue> * inMessageQueue;
    bool  isSendingEnabled;
    long long  latestOutgoingMessageIndex;
    NSObject<OS_dispatch_queue> * outMessageQueue;
    id /* block */  receiveBlock;
    bool  shouldEncodeTopicKeyInMessage;
    NSString * topicKey;
    NSString * topicPrefix;
    NSMutableDictionary * transactionCache;
}

@property (setter=setIsSendingEnabled:, nonatomic) bool isSendingEnabled;
@property (readonly) NSString *topicKey;

- (void)clearTransactionCacheForParticipant:(id)arg1;
- (void)dealloc;
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(bool)arg3 controlChannel:(id)arg4 receiveHandler:(id /* block */)arg5;
- (bool)isDuplicateMessageID:(id)arg1 messageHistory:(id)arg2 participantID:(id)arg3;
- (bool)isSendingEnabled;
- (bool)isStringAssociated:(id)arg1;
- (id)messageForCommand:(id)arg1;
- (void)passMessage:(id)arg1 sequence:(int)arg2 fromParticipant:(id)arg3;
- (void)purgeExpiredEntries:(double)arg1 messageHistory:(id)arg2 participantID:(id)arg3;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 withSequence:(long long)arg3 numRetries:(long long)arg4;
- (void)setIsSendingEnabled:(bool)arg1;
- (id)topicKey;

@end
