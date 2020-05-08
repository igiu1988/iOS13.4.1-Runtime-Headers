/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMInertDiagnostics : AXMDiagnostics

+ (id)sharedInstance;
+ (bool)supportsSecureCoding;

- (void)addMetric:(id)arg1;
- (void)appendVisionObservations:(id)arg1;
- (id)captureMetrics:(long long)arg1 name:(id)arg2 forTask:(id /* block */)arg3;
- (void)clearMetrics;
- (bool)diagnosticsEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metrics;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (id)startMeasurement:(long long)arg1 name:(id)arg2;
- (id)visionObservations;

@end
