/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDStreamDataChunkAssembler : HMFObject {
    HMDStreamData * _assembledData;
    NSNumber * _currentSequenceNumber;
    NSMutableData * _data;
    HMDStreamDataSequenceNumber * _dataSequenceNumber;
    NSString * _type;
}

@property (copy) HMDStreamData *assembledData;
@property (copy) NSNumber *currentSequenceNumber;
@property (readonly, copy) NSMutableData *data;
@property (readonly, copy) HMDStreamDataSequenceNumber *dataSequenceNumber;
@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (bool)addDataChunk:(id)arg1 error:(id*)arg2;
- (id)assembledData;
- (id)attributeDescriptions;
- (void)createAssembledDataIfNecessaryForDataChunk:(id)arg1;
- (id)currentSequenceNumber;
- (id)data;
- (id)dataSequenceNumber;
- (id)initWithDataSequenceNumber:(id)arg1 initialStreamDataChunk:(id)arg2;
- (void)setAssembledData:(id)arg1;
- (void)setCurrentSequenceNumber:(id)arg1;
- (id)type;

@end
