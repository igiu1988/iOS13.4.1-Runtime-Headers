/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

@interface SGQRConversationTracker : NSObject {
    _PASLRUCache * _conversations;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)addMessage:(id)arg1 forContext:(id)arg2 time:(id)arg3;
- (void)clear;
- (id)conversationForContext:(id)arg1;
- (id)init;

@end