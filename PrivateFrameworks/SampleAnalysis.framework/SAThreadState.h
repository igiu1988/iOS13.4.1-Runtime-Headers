/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAThreadState : NSObject <NSCopying, SASerializable> {
    int  _basePriority;
    unsigned long long  _cycles;
    SADispatchQueue * _dispatchQueue;
    unsigned long long  _endSampleIndex;
    SATimestamp * _endTimestamp;
    unsigned long long  _instructions;
    unsigned char  _ioTier;
    bool  _isDarwinBG;
    bool  _isIOPassive;
    bool  _isIdleWorkQueue;
    bool  _isRunning;
    bool  _isSuspended;
    SAFrame * _leafKernelFrame;
    SAFrame * _leafUserFrame;
    NSString * _name;
    int  _scheduledPriority;
    unsigned int  _schedulerFlags;
    unsigned long long  _startSampleIndex;
    SATimestamp * _startTimestamp;
    unsigned int  _state;
    unsigned long long  _systemTimeInNs;
    unsigned char  _threadQos;
    unsigned char  _threadQosIpcOverride;
    unsigned char  _threadQosPromote;
    unsigned char  _threadQosSyncIpcOverride;
    unsigned char  _threadRequestedQos;
    unsigned char  _threadRequestedQosOverride;
    SATimestamp * _timestampLastMadeRunnable;
    SATurnstileInfo * _turnstileInfo;
    unsigned long long  _userTimeInNs;
    unsigned long long  _voucherIdentifier;
    SAWaitInfo * _waitInfo;
}

@property int basePriority;
@property (readonly) unsigned int cpuNum;
@property (readonly) unsigned int cpuSpeedMhz;
@property (readonly) unsigned long long cpuTimeNs;
@property unsigned long long cycles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property SADispatchQueue *dispatchQueue;
@property unsigned long long endSampleIndex;
@property (retain) SATimestamp *endTimestamp;
@property (readonly) bool hasDispatchQueue;
@property (readonly) unsigned long long hash;
@property unsigned long long instructions;
@property unsigned char ioTier;
@property (readonly) bool isAbortingInterruptibleWaits;
@property (readonly) bool isAbortingInterruptibleWaitsAtSafePoints;
@property (readonly) bool isBatteryAndUserActivityValid;
@property bool isDarwinBG;
@property (readonly) bool isHaltedAtTermination;
@property bool isIOPassive;
@property (readonly) bool isIORecord;
@property bool isIdleWorkQueue;
@property (readonly) bool isInterruptRecord;
@property (readonly) bool isMicrostackshot;
@property (readonly) bool isOnBattery;
@property (readonly) bool isProcessorIdleThread;
@property (readonly) bool isRunnable;
@property bool isRunning;
@property (readonly) bool isStopped;
@property bool isSuspended;
@property (readonly) bool isTimerArmingRecord;
@property (readonly) bool isUserActive;
@property (readonly) bool isUserMode;
@property (readonly) bool isWaiting;
@property (readonly) bool isWaitingUninterruptibly;
@property (retain) SAFrame *leafKernelFrame;
@property (retain) SAFrame *leafUserFrame;
@property (readonly) unsigned char microstackshotFlags;
@property (retain) NSString *name;
@property int scheduledPriority;
@property unsigned int schedulerFlags;
@property unsigned long long startSampleIndex;
@property (retain) SATimestamp *startTimestamp;
@property unsigned int state;
@property (readonly) Class superclass;
@property unsigned long long systemTimeInNs;
@property unsigned char threadQos;
@property unsigned char threadQosIpcOverride;
@property unsigned char threadQosPromote;
@property unsigned char threadQosSyncIpcOverride;
@property unsigned char threadRequestedQos;
@property unsigned char threadRequestedQosOverride;
@property (retain) SATimestamp *timestampLastMadeRunnable;
@property (retain) SATurnstileInfo *turnstileInfo;
@property unsigned long long userTimeInNs;
@property unsigned long long voucherIdentifier;
@property (retain) SAWaitInfo *waitInfo;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; int x17; int x18; unsigned int x19; unsigned long long x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; unsigned int x28; unsigned char x29; union { unsigned short x_30_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; } x_30_1_2; } x30; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)stateWithKCDataDeltaThreadV2:(const struct thread_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11;
+ (id)stateWithKCDataDeltaThreadV3:(const struct thread_delta_snapshot_v3 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned long long x13; unsigned long long x14; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12;
+ (id)stateWithKCDataThreadV2:(const struct thread_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11;
+ (id)stateWithKCDataThreadV4:(const struct thread_snapshot_v4 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12 threadInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg13;
+ (id)stateWithStackshotThreadV1:(const struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23[4]; unsigned long long x24[4]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; BOOL x35[64]; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 leafUserFrame:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg8;
+ (id)stateWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;
+ (id)stateWithoutReferencesFromPAStyleSerializedThread:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; int x13; int x14; short x15; short x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned long long x24; }*)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; int x17; int x18; unsigned int x19; unsigned long long x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; unsigned int x28; unsigned char x29; union { unsigned short x_30_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; } x_30_1_2; } x30; unsigned long long x31; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)applyPAStyleSampleTimestamp:(id)arg1;
- (int)basePriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cpuNum;
- (unsigned int)cpuSpeedMhz;
- (unsigned long long)cpuTimeNs;
- (unsigned long long)cycles;
- (id)debugDescriptionWithThread:(id)arg1;
- (id)dispatchQueue;
- (unsigned long long)endSampleIndex;
- (id)endTimestamp;
- (bool)hasDispatchQueue;
- (bool)hasSameStackAs:(id)arg1;
- (unsigned long long)hash;
- (id)initWithKCDataDeltaThreadV2:(const struct thread_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11;
- (id)initWithKCDataDeltaThreadV3:(const struct thread_delta_snapshot_v3 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; short x7; short x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned long long x13; unsigned long long x14; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 oldThreadState:(id)arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12;
- (id)initWithKCDataThreadV2:(const struct thread_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11;
- (id)initWithKCDataThreadV4:(const struct thread_snapshot_v4 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; short x14; short x15; unsigned char x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 name:(id)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg9 waitInfo:(id)arg10 turnstileInfo:(id)arg11 threadPolicyVersion:(unsigned int)arg12 threadInstructionCycles:(const struct instrs_cycles_snapshot { unsigned long long x1; unsigned long long x2; }*)arg13;
- (id)initWithStackshotThreadV1:(const struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23[4]; unsigned long long x24[4]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; BOOL x35[64]; }*)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 startSampleIndex:(unsigned long long)arg4 endSampleIndex:(unsigned long long)arg5 leafUserFrame:(id)arg6 leafKernelFrame:(id)arg7 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg8;
- (id)initWithStartTimestamp:(id)arg1 endTimestamp:(id)arg2 startSampleIndex:(unsigned long long)arg3 endSampleIndex:(unsigned long long)arg4;
- (unsigned long long)instructions;
- (unsigned char)ioTier;
- (bool)isAbortingInterruptibleWaits;
- (bool)isAbortingInterruptibleWaitsAtSafePoints;
- (bool)isBatteryAndUserActivityValid;
- (bool)isDarwinBG;
- (bool)isEqual:(id)arg1;
- (bool)isHaltedAtTermination;
- (bool)isIOPassive;
- (bool)isIORecord;
- (bool)isIdleWorkQueue;
- (bool)isInterruptRecord;
- (bool)isMicrostackshot;
- (bool)isOnBattery;
- (bool)isProcessorIdleThread;
- (bool)isRunnable;
- (bool)isRunning;
- (bool)isStopped;
- (bool)isSuspended;
- (bool)isTimerArmingRecord;
- (bool)isUserActive;
- (bool)isUserMode;
- (bool)isWaiting;
- (bool)isWaitingUninterruptibly;
- (id)leafKernelFrame;
- (id)leafUserFrame;
- (unsigned char)microstackshotFlags;
- (id)name;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; int x17; int x18; unsigned int x19; unsigned long long x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; unsigned int x28; unsigned char x29; union { unsigned short x_30_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; } x_30_1_2; } x30; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)populateReferencesUsingPAStyleSerializedThread:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; int x13; int x14; short x15; short x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned long long x24; }*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (int)scheduledPriority;
- (unsigned int)schedulerFlags;
- (void)setBasePriority:(int)arg1;
- (void)setCycles:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEndSampleIndex:(unsigned long long)arg1;
- (void)setEndTimestamp:(id)arg1;
- (void)setInstructions:(unsigned long long)arg1;
- (void)setIoTier:(unsigned char)arg1;
- (void)setIsDarwinBG:(bool)arg1;
- (void)setIsIOPassive:(bool)arg1;
- (void)setIsIdleWorkQueue:(bool)arg1;
- (void)setIsRunning:(bool)arg1;
- (void)setIsSuspended:(bool)arg1;
- (void)setLeafKernelFrame:(id)arg1;
- (void)setLeafUserFrame:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScheduledPriority:(int)arg1;
- (void)setSchedulerFlags:(unsigned int)arg1;
- (void)setStartSampleIndex:(unsigned long long)arg1;
- (void)setStartTimestamp:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setSystemTimeInNs:(unsigned long long)arg1;
- (void)setThreadQos:(unsigned char)arg1;
- (void)setThreadQosIpcOverride:(unsigned char)arg1;
- (void)setThreadQosPromote:(unsigned char)arg1;
- (void)setThreadQosSyncIpcOverride:(unsigned char)arg1;
- (void)setThreadRequestedQos:(unsigned char)arg1;
- (void)setThreadRequestedQosOverride:(unsigned char)arg1;
- (void)setTimestampLastMadeRunnable:(id)arg1;
- (void)setTurnstileInfo:(id)arg1;
- (void)setUserTimeInNs:(unsigned long long)arg1;
- (void)setVoucherIdentifier:(unsigned long long)arg1;
- (void)setWaitInfo:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)stack;
- (id)stackIgnoringKernelStackWithLeafFrame:(id)arg1;
- (unsigned long long)startSampleIndex;
- (id)startTimestamp;
- (unsigned int)state;
- (unsigned long long)systemTimeInNs;
- (unsigned char)threadQos;
- (unsigned char)threadQosIpcOverride;
- (unsigned char)threadQosPromote;
- (unsigned char)threadQosSyncIpcOverride;
- (unsigned char)threadRequestedQos;
- (unsigned char)threadRequestedQosOverride;
- (id)timestampLastMadeRunnable;
- (id)turnstileInfo;
- (unsigned long long)userTimeInNs;
- (unsigned long long)voucherIdentifier;
- (id)waitInfo;

@end
