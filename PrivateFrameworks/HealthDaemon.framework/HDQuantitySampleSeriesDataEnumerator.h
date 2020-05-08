/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleSeriesDataEnumerator : NSObject {
    long long  _HFDKey;
    unsigned char  _UUIDBytes;
    unsigned long long  _bufferSize;
    long long  _count;
    struct deque<std::__1::tuple<double, double, float>, std::__1::allocator<std::__1::tuple<double, double, float> > > { 
        struct __split_buffer<std::__1::tuple<double, double, float> *, std::__1::allocator<std::__1::tuple<double, double, float> *> > { 
            struct tuple<double, double, float> {} **__first_; 
            struct tuple<double, double, float> {} **__begin_; 
            struct tuple<double, double, float> {} **__end_; 
            struct __compressed_pair<std::__1::tuple<double, double, float> **, std::__1::allocator<std::__1::tuple<double, double, float> *> > { 
                struct tuple<double, double, float> {} **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::tuple<double, double, float> > > { 
            unsigned long long __value_; 
        } __size_; 
    }  _data;
    long long  _dataTypeCode;
    double  _endTime;
    NSError * _fatalError;
    bool  _hasDeterminedSeriesVersion;
    bool  _hasDuration;
    bool  _hasFetchedAllData;
    bool  _hasFetchedData;
    long long  _index;
    bool  _isVersion1;
    double  _lastDatumTime;
    double  _lastFetchedDatumTime;
    struct ObjectIdentifier { 
        long long objectType; 
        unsigned long long identifier; 
    }  _objectIdentifier;
    long long  _persistentID;
    double  _previousEndTime;
    long long  _sourceID;
    double  _startTime;
    HDDatabaseTransaction * _transaction;
}

@property (nonatomic, readonly) long long HFDKey;
@property (nonatomic, readonly) unsigned char*UUIDBytesPtr;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long dataTypeCode;
@property (nonatomic, readonly) bool done;
@property (nonatomic, readonly) double endTime;
@property (nonatomic) bool hasFetchedAllData;
@property (nonatomic) bool hasFetchedData;
@property (nonatomic) double lastDatumTime;
@property (nonatomic) double lastFetchedDatumTime;
@property (nonatomic) struct ObjectIdentifier { long long x1; unsigned long long x2; } objectIdentifier;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long sourceID;
@property (nonatomic, readonly) double startTime;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)HFDKey;
- (unsigned char*)UUIDBytesPtr;
- (bool)_addToBufferTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3;
- (bool)_fillValueBufferWithError:(id*)arg1;
- (void)_unitTesting_addToBufferTimestamp:(double)arg1 value:(double)arg2 duration:(float)arg3 isLastDatum:(bool)arg4;
- (long long)compare:(id)arg1;
- (long long)count;
- (long long)dataTypeCode;
- (id)description;
- (bool)done;
- (double)endTime;
- (bool)enumerateDataToTime:(double)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (bool)hasFetchedAllData;
- (bool)hasFetchedData;
- (id)initWithTransaction:(id)arg1 persistentID:(long long)arg2 dataTypeCode:(long long)arg3 UUIDBytes:(unsigned char)arg4 startTime:(double)arg5 endTime:(double)arg6 count:(long long)arg7 sourceID:(long long)arg8 HFDKey:(long long)arg9 bufferSize:(unsigned long long)arg10;
- (double)lastDatumTime;
- (double)lastFetchedDatumTime;
- (double)nextDatumTime;
- (struct ObjectIdentifier { long long x1; unsigned long long x2; })objectIdentifier;
- (long long)persistentID;
- (bool)primeEnumeratorWithError:(id*)arg1;
- (void)setHasFetchedAllData:(bool)arg1;
- (void)setHasFetchedData:(bool)arg1;
- (void)setLastDatumTime:(double)arg1;
- (void)setLastFetchedDatumTime:(double)arg1;
- (void)setObjectIdentifier:(struct ObjectIdentifier { long long x1; unsigned long long x2; })arg1;
- (long long)sourceID;
- (double)startTime;

@end
