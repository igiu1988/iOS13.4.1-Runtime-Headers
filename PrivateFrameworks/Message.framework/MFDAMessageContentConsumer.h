/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer> {
    <MFCollectingDataConsumer> * _alternatePartConsumer;
    NSMutableData * _bodyData;
    <MFMessageDataConsumerFactory> * _consumerFactory;
    <MFCollectingDataConsumer> * _dataConsumer;
    bool  _didBeginStreaming;
    DAMailMessage * _message;
    int  _requestedFormat;
    bool  _succeeded;
    double  _timeOfLastActivity;
    bool  _triedCreatingAlternatePartConsumer;
}

@property (nonatomic, retain) <MFCollectingDataConsumer> *alternatePartConsumer;
@property (nonatomic, readonly) NSMutableData *bodyData;
@property (nonatomic, retain) <MFMessageDataConsumerFactory> *consumerFactory;
@property (nonatomic, retain) <MFCollectingDataConsumer> *dataConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DAMailMessage *message;
@property (nonatomic) int requestedFormat;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeOfLastActivity;

- (void).cxx_destruct;
- (id)alternatePartConsumer;
- (id)bodyData;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (id)consumerFactory;
- (id)data;
- (id)dataConsumer;
- (id)dataConsumerForPart:(id)arg1;
- (bool)didBeginStreaming;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (id)message;
- (int)requestedFormat;
- (void)setAlternatePartConsumer:(id)arg1;
- (void)setConsumerFactory:(id)arg1;
- (void)setDataConsumer:(id)arg1;
- (void)setRequestedFormat:(int)arg1;
- (bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (bool)succeeded;
- (double)timeOfLastActivity;

@end
