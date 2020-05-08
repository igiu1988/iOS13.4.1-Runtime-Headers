/* Generated by EzioChiu.
 */

@protocol DAMessageFetchAttachmentConsumer

@required

- (void)consumeData:(NSData *)arg1 ofContentType:(NSString *)arg2 forAttachmentNamed:(NSString *)arg3 ofMessageWithServerID:(NSString *)arg4;

@optional

- (void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(NSString *)arg2 ofMessageWithServerID:(NSString *)arg3 dataWasBase64:(bool)arg4;
- (void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(NSString *)arg2 ofMessageWithServerID:(NSString *)arg3 dataWasBase64:(bool)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6;

@end
