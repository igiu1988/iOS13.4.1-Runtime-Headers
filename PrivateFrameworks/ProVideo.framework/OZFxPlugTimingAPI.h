/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface OZFxPlugTimingAPI : NSObject <FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, FxTimingInfo_Private, PROAPIObject> {
    struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; id x4; void *x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; struct PCString { struct __CFString {} *x_20_1_1; } x20; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_21_1_1; } x21; bool x22; bool x23; bool x24; bool x25; bool x26; bool x27; int x28; bool x29; bool x30; bool x31; bool x32; bool x33; struct OZChannelBase {} *x34; bool x35; id x36; bool x37; bool x38; unsigned long long x39; bool x40; struct PCMutex { int (**x_41_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_41_1_2; } x41; } * _plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)copyFxTime:(union { double x1; struct { /* ? */ } *x2; })arg1 toFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg2;
- (double)durationForEffect:(id)arg1;
- (void)durationFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParm:(unsigned int)arg2;
- (void)durationFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)durationOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)durationOfInputAToTransition:(id)arg1;
- (double)durationOfInputBToTransition:(id)arg1;
- (double)durationOfInputToFilter:(id)arg1;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (unsigned long long)fieldOrderForInputAToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputBToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputToFilter:(id)arg1;
- (void)frameDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)imageFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (double)imageTimeForParmId:(unsigned int)arg1 forEffect:(id)arg2 fromTimelineTime:(double)arg3;
- (void)inPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)inPointOfTimelineForEffect:(id)arg1;
- (id)initWithPlugin:(struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; id x4; void *x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; struct PCString { struct __CFString {} *x_20_1_1; } x20; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_21_1_1; } x21; bool x22; bool x23; bool x24; bool x25; bool x26; bool x27; int x28; bool x29; bool x30; bool x31; bool x32; bool x33; struct OZChannelBase {} *x34; bool x35; id x36; bool x37; bool x38; unsigned long long x39; bool x40; struct PCMutex { int (**x_41_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_41_1_2; } x41; }*)arg1;
- (void)inputAFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputATimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputBFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputBTimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputTimeForFilter:(id)arg1 fromTimelineTime:(double)arg2;
- (union { double x1; struct { /* ? */ } *x2; })invalidTime;
- (void)outPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)outPointOfTimelineForEffect:(id)arg1;
- (void)sampleDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (struct OZScene { int (**x1)(); int (**x2)(); struct PCHash128 { unsigned int x_3_1_1[4]; } x3; int x4; struct PCSharedMutex { struct mutex { struct _opaque_pthread_mutex_t { long long x_1_3_1; BOOL x_1_3_2[56]; } x_1_2_1; } x_5_1_1; struct atomic<std::__1::__thread_id> { struct __cxx_atomic_impl<std::__1::__thread_id, std::__1::__cxx_atomic_base_impl<std::__1::__thread_id> > { _Atomic struct __thread_id {} x_1_3_1; } x_2_2_1; } x_5_1_2; unsigned int x_5_1_3; struct vector<PCSharedMutex::ReaderInfo, std::__1::allocator<PCSharedMutex::ReaderInfo> > { struct ReaderInfo {} *x_4_2_1; struct ReaderInfo {} *x_4_2_2; struct __compressed_pair<PCSharedMutex::ReaderInfo *, std::__1::allocator<PCSharedMutex::ReaderInfo> > { struct ReaderInfo {} *x_3_3_1; } x_4_2_3; } x_5_1_4; } x5; struct OZSceneSettings { int (**x_6_1_1)(); int x_6_1_2; int x_6_1_3; unsigned int x_6_1_4; bool x_6_1_5; unsigned int x_6_1_6; double x_6_1_7; bool x_6_1_8; double x_6_1_9; struct AtomicWorkingGamut { struct atomic<PCWorkingGamutValue> { struct __cxx_atomic_impl<PCWorkingGamutValue, std::__1::__cxx_atomic_base_impl<PCWorkingGamutValue> > { _Atomic int x_1_4_1; } x_1_3_1; } x_10_2_1; } x_6_1_10; int x_6_1_11; int x_6_1_12; struct PCColor { struct ColorComponents { int x_1_3_1; double x_1_3_2[5]; } x_13_2_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_3_1; } x_13_2_2; } x_6_1_13; int x_6_1_14; bool x_6_1_15; unsigned int x_6_1_16; unsigned int x_6_1_17; double x_6_1_18; bool x_6_1_19; bool x_6_1_20; double x_6_1_21; int x_6_1_22; struct PCString { struct __CFString {} *x_23_2_1; } x_6_1_23; unsigned int x_6_1_24; unsigned int x_6_1_25; double x_6_1_26; unsigned int x_6_1_27; unsigned int x_6_1_28; unsigned int x_6_1_29; bool x_6_1_30; float x_6_1_31; int x_6_1_32; bool x_6_1_33; int x_6_1_34; bool x_6_1_35; int x_6_1_36; int x_6_1_37; } x6; }*)scene;
- (const struct OZSceneSettings { int (**x1)(); int x2; int x3; unsigned int x4; bool x5; unsigned int x6; double x7; bool x8; double x9; struct AtomicWorkingGamut { struct atomic<PCWorkingGamutValue> { struct __cxx_atomic_impl<PCWorkingGamutValue, std::__1::__cxx_atomic_base_impl<PCWorkingGamutValue> > { _Atomic int x_1_3_1; } x_1_2_1; } x_10_1_1; } x10; int x11; int x12; struct PCColor { struct ColorComponents { int x_1_2_1; double x_1_2_2[5]; } x_13_1_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_2_1; } x_13_1_2; } x13; int x14; bool x15; unsigned int x16; unsigned int x17; double x18; bool x19; bool x20; double x21; int x22; struct PCString { struct __CFString {} *x_23_1_1; } x23; unsigned int x24; unsigned int x25; double x26; unsigned int x27; unsigned int x28; unsigned int x29; bool x30; float x31; int x32; bool x33; int x34; bool x35; int x36; int x37; bool x38; int x39; struct FigTime { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_40_1_1; } x40; bool x41; }*)sceneSettings;
- (void)startFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParam:(unsigned int)arg2;
- (void)startFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)startTimeForEffect:(id)arg1;
- (double)startTimeOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)startTimeOfInputAToTransition:(id)arg1;
- (double)startTimeOfInputBToTransition:(id)arg1;
- (double)startTimeOfInputToFilter:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeOffsetForImageParameter:(unsigned int)arg1;
- (double)timelineDurationForEffect:(id)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromImageTime:(union { double x1; struct { /* ? */ } *x2; })arg2 forParmId:(unsigned int)arg3;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputATime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputBTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned int)arg2 forEffect:(id)arg3;
- (double)timelineTimeFromInputATime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputTime:(double)arg1 forFilter:(id)arg2;
- (double)transitionTimeFractionAtTime:(double)arg1;
- (union { double x1; struct { /* ? */ } *x2; })zeroTime;

@end
