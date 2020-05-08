/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConfigurationGuardedData : NSObject {
    int  analyticsGeohashLength;
    int  analyticsMaximumNumberOfRecords;
    double  analyticsSamplingRate;
    double  analyticsTopicsSamplingRate;
    NSArray * availableVariantNames;
    float  feedbackSessionLogsExtractionsSamplingRate;
    int  feedbackSessionLogsGeohashLength;
    float  feedbackSessionLogsSamplingRate;
    double  halfValuePosition;
    bool  highLevelTopicExtractionEnabled;
    double  highLevelTopicScoreAttenuationFactor;
    double  highLevelTopicScoreThreshold;
    double  locationDecayHalfLifeSeconds;
    NSArray * musicDataCollectionAMPBundleIds;
    bool  musicDataCollectionCollectNonAMPNowPlaying;
    int  musicDataCollectionMaximumRecordsPerType;
    double  musicDataCollectionSamplingRateForAMP;
    double  musicDataCollectionSamplingRateForCTS;
    double  namedEntityDecayHalfLifeSeconds;
    NSString * naturalVariantName;
    double  nonReaderTextWeight;
    float  remoteTopicsMultiplier;
    bool  safariDataDetectorsEnabledForHighMemoryDevices;
    bool  safariDonationTitleExtractionEnabled;
    float  scoreThresholdForLocation;
    float  scoreThresholdForNamedEntity;
    float  scoreThresholdForTopic;
    _PASCFBurstTrie * topicCalibration;
    double  topicDecayHalfLifeSeconds;
    NSDictionary * topicMaps;
    NSDictionary * topicMapsScalingFactors;
    NSDictionary * topicsAlgorithmMultiplier;
    double  topicsScalingFactor;
    double  topicsSigmoidPeakValue;
    double  topicsSigmoidWidth;
    NSDictionary * topicsSourceMultiplier;
    NSString * variantName;
}

- (void).cxx_destruct;

@end
