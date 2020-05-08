/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputStream : MRAVBufferedOutputStream {
    bool  _channelIsOpen;
    bool  _channelOpen;
    AVOutputContextCommunicationChannel * _communicationChannel;
    long long  _connectionType;
    AVOutputContext * _outputContext;
}

@property (nonatomic) bool channelIsOpen;
@property (getter=isChannelOpen, nonatomic, readonly) bool channelOpen;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *communicationChannel;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) AVOutputContext *outputContext;

- (void).cxx_destruct;
- (void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1;
- (bool)channelIsOpen;
- (id)communicationChannel;
- (long long)connectionType;
- (void)dealloc;
- (id)description;
- (bool)hasSpaceAvailable;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToMemory;
- (id)initWithCommunicationChannel:(id)arg1;
- (id)initWithOutputContext:(id)arg1 connectionType:(long long)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 append:(bool)arg2;
- (bool)isChannelOpen;
- (id)outputContext;
- (void)setChannelIsOpen:(bool)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
