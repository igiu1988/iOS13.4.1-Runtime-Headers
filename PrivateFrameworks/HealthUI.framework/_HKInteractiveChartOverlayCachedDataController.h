/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKInteractiveChartOverlayCachedDataController : NSObject <HKGraphSeriesDataSourceDelegate> {
    id /* block */  _completion;
    HKGraphSeriesDataSource * _dataSource;
    NSDate * _endDate;
    HKInteractiveChartOverlayViewController * _overlayViewController;
    NSDate * _startDate;
    long long  _timeScope;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) HKGraphSeriesDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) HKInteractiveChartOverlayViewController *overlayViewController;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic) long long timeScope;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)dataSource;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (id)endDate;
- (id)initWithOverlayViewController:(id)arg1 dataSource:(id)arg2 timeScope:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(id /* block */)arg6;
- (id)overlayViewController;
- (void)requestAndWaitForData;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDataSource:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setOverlayViewController:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeScope:(long long)arg1;
- (id)startDate;
- (long long)timeScope;

@end
