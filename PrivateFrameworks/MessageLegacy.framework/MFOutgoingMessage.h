/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOutgoingMessage : MFMailMessage {
    MFMessageBody * _messageBody;
    MFMutableMessageHeaders * _messageHeaders;
}

- (void).cxx_destruct;
- (id)headers;
- (id)headersIfAvailable;
- (id)messageBody;
- (id)messageBodyIfAvailable;
- (id)messageData;
- (bool)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (id)messageDataHolder;
- (bool)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (unsigned long long)messageSize;
- (id)messageStore;
- (id)mutableHeaders;
- (void)setMessageBody:(id)arg1;
- (void)setMutableHeaders:(id)arg1;

@end
