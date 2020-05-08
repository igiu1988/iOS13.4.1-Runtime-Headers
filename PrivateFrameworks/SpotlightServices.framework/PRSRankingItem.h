/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingItem : NSObject <SSDataCollectible> {
    PRSL2FeatureVector * _L2FeatureVector;
    struct { long long x1; unsigned long long x2[2]; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; void*x4; void *x5[0]; } * _attributes;
    unsigned short  _bundleIDType;
    double  _closestUpComingDate;
    NSString * _contentType;
    bool  _eligibleForDemotion;
    NSArray * _emailAddresses;
    float  _feedbackScore;
    NSString * _identifier;
    unsigned long long  _importantPropertiesPrefixMatched;
    unsigned long long  _importantPropertiesWordMatched;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _indexScore;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _inputToModelScore;
    bool  _isInternal;
    bool  _isPrepared;
    bool  _matchedQueryTerms;
    NSMutableArray * _matchedRecipients;
    NSMutableArray * _matchedSenders;
    NSMutableArray * _matchedVipSenders;
    double  _mostRecentUsedDate;
    float  _rawScore;
    float  _score;
    NSString * _sectionBundleIdentifier;
    NSData * _serverFeaturesJSON;
    bool  _shouldHideUnderShowMore;
    PRSRankingSpanCalculator * _spanCalculator;
    float  _withinBundleScore;
}

@property (nonatomic, retain) PRSL2FeatureVector *L2FeatureVector;
@property (nonatomic) struct { long long x1; unsigned long long x2[2]; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; void*x4; void *x5[0]; }*attributes;
@property (nonatomic) unsigned short bundleIDType;
@property (nonatomic) double closestUpComingDate;
@property (nonatomic, retain) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool eligibleForDemotion;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic) float feedbackScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long importantPropertiesPrefixMatched;
@property (nonatomic) unsigned long long importantPropertiesWordMatched;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*indexScore;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*inputToModelScore;
@property (nonatomic) bool isPrepared;
@property (nonatomic) bool matchedQueryTerms;
@property (nonatomic, retain) NSMutableArray *matchedRecipients;
@property (nonatomic, retain) NSMutableArray *matchedSenders;
@property (nonatomic, retain) NSMutableArray *matchedVipSenders;
@property (nonatomic) double mostRecentUsedDate;
@property (nonatomic) float rawScore;
@property (nonatomic) float score;
@property (nonatomic, retain) NSString *sectionBundleIdentifier;
@property (nonatomic, retain) NSData *serverFeaturesJSON;
@property (nonatomic) bool shouldHideUnderShowMore;
@property (nonatomic, retain) PRSRankingSpanCalculator *spanCalculator;
@property (readonly) Class superclass;
@property (nonatomic) float withinBundleScore;

+ (unsigned short)featureFromVirtualIdx:(unsigned long long)arg1;
+ (unsigned long long)indexOfShortcutBit;
+ (void)initialize;
+ (id)rankingDescriptorForBundleFeature:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)L2FeatureVector;
- (struct { long long x1; unsigned long long x2[2]; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; void*x4; void *x5[0]; }*)attributes;
- (unsigned short)bundleIDType;
- (double)closestUpComingDate;
- (long long)compare:(id)arg1 currentTime:(double)arg2;
- (long long)compareWithDates:(id)arg1 currentTime:(double)arg2;
- (long long)compareWithTypes:(id)arg1;
- (id)contentType;
- (id)dataCollectionBundle;
- (void)dealloc;
- (id)description;
- (bool)didMatchRankingDescriptor:(id)arg1;
- (id)displayName;
- (bool)eligibleForDemotion;
- (id)emailAddresses;
- (float)feedbackScore;
- (id)identifier;
- (unsigned long long)importantPropertiesPrefixMatched;
- (unsigned long long)importantPropertiesWordMatched;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)indexScore;
- (void)inferDateBinsFromDates:(id)arg1 intoBins:(int*)arg2;
- (id)initForParsecResultWithBundleID:(id)arg1;
- (id)initWithAttrs:(struct { long long x1; unsigned long long x2[2]; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; void*x4; void *x5[0]; }*)arg1;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)inputToModelScore;
- (id)interestingDate;
- (bool)isPrepared;
- (id)likelyDisplayTitle;
- (bool)matchedQueryTerms;
- (id)matchedRecipients;
- (id)matchedSenders;
- (id)matchedVipSenders;
- (id)moreRecentDateFromDate1:(id)arg1 date2:(id)arg2;
- (double)mostRecentUsedDate;
- (long long)passesRecencyTestWithCurrentTime:(double)arg1;
- (void)populateBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2;
- (void)populateContactFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2;
- (void)populateCrossAttributeDerivedFeaturesWithContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg1 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg2;
- (void)populateFeaturesWithEvaluator:(id)arg1 updatingBundleFeatures:(float*)arg2 withContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg3 keyboardLanguage:(id)arg4 isCJK:(bool)arg5 currentTime:(double)arg6;
- (void)populateFeaturesWithEvaluator:(id)arg1 withContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg2 keyboardLanguage:(id)arg3 isCJK:(bool)arg4 currentTime:(double)arg5 forParsecResult:(id)arg6;
- (void)populateMailFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (void)populateOtherFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (void)populateParsecAlbumFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecAnyFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecAppFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecEPubBookFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecMovieFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecPodcastFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecProfileFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecRoundTripFeatures:(id)arg1 forParsecResult:(id)arg2;
- (void)populateParsecSongFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecTvShowFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecWebVideoFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateSMSFeatures:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float*)arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg5 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg6 propertyCanFuzzyMatch:(bool)arg7 keyboardLanguage:(id)arg8 isCJK:(bool)arg9;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float*)arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(struct prs_feature_population_ctx_t { struct __CFArray {} *x1; struct __CFArray {} *x2; struct __CFArray {} *x3; unsigned char x4; float x5[28]; float x6; float x7; float x8; float x9; unsigned int x10; unsigned long long x11; unsigned long long x12; long long x13; unsigned long long x14; }*)arg5 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg6 propertyCanFuzzyMatch:(bool)arg7 keyboardLanguage:(id)arg8 isCJK:(bool)arg9 featureList:(const unsigned short*)arg10;
- (float)rawScore;
- (long long)recencyTestForVisibilityWithCurrentTime:(double)arg1;
- (float)score;
- (id)sectionBundleIdentifier;
- (bool)serializeToJSON:(void*)arg1 valuesOnly:(bool)arg2;
- (id)serverFeaturesJSON;
- (void)setAttributes:(struct { long long x1; unsigned long long x2[2]; /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*x3; void*x4; void *x5[0]; }*)arg1;
- (void)setBundleIDType:(unsigned short)arg1;
- (void)setClosestUpComingDate:(double)arg1;
- (void)setContentType:(id)arg1;
- (void)setEligibleForDemotion:(bool)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFeedbackScore:(float)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImportantPropertiesPrefixMatched:(unsigned long long)arg1;
- (void)setImportantPropertiesWordMatched:(unsigned long long)arg1;
- (void)setIndexScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setInputToModelScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setIsPrepared:(bool)arg1;
- (void)setL2FeatureVector:(id)arg1;
- (void)setMatchedQueryTerms:(bool)arg1;
- (void)setMatchedRecipients:(id)arg1;
- (void)setMatchedSenders:(id)arg1;
- (void)setMatchedVipSenders:(id)arg1;
- (void)setMostRecentUsedDate:(double)arg1;
- (void)setRawScore:(float)arg1;
- (void)setScore:(float)arg1;
- (void)setSectionBundleIdentifier:(id)arg1;
- (void)setServerFeaturesJSON:(id)arg1;
- (void)setShouldHideUnderShowMore:(bool)arg1;
- (void)setSpanCalculator:(id)arg1;
- (void)setWithinBundleScore:(float)arg1;
- (bool)shouldHideUnderShowMore;
- (id)spanCalculator;
- (void)updateAccumulatedBundleFeatures:(float*)arg1 values:(float*)arg2 feature:(unsigned long long)arg3;
- (void)updateBundleFeatures:(float*)arg1 withArrValues:(float*)arg2 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg3;
- (void)updateNumScoreDescriptorBundleFeatures:(float*)arg1 feature:(unsigned long long)arg2 featureScoreInfo:(struct PRSL2FeatureScoreInfo { unsigned short *x1; float *x2; unsigned long long x3; unsigned long long x4; }*)arg3;
- (void)updateScoreDescriptorBundleFeatures:(float*)arg1 feature:(unsigned long long)arg2;
- (float)withinBundleScore;

@end
