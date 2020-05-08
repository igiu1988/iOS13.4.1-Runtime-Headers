/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
 */

@interface engageModelInput : NSObject <MLFeatureProvider> {
    double  _cnt_dur_1;
    double  _cnt_dur_16;
    double  _cnt_dur_2;
    double  _cnt_dur_24;
    double  _cnt_dur_4;
    double  _cnt_dur_8;
    double  _med_dur_1;
    double  _med_dur_16;
    double  _med_dur_2;
    double  _med_dur_24;
    double  _med_dur_4;
    double  _med_dur_8;
    double  _plugin_battery_level;
    double  _std_dur_1;
    double  _std_dur_16;
    double  _std_dur_2;
    double  _std_dur_24;
    double  _std_dur_4;
    double  _std_dur_8;
    double  _time_from_plugin;
}

@property (nonatomic) double cnt_dur_1;
@property (nonatomic) double cnt_dur_16;
@property (nonatomic) double cnt_dur_2;
@property (nonatomic) double cnt_dur_24;
@property (nonatomic) double cnt_dur_4;
@property (nonatomic) double cnt_dur_8;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) double med_dur_1;
@property (nonatomic) double med_dur_16;
@property (nonatomic) double med_dur_2;
@property (nonatomic) double med_dur_24;
@property (nonatomic) double med_dur_4;
@property (nonatomic) double med_dur_8;
@property (nonatomic) double plugin_battery_level;
@property (nonatomic) double std_dur_1;
@property (nonatomic) double std_dur_16;
@property (nonatomic) double std_dur_2;
@property (nonatomic) double std_dur_24;
@property (nonatomic) double std_dur_4;
@property (nonatomic) double std_dur_8;
@property (nonatomic) double time_from_plugin;

- (double)cnt_dur_1;
- (double)cnt_dur_16;
- (double)cnt_dur_2;
- (double)cnt_dur_24;
- (double)cnt_dur_4;
- (double)cnt_dur_8;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithPlugin_battery_level:(double)arg1 time_from_plugin:(double)arg2 med_dur_1:(double)arg3 med_dur_2:(double)arg4 med_dur_4:(double)arg5 med_dur_8:(double)arg6 med_dur_16:(double)arg7 med_dur_24:(double)arg8 cnt_dur_1:(double)arg9 cnt_dur_2:(double)arg10 cnt_dur_4:(double)arg11 cnt_dur_8:(double)arg12 cnt_dur_16:(double)arg13 cnt_dur_24:(double)arg14 std_dur_1:(double)arg15 std_dur_2:(double)arg16 std_dur_4:(double)arg17 std_dur_8:(double)arg18 std_dur_16:(double)arg19 std_dur_24:(double)arg20;
- (double)med_dur_1;
- (double)med_dur_16;
- (double)med_dur_2;
- (double)med_dur_24;
- (double)med_dur_4;
- (double)med_dur_8;
- (double)plugin_battery_level;
- (void)setCnt_dur_16:(double)arg1;
- (void)setCnt_dur_1:(double)arg1;
- (void)setCnt_dur_24:(double)arg1;
- (void)setCnt_dur_2:(double)arg1;
- (void)setCnt_dur_4:(double)arg1;
- (void)setCnt_dur_8:(double)arg1;
- (void)setMed_dur_16:(double)arg1;
- (void)setMed_dur_1:(double)arg1;
- (void)setMed_dur_24:(double)arg1;
- (void)setMed_dur_2:(double)arg1;
- (void)setMed_dur_4:(double)arg1;
- (void)setMed_dur_8:(double)arg1;
- (void)setPlugin_battery_level:(double)arg1;
- (void)setStd_dur_16:(double)arg1;
- (void)setStd_dur_1:(double)arg1;
- (void)setStd_dur_24:(double)arg1;
- (void)setStd_dur_2:(double)arg1;
- (void)setStd_dur_4:(double)arg1;
- (void)setStd_dur_8:(double)arg1;
- (void)setTime_from_plugin:(double)arg1;
- (double)std_dur_1;
- (double)std_dur_16;
- (double)std_dur_2;
- (double)std_dur_24;
- (double)std_dur_4;
- (double)std_dur_8;
- (double)time_from_plugin;

@end
