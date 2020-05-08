/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMessageStoreSearchResult : NSObject {
    NSDate * _continueOffset;
    NSMutableDictionary * _mailboxToRemoteIdDictionary;
}

@property (nonatomic, retain) NSDate *continueOffset;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSMutableDictionary *mailboxToRemoteIdDictionary;

- (void).cxx_destruct;
- (void)addRemoteID:(id)arg1 mailbox:(id)arg2;
- (id)continueOffset;
- (unsigned long long)count;
- (void)enumerateMailboxesAndRemoteIDsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)mailboxToRemoteIdDictionary;
- (void)setContinueOffset:(id)arg1;
- (void)setMailboxToRemoteIdDictionary:(id)arg1;

@end
