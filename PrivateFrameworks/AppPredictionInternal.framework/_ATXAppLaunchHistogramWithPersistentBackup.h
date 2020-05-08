/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchHistogramWithPersistentBackup : _ATXAppLaunchHistogram <NSSecureCoding> {
    _ATXDataStore * _datastore;
    long long  _histogramType;
    ATXBackgroundSaver * _saver;
}

@property (nonatomic, readonly) _ATXDataStore *datastore;
@property (nonatomic, readonly) long long histogramType;

- (void).cxx_destruct;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3;
- (void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2;
- (void)addLaunchWithBundleId:(id)arg1 elapsedTime:(double)arg2 weight:(float)arg3;
- (id)datastore;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLifeInDays:(double)arg1;
- (void)flush;
- (long long)histogramType;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 loadFromDataStore:(bool)arg3 saveOnBackgroundQueue:(id)arg4;
- (id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveOnBackgroundQueue:(id)arg3;
- (bool)removeHistoryForBundleId:(id)arg1;
- (int)removeHistoryForBundleIds:(id)arg1;
- (void)removeLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 weight:(float)arg4;
- (void)resetData;

@end
