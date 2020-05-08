/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAHIDEvent : NSObject {
    unsigned long long  _hidEventMachAbs;
    double  _hidEventTimestamp;
    unsigned int  _hidEventType;
    NSMutableArray * _steps;
}

@property (readonly) unsigned long long hidEventMachAbs;
@property (readonly) double hidEventTimestamp;
@property (readonly) unsigned int hidEventType;
@property (readonly) NSArray *steps;

+ (id)classDictionaryKey;
+ (id)hidEventWithHIDEventType:(unsigned int)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
+ (void)parseKTrace:(struct ktrace_session { }*)arg1 findingHIDEvents:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addKTraceEvent:(struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 fromSession:(struct ktrace_session { }*)arg2;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (unsigned long long)hidEventMachAbs;
- (double)hidEventTimestamp;
- (unsigned int)hidEventType;
- (id)initWithHIDEventType:(unsigned int)arg1 atMachTime:(double)arg2 andMachAbs:(unsigned long long)arg3;
- (id)initWithSerializedHIDEvent:(const struct { unsigned long long x1; double x2; unsigned long long x3; unsigned int x4; unsigned int x5; }*)arg1;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)steps;

@end
