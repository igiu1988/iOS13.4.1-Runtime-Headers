/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentExposureMonitor : NSObject <SXComponentControllerObserver, SXComponentExposureMonitor, SXViewportChangeListener> {
    <SXHost> * _host;
    NSMutableSet * _trackingComponents;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *trackingComponents;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)beginExposure:(id)arg1;
- (void)componentControllerDidPresent:(id)arg1;
- (void)conditionsChanged;
- (void)endExposure:(id)arg1;
- (id)host;
- (id)initWithViewport:(id)arg1 appStateMonitor:(id)arg2 componentController:(id)arg3 host:(id)arg4;
- (void)onExposureOf:(id)arg1 then:(id /* block */)arg2;
- (void)onExposureOf:(id)arg1 then:(id /* block */)arg2 when:(id /* block */)arg3;
- (void)performMonitoring;
- (void)setTrackingComponents:(id)arg1;
- (void)stopTrackingExposureOfComponentView:(id)arg1;
- (void)trackExposureForTracking:(id)arg1;
- (id)trackingComponents;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 documentSizeDidChangeFromSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
