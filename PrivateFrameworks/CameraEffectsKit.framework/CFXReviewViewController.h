/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface CFXReviewViewController : UIViewController <CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate, CFXPreviewViewControllerDelegate> {
    CFXCounterRotationView * _bottomControlsSnapshotContainer;
    long long  _cameraModeUsedForCapture;
    <CFXReviewViewControllerDelegate> * _delegate;
    CFXEffectBrowserViewController * _effectBrowserViewController;
    CFXPreviewViewController * _internalPreviewViewController;
    long long  _mediaCaptureDevicePosition_metadata;
    long long  _mediaCaptureInterfaceOrientation_metadata;
    bool  _mediaCapturedInFunCam_metadata;
    CFXMediaItem * _mediaItem;
    NSObject<OS_dispatch_group> * _metadataReaderGroup;
    CFXReviewControlsViewController * _reviewControlsViewController;
}

@property (nonatomic, readonly, copy) NSData *adjustmentsData;
@property (nonatomic, retain) CFXCounterRotationView *bottomControlsSnapshotContainer;
@property (nonatomic) long long cameraModeUsedForCapture;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXReviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CFXEffectBrowserViewController *effectBrowserViewController;
@property (nonatomic, retain) UIView *effectsPickerDrawer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CFXPreviewViewController *internalPreviewViewController;
@property (nonatomic, readonly) long long mediaCaptureDevicePosition;
@property (nonatomic) long long mediaCaptureDevicePosition_metadata;
@property (nonatomic, readonly) long long mediaCaptureInterfaceOrientation;
@property (nonatomic) long long mediaCaptureInterfaceOrientation_metadata;
@property (nonatomic, readonly) bool mediaCapturedInFunCam;
@property (nonatomic) bool mediaCapturedInFunCam_metadata;
@property (nonatomic, retain) CFXMediaItem *mediaItem;
@property (nonatomic, readonly) bool mediaItemRequiresExport;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *metadataReaderGroup;
@property (nonatomic, retain) CFXReviewControlsViewController *reviewControlsViewController;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)CFX_resetAndLoadPreviewViewController;
- (void)CFX_updateAnalyticsForSentMediaItem:(id)arg1;
- (id)adjustmentsData;
- (bool)allowLandscapeForEffectBrowserViewController:(id)arg1;
- (id)bottomControlsSnapshotContainer;
- (long long)cameraModeUsedForCapture;
- (id)delegate;
- (id)effectBrowserViewController;
- (void)effectBrowserViewController:(id)arg1 didDismissPickerForEffectType:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didDropOverlayEffect:(id)arg2 atScreenLocation:(struct CGPoint { double x1; double x2; })arg3 atScreenSize:(struct CGSize { double x1; double x2; })arg4 rotationAngle:(double)arg5;
- (void)effectBrowserViewController:(id)arg1 didPresentPickerForEffectType:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didRemoveAllEffectsOfType:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (double)effectBrowserViewController:(id)arg1 screenTopBarHeightForWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 orientation:(long long)arg3;
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;
- (id)effectsPickerDrawer;
- (void)exportMediaItemToFileURL:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (id)internalPreviewViewController;
- (void)loadView;
- (id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg1;
- (long long)mediaCaptureDevicePosition;
- (long long)mediaCaptureDevicePosition_metadata;
- (long long)mediaCaptureInterfaceOrientation;
- (long long)mediaCaptureInterfaceOrientation_metadata;
- (bool)mediaCapturedInFunCam;
- (bool)mediaCapturedInFunCam_metadata;
- (id)mediaItem;
- (id)mediaItemForEffectBrowserViewController:(id)arg1;
- (bool)mediaItemRequiresExport;
- (id)metadataReaderGroup;
- (long long)orientationUsedForCapture;
- (void)previewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;
- (void)previewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;
- (void)previewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;
- (void)previewViewControllerDidHideUserInterface:(id)arg1;
- (void)previewViewControllerDidShowUserInterface:(id)arg1;
- (void)previewViewControllerDidStartEditingText:(id)arg1;
- (void)previewViewControllerDidStopEditingText:(id)arg1;
- (id)reviewControlsViewController;
- (id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg1;
- (id)selectedAppIdentifierForPreviewViewController:(id)arg1;
- (id)selectedFilterIdentifierForEffectBrowserViewController:(id)arg1;
- (void)setBottomControlsSnapshotContainer:(id)arg1;
- (void)setCameraModeUsedForCapture:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectBrowserViewController:(id)arg1;
- (void)setEffectsPickerDrawer:(id)arg1;
- (void)setInternalPreviewViewController:(id)arg1;
- (void)setMediaCaptureDevicePosition_metadata:(long long)arg1;
- (void)setMediaCaptureInterfaceOrientation_metadata:(long long)arg1;
- (void)setMediaCapturedInFunCam_metadata:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMetadataReaderGroup:(id)arg1;
- (void)setReviewControlsViewController:(id)arg1;
- (bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
