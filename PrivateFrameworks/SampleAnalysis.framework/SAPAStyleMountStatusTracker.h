/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleMountStatusTracker : NSObject {
    SAMountStatusTracker * _tracker;
}

@property (retain) SAMountStatusTracker *tracker;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; unsigned int x2; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; unsigned int x2; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setTracker:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)tracker;

@end
