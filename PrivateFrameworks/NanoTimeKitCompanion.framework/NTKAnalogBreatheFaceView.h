/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAnalogBreatheFaceView : NTKAnalogVideoFaceView {
    unsigned long long  _currentVideoStyle;
    NSDictionary * _editOptionDataSources;
    bool  _shouldApplyTransform;
}

@property (nonatomic) unsigned long long currentVideoStyle;

- (void).cxx_destruct;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyVideoPlayerTransform;
- (id)_complicationsForegroundColor;
- (id)_complicationsPlatterColor;
- (void)_configureTimeView:(id)arg1;
- (void)_customizeVideoPlayerOnSetup;
- (void)_faceViewWasTapped;
- (void)_handleEitherScreenWake;
- (void)_releaseBacklightAssertion;
- (bool)_shouldAnimateComplicationsOnTap;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_takeBacklightAssertion;
- (id)_tapHighlightImage;
- (void)_updateDialSize;
- (unsigned long long)currentVideoStyle;
- (void)customizeFaceViewForListing:(id)arg1 changeEvent:(unsigned long long)arg2 animated:(bool)arg3;
- (void)handleScreenBlanked;
- (id)imageForEditOption:(id)arg1;
- (void)setCurrentVideoStyle:(unsigned long long)arg1;
- (void)setupDataSources;
- (void)videoDidBeginPlayingQueuedVideo;
- (void)videoDidFinishPlayingToEnd;

@end
