/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetStateMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRSetStateMessageProtobuf *state;

- (id)initWithNowPlayingState:(id)arg1;
- (unsigned long long)priority;
- (id)state;
- (unsigned long long)type;

@end
