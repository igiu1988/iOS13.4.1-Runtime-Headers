/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPerformanceDiagnosticsSettings : ISSettings {
    bool  _shouldTracePerformance;
}

@property (nonatomic) bool shouldTracePerformance;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void)setDefaultValues;
- (void)setShouldTracePerformance:(bool)arg1;
- (bool)shouldTracePerformance;

@end
