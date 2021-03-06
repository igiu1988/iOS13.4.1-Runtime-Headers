/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface PowerUIMLTwoStageModelPredictor : NSObject <PowerUIPredictor> {
    double  _adjustedDuration;
    <_CDUserContext> * _context;
    NSDate * _deadline;
    MLModel * _durationModel;
    MLModel * _engageModel;
    NSString * _experimentID;
    double  _lastDurationResult;
    double  _lastEngagementResult;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    double  _minInputChargeDuration;
    double  _pluginBatteryLevel;
    NSDate * _pluginDate;
    NSObject<OS_os_log> * _statusLog;
    <_DKKnowledgeQuerying> * _store;
    double  _threshold;
    NSString * _treatmentID;
    TRIClient * _trialClient;
    TRITrackingId * _trialTrackingID;
}

@property (nonatomic) double adjustedDuration;
@property (nonatomic, retain) <_CDUserContext> *context;
@property (nonatomic, retain) NSDate *deadline;
@property (nonatomic, readonly) MLModel *durationModel;
@property (nonatomic, readonly) MLModel *engageModel;
@property (retain) NSString *experimentID;
@property (nonatomic) double lastDurationResult;
@property (nonatomic) double lastEngagementResult;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) double minInputChargeDuration;
@property (nonatomic) double pluginBatteryLevel;
@property (nonatomic, retain) NSDate *pluginDate;
@property (nonatomic, retain) NSObject<OS_os_log> *statusLog;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *store;
@property (nonatomic) double threshold;
@property (retain) NSString *treatmentID;
@property (nonatomic, retain) TRIClient *trialClient;
@property (retain) TRITrackingId *trialTrackingID;

- (void).cxx_destruct;
- (double)adjustedChargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 forStatus:(bool)arg5;
- (double)adjustedDuration;
- (id)arrayWithShape:(id)arg1 values:(id)arg2 type:(long long)arg3;
- (double)batteryLevelAtDate:(id)arg1;
- (double)chargingDecision:(unsigned long long)arg1 withPluginDate:(id)arg2 withPluginBatteryLevel:(double)arg3 forDate:(id)arg4 withLog:(id)arg5;
- (id)context;
- (double)currentBatteryLevel;
- (id)deadline;
- (void)deleteCompiledModels;
- (id)durationModel;
- (id)durationModelBoltID;
- (unsigned long long)durationModelVersion;
- (id)engageModel;
- (id)engagementModelBoltID;
- (unsigned long long)engagementModelVersion;
- (id)events:(id)arg1 forHourBin:(unsigned long long)arg2 pluginDate:(id)arg3;
- (id)experimentID;
- (double)getHourBinID:(id)arg1 forHourBin:(unsigned long long)arg2;
- (id)getInputFeatures:(double)arg1 events:(id)arg2 pluginBatteryLevel:(unsigned long long)arg3 timeFromPlugin:(double)arg4 pluginDate:(id)arg5 pluginHour:(double)arg6 withLog:(id)arg7;
- (id)getPluginEventsBefore:(id)arg1 withMinimumDuration:(double)arg2;
- (id)init;
- (double)lastDurationResult;
- (double)lastEngagementResult;
- (double)loadAdjustedHours;
- (double)loadMinInputChargeDuration;
- (id)loadModelFromPath:(id)arg1 deleteExistingFiles:(bool)arg2;
- (double)loadThreshold;
- (id)loadTrialDurationModelByDeletingExistingModel:(bool)arg1;
- (id)loadTrialEngageModelByDeletingExistingModel:(bool)arg1;
- (void)loadTrialUpdates;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)log;
- (double)meanOf:(id)arg1;
- (double)medianOf:(id)arg1;
- (double)minInputChargeDuration;
- (unsigned long long)modelVersion;
- (double)pluginBatteryLevel;
- (id)pluginDate;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1;
- (void)resetSavedDeadline;
- (void)setAdjustedDuration:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setDeadline:(id)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setLastDurationResult:(double)arg1;
- (void)setLastEngagementResult:(double)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLog:(id)arg1;
- (void)setMinInputChargeDuration:(double)arg1;
- (void)setPluginBatteryLevel:(double)arg1;
- (void)setPluginDate:(id)arg1;
- (void)setStatusLog:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setThreshold:(double)arg1;
- (void)setTreatmentID:(id)arg1;
- (void)setTrialClient:(id)arg1;
- (void)setTrialTrackingID:(id)arg1;
- (double)standardDeviationOf:(id)arg1;
- (id)statusLog;
- (id)store;
- (double)threshold;
- (id)timeStringFromDate:(id)arg1;
- (id)treatmentID;
- (id)trialClient;
- (id)trialTrackingID;

@end
