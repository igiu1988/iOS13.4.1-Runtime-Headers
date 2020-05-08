/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlAlgorithmLowLatencyNOWRD : NSObject <VCRateControlAlgorithm> {
    unsigned int  _actualBitrate;
    unsigned int  _actualSendBitrate;
    bool  _belowNoRampUpBandwidth;
    struct VCRateControlAlgorithmConfig { 
        unsigned int *tierBitrates; 
        int initialTierIndex; 
        int maxTierIndex; 
        int minTierIndex; 
        int lowestNonEmergencyTierIndex; 
        int lowestEffectiveBWETierIndex; 
        int lowestTierIndexReactToNoServerActivity; 
        int rampUpTierNumber; 
        int rampDownTierNumber; 
        int rampUpAdditionalTierAtInitial; 
        int rampDownAdditionalTierAtInitial; 
        int rampDownBurstyLossThreshold; 
        int lowestTierForBurstyLossRampDown; 
        double rampDownNOWRDThreshold; 
        double rampDownNOWRDAccThreshold; 
        double rampDownAggressiveNOWRDThreshold; 
        double rampDownAggressiveNOWRDAccThreshold; 
        double rampDownConstantOWRDDuration; 
        double rampDownOvershootDuration; 
        double rampDownOvershootNextTierRatio; 
        double rampUpFrozenDuration; 
        double rampUpSettleDuration; 
        double rampUpOWRDThreshold; 
        double rampUpNOWRDThreshold; 
        double rampUpNOWRDAccThreshold; 
        double rampUpOverBandwidthCalmDuration; 
        int rampUpOverBandwidthTierNumber; 
        int rampDownLossEventThreshold; 
        double rampUpFrozenPLRThreshold; 
        double rampUpRateLimitedRatio; 
        double unstableRateLimitedDuration; 
        double congestionWaitDuration; 
        double owrdWindowDuration; 
        double owrdShortWindowDuration; 
        double minimumNOWRDTimeDifference; 
        double owrdInitialRampUpReadyDuration; 
        unsigned int owrdHistorySize; 
        unsigned int owrdMininumHistorySize; 
        unsigned int fastRampDownBitrateRange; 
        unsigned int fastRampUpBitrateRange; 
        unsigned int consecutiveRampDownThresholdForCongestion; 
        bool receivedBandwidthEstimationEnabled; 
        bool basebandAdaptationEnabled; 
        bool rateLimitedEnabled; 
        int stabilizationScheme; 
        double rampDownNBDCDThreshold; 
        double rampDownAggressiveNBDCDThreshold; 
        double rampDownNormalizedQueuingDelayThreshold; 
        double rampDownMediumQueuingDelayThreshold; 
        double rampDownHighQueuingDelayThreshold; 
        double rampDownEmergencyTierCoolDownTime; 
        double rampUpNBDCDThreshold; 
        double rampUpQueuingDelayThreshold; 
        double rampUpNBDCDCoolDownTime; 
        double rampUpAudioFractionCoolDownTime; 
        double autoResumeDurationAfterPaused; 
        bool oscillationDetectionEnabled; 
        double oscillationCoolDownTime; 
        int oscillationDeviationTierNumber; 
        int oscillationDeviationCountThreshold; 
    }  _config;
    int  _currentTierIndex;
    bool  _didMBLRampDown;
    unsigned short  _echoedTimestamp;
    unsigned int  _fastRampDownBitrateRange;
    double  _firstBelowNoRampUpBandwidthTime;
    unsigned int  _instantBitrate;
    bool  _isCongested;
    bool  _isFirstTimestampArrived;
    bool  _isNewRateSentOut;
    bool  _isOWRDConstant;
    bool  _isOWRDListReady;
    bool  _isOvershoot;
    bool  _isPeriodicLoggingEnabled;
    bool  _isRampUpSettling;
    bool  _isSendBitrateLimited;
    double  _lastCongestionTime;
    double  _lastNoOvershootBWEstimationTime;
    double  _lastOWRDChangeTime;
    double  _lastPositiveOWRDTime;
    double  _lastRampDownTime;
    unsigned int  _lastRateChangeCounter;
    double  _lastSendDataTime;
    unsigned int  _localBandwidthEstimation;
    void * _logDump;
    unsigned int  _maxBurstyLoss;
    VCRateControlMediaController * _mediaController;
    unsigned int  _mostBurstLoss;
    unsigned int  _newOWRDSampleCollected;
    double  _nowrd;
    double  _nowrdAcc;
    double  _nowrdShort;
    double  _nwConnectionAvgDelay;
    unsigned int  _nwConnectionAvgThroughput;
    unsigned int  _nwConnectionMaxThroughput;
    int  _nwConnectionRateTrendSuggestion;
    double  _owrd;
    struct { 
        double time[100]; 
        double owrd[100]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
        double nowrd; 
        double nowrdShort; 
        double nowrdAcc; 
        bool isOWRDListTooShortDuringInitialRampUp; 
    }  _owrdList;
    double  _packetLossRate;
    double  _packetLossRateVideo;
    bool  _paused;
    double  _previousNOWRD;
    int  _previousTierIndex;
    unsigned short  _previousTimestamp;
    unsigned short  _queuingDelayTimestamp;
    int  _rampDownStatus;
    double  _rampUpFrozenTime;
    int  _rampUpStatus;
    unsigned int  _rateChangeCounter;
    unsigned int  _rateControlCounter;
    double  _rateControlTime;
    unsigned int  _receiveTimestamp;
    unsigned int  _remoteBandwidthEstimation;
    double  _roundTripTime;
    double  _sendBitrateLimitedStartTime;
    double  _sendBitrateStartTime;
    bool  _shouldBlockRampUpForNWConnection;
    int  _state;
    unsigned int  _targetBitrate;
    unsigned int  _timestampWrapAroundCounter;
    unsigned int  _totalPacketReceived;
    unsigned int  _worstRecentBurstLoss;
    double  _worstRecentRoundTripTime;
}

@property (nonatomic, readonly) unsigned int actualBitrate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didMBLRampDown;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCongested;
@property (nonatomic, readonly) bool isNewRateSentOut;
@property (nonatomic, readonly) bool isSendBitrateLimited;
@property (nonatomic) unsigned int localBandwidthEstimation;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic, readonly) unsigned int mostBurstLoss;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) double packetLossRate;
@property (nonatomic, readonly) double packetLossRateVideo;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, readonly) unsigned int rateChangeCounter;
@property (nonatomic, readonly) double roundTripTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int targetBitrate;
@property (nonatomic, readonly) unsigned int totalPacketReceived;
@property (nonatomic, readonly) unsigned int worstRecentBurstLoss;
@property (nonatomic, readonly) double worstRecentRoundTripTime;

- (unsigned int)actualBitrate;
- (void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2;
- (void)checkBandwidthOvershoot;
- (void)checkCongestionStatus;
- (void)checkRampUpSettlingStatus;
- (id)className;
- (void)configure:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; int x27; int x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; bool x42; bool x43; bool x44; int x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; bool x57; double x58; int x59; int x60; })arg1 restartRequired:(bool)arg2;
- (void)dealloc;
- (bool)didMBLRampDown;
- (bool)doRateControlWithNWConnectionStatistics:(struct { int x1; double x2; bool x3; bool x4; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_5_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; unsigned int x_2_2_13; unsigned int x_2_2_14; double x_2_2_15; unsigned int x_2_2_16; } x_5_1_2; struct { double x_3_2_1; double x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned long long x_3_2_8; } x_5_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_5_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_5_1_5; } x5; })arg1;
- (bool)doRateControlWithStatistics:(struct { int x1; double x2; bool x3; bool x4; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_5_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; unsigned int x_2_2_13; unsigned int x_2_2_14; double x_2_2_15; unsigned int x_2_2_16; } x_5_1_2; struct { double x_3_2_1; double x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned long long x_3_2_8; } x_5_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_5_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_5_1_5; } x5; })arg1;
- (bool)doRateControlWithVCRCStatistics:(struct { int x1; double x2; bool x3; bool x4; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_5_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; double x_2_2_12; unsigned int x_2_2_13; unsigned int x_2_2_14; double x_2_2_15; unsigned int x_2_2_16; } x_5_1_2; struct { double x_3_2_1; double x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned int x_3_2_7; unsigned long long x_3_2_8; } x_5_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_5_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_5_1_5; } x5; })arg1;
- (void)enableBasebandDump:(void*)arg1;
- (void)enableLogDump:(void*)arg1 enablePeriodicLogging:(bool)arg2;
- (double)getDoubleTimeFromTimestamp:(unsigned int)arg1 timestampTick:(unsigned int)arg2 wrapAroundCounter:(unsigned int)arg3;
- (unsigned short)getTimestampFromMicroTime:(double)arg1;
- (id)init;
- (bool)isCongested;
- (bool)isNewRateSentOut;
- (bool)isPaused;
- (bool)isSendBitrateLimited;
- (bool)keepOvershootingRampDownBandwidth;
- (unsigned int)localBandwidthEstimation;
- (void)logToDumpFilesWithString:(id)arg1;
- (id)mediaController;
- (unsigned int)mostBurstLoss;
- (double)owrd;
- (double)packetLossRate;
- (double)packetLossRateVideo;
- (void)printRateControlInfoToLogDump;
- (int)rampDownTier;
- (int)rampDownTierDueToNWConnection;
- (int)rampUpTier;
- (unsigned int)rateChangeCounter;
- (bool)recentlyGoAboveRampUpBandwidth;
- (void)resetRampingStatus;
- (double)roundTripTime;
- (void)setDidMBLRampDown:(bool)arg1;
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;
- (void)setMediaController:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRateChangeCounter;
- (bool)shouldRampDown;
- (bool)shouldRampDownDueToNOWRD;
- (bool)shouldRampDownDueToNOWRDAcc;
- (bool)shouldRampDownDueToNWConnection;
- (bool)shouldRampUp;
- (bool)shouldRampUpDueToNWConnection;
- (void)stateChangeTo:(int)arg1;
- (void)stateEnter;
- (void)stateExit;
- (unsigned int)targetBitrate;
- (unsigned int)totalPacketReceived;
- (void)updateInternalStatus;
- (void)updateSendBitrateAndCheckIdlePeriod:(unsigned int)arg1 instantBitrate:(unsigned int)arg2;
- (unsigned int)worstRecentBurstLoss;
- (double)worstRecentRoundTripTime;

@end
