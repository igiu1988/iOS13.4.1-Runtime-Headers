/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioChunkForTV : NSObject {
    float  _avgPower;
    NSArray * _packets;
    float  _peakPower;
    unsigned long long  _timeStamp;
}

@property (nonatomic) float avgPower;
@property (nonatomic, retain) NSArray *packets;
@property (nonatomic) float peakPower;
@property (nonatomic) unsigned long long timeStamp;

- (void).cxx_destruct;
- (float)avgPower;
- (id)initWithXPCObject:(id)arg1;
- (id)packets;
- (float)peakPower;
- (void)setAvgPower:(float)arg1;
- (void)setPackets:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)timeStamp;
- (id)xpcObject;

@end
