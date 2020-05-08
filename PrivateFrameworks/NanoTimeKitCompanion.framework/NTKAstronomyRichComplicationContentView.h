/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAstronomyRichComplicationContentView : UIView <NTKAstronomyVistaViewObserver, NTKTimeTravel> {
    NTKAstronomyVistaView * _astronomyVistaView;
    CLLocation * _currentLocation;
    CLKDevice * _device;
    unsigned int  _isAnimating;
    unsigned int  _isPaused;
    unsigned int  _isRenderOneFrame;
    NTKAstronomyLocationDot * _locationDot;
    NTKDelayedBlock * _stopAnimationDelayedBlock;
    NSDate * _timeTravelDate;
    NSDate * _timelineDate;
}

@property (nonatomic, readonly) CLKUIQuadView *quadView;

- (void).cxx_destruct;
- (void)_hideLocationDot;
- (bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_showLocationDot;
- (void)_startAnimating;
- (void)_stopAnimating;
- (void)applyPausedUpdate:(bool)arg1;
- (void)astronomyVistaViewContentsAnimationFinished:(id)arg1;
- (void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)handleOrdinaryScreenWake;
- (void)handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)handleWristRaiseScreenWake;
- (id)initForDevice:(id)arg1 diameter:(double)arg2;
- (void)layoutSubviews;
- (void)prepareWristRaiseAnimation;
- (id)quadView;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (void)setTimeTravelDate:(id)arg1 animated:(bool)arg2;

@end
