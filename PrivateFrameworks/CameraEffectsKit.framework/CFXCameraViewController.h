/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXCameraViewController : UIViewController <CFXCaptureViewControllerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate, CFXRemoteCommandServerDelegate> {
    long long  _aspectRatioCrop;
    CFXCounterRotationView * _bottomControlsSnapshotContainer;
    bool  _cameraControlsShown;
    CFXCameraControlsViewController * _cameraControlsViewController;
    long long  _captureMode;
    CFXCaptureViewController * _captureViewController;
    <CFXCameraViewControllerDelegate> * _delegate;
    NSString * _effectBrowserPresentedAppIdentifier;
    CFXEffectBrowserViewController * _effectBrowserViewController;
    UIView * _effectsPickerSnapshotContainerView;
    long long  _externalCaptureSessionCameraPosition;
    NSObject<OS_dispatch_queue> * _externalCaptureSessionInputDeserializationQueue;
    JTThreadSafeDictionary * _externalCaptureSessionInputFrameTimestamps;
    NSObject<OS_dispatch_queue> * _externalCaptureSessionInputProcessingQueue;
    NSObject<OS_dispatch_queue> * _externalCaptureSessionOutputProcessingQueue;
    JTPixelRotationSession * _externalCaptureSessionRotationSession;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _externalContentRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _externalPresentationRect;
    long long  _initialFlashMode;
    long long  _logDebug_cameraPosition;
    CFXRemoteCommandServer * _remoteCommandServer;
    bool  _showsViewfinder;
    bool  _usesInternalCaptureSession;
}

@property (nonatomic, readonly) long long aspectRatioCrop;
@property (nonatomic, retain) CFXCounterRotationView *bottomControlsSnapshotContainer;
@property (nonatomic) bool cameraControlsShown;
@property (nonatomic, retain) CFXCameraControlsViewController *cameraControlsViewController;
@property (nonatomic, readonly) long long captureMode;
@property (nonatomic, retain) CFXCaptureViewController *captureViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXCameraViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long devicePosition;
@property (nonatomic, retain) NSString *effectBrowserPresentedAppIdentifier;
@property (nonatomic, retain) CFXEffectBrowserViewController *effectBrowserViewController;
@property (nonatomic, retain) UIView *effectsPickerDrawer;
@property (getter=isEffectsPickerHidden, nonatomic, readonly) bool effectsPickerHidden;
@property (nonatomic, retain) UIView *effectsPickerSnapshotContainerView;
@property (nonatomic, readonly) long long effectsState;
@property (nonatomic) long long externalCaptureSessionCameraPosition;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionInputDeserializationQueue;
@property (nonatomic, retain) JTThreadSafeDictionary *externalCaptureSessionInputFrameTimestamps;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionInputProcessingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionOutputProcessingQueue;
@property (nonatomic, retain) JTPixelRotationSession *externalCaptureSessionRotationSession;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } externalContentRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } externalPresentationRect;
@property (nonatomic, readonly) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long initialFlashMode;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, retain) CFXRemoteCommandServer *remoteCommandServer;
@property (nonatomic) bool showsViewfinder;
@property (readonly) Class superclass;
@property (nonatomic) double userInterfaceAlpha;
@property (nonatomic) bool usesInternalCaptureSession;

+ (void)initialize;
+ (void)preheatWithWindow:(id)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3;
+ (void)preheatWithWindow:(id)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3 aspectRatioCrop:(long long)arg4;

- (void).cxx_destruct;
- (bool)allowLandscapeForEffectBrowserViewController:(id)arg1;
- (long long)aspectRatioCrop;
- (id)bottomControlsSnapshotContainer;
- (bool)cameraControlsShown;
- (id)cameraControlsViewController;
- (id)cameraControlsViewControllerForCaptureViewController:(id)arg1;
- (long long)captureMode;
- (id)captureViewController;
- (void)captureViewController:(id)arg1 didCaptureMediaItem:(id)arg2;
- (void)captureViewController:(id)arg1 didChangeEffectComposition:(id)arg2;
- (void)captureViewController:(id)arg1 didRenderFrame:(id)arg2;
- (void)captureViewController:(id)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4;
- (void)captureViewControllerCameraFlipButtonWasTapped:(id)arg1;
- (void)captureViewControllerDidStartVideoRecording:(id)arg1;
- (void)captureViewControllerDidStopVideoRecording:(id)arg1;
- (void)captureViewControllerDoneButtonWasTapped:(id)arg1;
- (void)captureViewControllerEffectsButtonWasTapped:(id)arg1;
- (void)captureViewControllerPresentationRectWasDoubleTapped:(id)arg1;
- (void)captureViewControllerStartCaptureSession:(id)arg1;
- (void)captureViewControllerStopCaptureSession:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (long long)devicePosition;
- (id)effectBrowserPresentedAppIdentifier;
- (id)effectBrowserViewController;
- (void)effectBrowserViewController:(id)arg1 didDropOverlayEffect:(id)arg2 atScreenLocation:(struct CGPoint { double x1; double x2; })arg3 atScreenSize:(struct CGSize { double x1; double x2; })arg4 rotationAngle:(double)arg5;
- (void)effectBrowserViewController:(id)arg1 didRemoveAllEffectsOfType:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didSelectApp:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didSelectAppWithIdentifier:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (double)effectBrowserViewController:(id)arg1 screenTopBarHeightForWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 orientation:(long long)arg3;
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;
- (void)effectBrowserViewControllerDidStartCaptureSession:(id)arg1;
- (void)effectBrowserViewControllerDidStopCaptureSession:(id)arg1;
- (id)effectsPickerDrawer;
- (id)effectsPickerSnapshotContainerView;
- (long long)effectsState;
- (long long)externalCaptureSessionCameraPosition;
- (id)externalCaptureSessionInputDeserializationQueue;
- (id)externalCaptureSessionInputFrameTimestamps;
- (id)externalCaptureSessionInputProcessingQueue;
- (id)externalCaptureSessionOutputProcessingQueue;
- (id)externalCaptureSessionRotationSession;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })externalContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })externalPresentationRect;
- (long long)flashMode;
- (id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2;
- (id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3;
- (id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3 aspectRatioCrop:(long long)arg4;
- (id)initWithMode:(long long)arg1;
- (long long)initialFlashMode;
- (bool)isEffectsPickerHidden;
- (void)loadView;
- (id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg1;
- (long long)mode;
- (void)noteInputFrameWithTimestamp:(double)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })noteOutputFrameWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)remoteCommandServer;
- (void)remoteCommandServer:(id)arg1 didReceiveAddShapeCommandWithIdentifier:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveAddStickerCommandWithURL:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(double)arg4 rotation:(double)arg5;
- (void)remoteCommandServer:(id)arg1 didReceiveAddTextCommandWithIdentifier:(id)arg2 string:(id)arg3;
- (void)remoteCommandServer:(id)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveSetAnimojiCommandWithIdentifier:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveSetFilterCommandWithIdentifier:(id)arg2;
- (void)removeAllEffects;
- (void)renderFrameWithImageData:(id)arg1 orientation:(long long)arg2 presentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)renderFrameWithImageDataArchive:(id)arg1 imagePixelBuffer:(struct __CVBuffer { }*)arg2 depthPixelBuffer:(struct __CVBuffer { }*)arg3 orientation:(long long)arg4 presentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (id)renderFrameWithImageDataArchive:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)renderFrameWithImageDataArchive:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(long long)arg3 presentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg1;
- (id)selectedFilterIdentifierForEffectBrowserViewController:(id)arg1;
- (void)setBottomControlsSnapshotContainer:(id)arg1;
- (void)setCameraControlsShown:(bool)arg1;
- (void)setCameraControlsViewController:(id)arg1;
- (void)setCaptureViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectBrowserPresentedAppIdentifier:(id)arg1;
- (void)setEffectBrowserViewController:(id)arg1;
- (void)setEffectsPickerDrawer:(id)arg1;
- (void)setEffectsPickerHidden:(bool)arg1 animated:(bool)arg2;
- (void)setEffectsPickerSnapshotContainerView:(id)arg1;
- (void)setExternalCaptureSessionCameraPosition:(long long)arg1;
- (void)setExternalCaptureSessionInputFrameTimestamps:(id)arg1;
- (void)setExternalCaptureSessionRotationSession:(id)arg1;
- (void)setExternalContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExternalPresentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialFlashMode:(long long)arg1;
- (void)setRemoteCommandServer:(id)arg1;
- (void)setShowsViewfinder:(bool)arg1;
- (void)setTransitionState:(long long)arg1 animated:(bool)arg2;
- (void)setUserInterfaceAlpha:(double)arg1;
- (void)setUsesInternalCaptureSession:(bool)arg1;
- (bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;
- (bool)shouldRotateCellsForDeviceOrientation;
- (bool)showsViewfinder;
- (void)startCaptureSession;
- (void)stopCaptureSession;
- (void)updateUIForVideoRecording:(bool)arg1;
- (double)userInterfaceAlpha;
- (bool)usesInternalCaptureSession;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
