/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCropToolController : PUPhotoEditToolController <PUAdjustmentViewControllerDelegate, PUCropAspectViewControllerDelegate, PUCropPerspectiveAdjustmentsDataSourceDelegate, PUCropTransformedImageViewDelegate, PUCropVideoScrubberViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {
    UILongPressGestureRecognizer * __accessibilityLongPressGestureRecognizer;
    bool  __activeTool;
    NSMutableDictionary * __animationTargetsByKeyPath;
    NSMutableDictionary * __animationsByKeyPath;
    PXUIButton * __aspectButton;
    PXUIButton * __autoButton;
    bool  __contentViewsHidden;
    unsigned long long  __contentViewsHiddenAnimationCount;
    PUCropAspect * __cropAspect;
    UIView * __cropCanvasView;
    NSDictionary * __cropHandleViewsByHandle;
    long long  __cropMode;
    PUCropOverlayView * __cropOverlayView;
    PUCropPerspectiveView * __cropView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __cropViewFrameForLastModelLoad;
    NSObject<OS_dispatch_queue> * __fileSystemQueue;
    PXUIButton * __flipButton;
    PLImageGeometry * __geometry;
    bool  __gridVisible;
    bool  __hasAppliedCropSuggestion;
    bool  __hasAppliedPerspectiveSuggestion;
    bool  __hasAutoAppliedCropSuggestion;
    bool  __hasAutoAppliedPerspectiveSuggestion;
    bool  __hasRequestedCropSuggestion;
    bool  __hasRequestedPerspectiveSuggestion;
    bool  __ignoreTrackingUpdates;
    UIImage * __image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __initialHandlePanCropRect;
    NSMutableDictionary * __initialLocationsInHandlesByHandle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __inputExtent;
    NUComposition * __lastKnownComposition;
    bool  __modelChangeLocal;
    bool  __needsImageLoad;
    bool  __needsLivePhotoLoad;
    bool  __needsModelLoad;
    UIButton * __perspectiveButton;
    double  __pitchAngle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __previewViewInsets;
    PLPhotoEditRenderer * __renderer;
    PXUIButton * __rotateButton;
    UIView * __rotateSnapshotView;
    unsigned long long  __rotatingAnimationCount;
    PUCropHandleView * __selectedCropHandleView;
    double  __straightenAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __suggestedCrop;
    double  __suggestedPitchAngle;
    double  __suggestedStraightenAngle;
    double  __suggestedYawAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __viewCropRect;
    bool  __wantsPreviewViewHidden;
    double  __yawAngle;
    UIView * _adjustmentPickerView;
    PUAdjustmentsViewController * _adjustmentsViewController;
    bool  _autoButtonInReframeMode;
    long long  _autoButtonMode;
    NSTimer * _badgeShowingExpirationTimer;
    CEKBadgeTextView * _badgeView;
    UIView * _containerView;
    PUCropAspectFlipperView * _cropAspectFlipperView;
    PUCropAspectViewController * _cropAspectViewController;
    NUCropModel * _cropModel;
    PUCropPerspectiveAdjustmentsDataSource * _dataSource;
    bool  _disableSourceSwitch;
    bool  _imageHasOriginalCrop;
    bool  _imageHasReframeData;
    bool  _imageIsUsingReframe;
    bool  _imageLoadingInProgress;
    PFSerialQueue * _imageLoadingQueue;
    NSMutableArray * _imageLoadingQueueCompletionBlocks;
    bool  _initialImageLoaded;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumViewCropRectSizeForHandleGesture;
    bool  _modelLoadingSuspended;
    PUEditActionActivity * _overcaptureSourceToggleActivity;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _screenSize;
    bool  _toolBadgeDoesHide;
    bool  _trackingAdjustmentControl;
    PFCoalescer * _videoScrubberCoalescer;
    bool  _videoScrubberIsInteracting;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoScrubberSeekTime;
    PUCropVideoScrubberView * _videoScrubberView;
}

@property (setter=_setAccessibilityLongPressGestureRecognizer:, nonatomic, retain) UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer;
@property (getter=_isActiveTool, setter=_setActiveTool:, nonatomic) bool _activeTool;
@property (setter=_setAnimationTargetsByKeyPath:, nonatomic, retain) NSMutableDictionary *_animationTargetsByKeyPath;
@property (setter=_setAnimationsByKeyPath:, nonatomic, retain) NSMutableDictionary *_animationsByKeyPath;
@property (setter=_setAspectButton:, nonatomic, retain) PXUIButton *_aspectButton;
@property (setter=_setAutoButton:, nonatomic, retain) PXUIButton *_autoButton;
@property (setter=_setContentViewsHidden:, nonatomic) bool _contentViewsHidden;
@property (setter=_setContentViewsHiddenAnimationCount:, nonatomic) unsigned long long _contentViewsHiddenAnimationCount;
@property (setter=_setCropAspect:, nonatomic, retain) PUCropAspect *_cropAspect;
@property (setter=_setCropCanvasView:, nonatomic, retain) UIView *_cropCanvasView;
@property (setter=_setCropHandleViewsByHandle:, nonatomic, retain) NSDictionary *_cropHandleViewsByHandle;
@property (setter=_setCropMode:, nonatomic) long long _cropMode;
@property (setter=_setCropOverlayView:, nonatomic, retain) PUCropOverlayView *_cropOverlayView;
@property (setter=_setCropView:, nonatomic, retain) PUCropPerspectiveView *_cropView;
@property (setter=_setCropViewFrameForLastModelLoad:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _cropViewFrameForLastModelLoad;
@property (setter=_setFileSystemQueue:, nonatomic, retain) NSObject<OS_dispatch_queue> *_fileSystemQueue;
@property (setter=_setFlipButton:, nonatomic, retain) PXUIButton *_flipButton;
@property (setter=_setGeometry:, nonatomic, retain) PLImageGeometry *_geometry;
@property (setter=_setGridVisible:, nonatomic) bool _gridVisible;
@property (setter=_setHasAppliedCropSuggestion:, nonatomic) bool _hasAppliedCropSuggestion;
@property (setter=_setHasAppliedPerspectiveSuggestion:, nonatomic) bool _hasAppliedPerspectiveSuggestion;
@property (setter=_setHasAutoAppliedCropSuggestion:, nonatomic) bool _hasAutoAppliedCropSuggestion;
@property (setter=_setHasAutoAppliedPerspectiveSuggestion:, nonatomic) bool _hasAutoAppliedPerspectiveSuggestion;
@property (setter=_setHasRequestedCropSuggestion:, nonatomic) bool _hasRequestedCropSuggestion;
@property (setter=_setHasRequestedPerspectiveSuggestion:, nonatomic) bool _hasRequestedPerspectiveSuggestion;
@property (setter=_setIgnoreTrackingUpdates:, nonatomic) bool _ignoreTrackingUpdates;
@property (setter=_setImage:, nonatomic, retain) UIImage *_image;
@property (setter=_setInitialHandlePanCropRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _initialHandlePanCropRect;
@property (setter=_setInitialLocationsInHandlesByHandle:, nonatomic, retain) NSMutableDictionary *_initialLocationsInHandlesByHandle;
@property (setter=_setInputExtent:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _inputExtent;
@property (setter=_setLastKnownComposition:, nonatomic, retain) NUComposition *_lastKnownComposition;
@property (getter=_isModelChangeLocal, setter=_setModelChangeLocal:, nonatomic) bool _modelChangeLocal;
@property (setter=_setNeedsImageLoad:, nonatomic) bool _needsImageLoad;
@property (setter=_setNeedsLivePhotoLoad:, nonatomic) bool _needsLivePhotoLoad;
@property (setter=_setNeedsModelLoad:, nonatomic) bool _needsModelLoad;
@property (setter=_setPerspectiveButton:, nonatomic, retain) UIButton *_perspectiveButton;
@property (setter=_setPitchAngle:, nonatomic) double _pitchAngle;
@property (setter=_setPreviewViewInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _previewViewInsets;
@property (setter=_setRenderer:, nonatomic, retain) PLPhotoEditRenderer *_renderer;
@property (setter=_setRotateButton:, nonatomic, retain) PXUIButton *_rotateButton;
@property (setter=_setRotateSnapshotView:, nonatomic, retain) UIView *_rotateSnapshotView;
@property (setter=_setRotatingAnimationCount:, nonatomic) unsigned long long _rotatingAnimationCount;
@property (setter=_setSelectedCropHandleView:, nonatomic, retain) PUCropHandleView *_selectedCropHandleView;
@property (setter=_setStraightenAngle:, nonatomic) double _straightenAngle;
@property (setter=_setSuggestedCrop:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _suggestedCrop;
@property (setter=_setSuggestedPitchAngle:, nonatomic) double _suggestedPitchAngle;
@property (setter=_setSuggestedStraightenAngle:, nonatomic) double _suggestedStraightenAngle;
@property (setter=_setSuggestedYawAngle:, nonatomic) double _suggestedYawAngle;
@property (setter=_setViewCropRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _viewCropRect;
@property (setter=_setWantsPreviewViewHidden:, nonatomic) bool _wantsPreviewViewHidden;
@property (setter=_setYawAngle:, nonatomic) double _yawAngle;
@property (nonatomic, retain) UIView *adjustmentPickerView;
@property (nonatomic, retain) PUAdjustmentsViewController *adjustmentsViewController;
@property (nonatomic) bool autoButtonInReframeMode;
@property (nonatomic) long long autoButtonMode;
@property (nonatomic, retain) NSTimer *badgeShowingExpirationTimer;
@property (nonatomic, retain) CEKBadgeTextView *badgeView;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) PUCropAspectFlipperView *cropAspectFlipperView;
@property (nonatomic, retain) PUCropAspectViewController *cropAspectViewController;
@property (nonatomic, retain) NUCropModel *cropModel;
@property (nonatomic, retain) PUCropPerspectiveAdjustmentsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableSourceSwitch;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool imageHasOriginalCrop;
@property (nonatomic) bool imageHasReframeData;
@property (nonatomic) bool imageIsUsingReframe;
@property (nonatomic) bool imageLoadingInProgress;
@property (nonatomic, retain) PFSerialQueue *imageLoadingQueue;
@property (nonatomic, retain) NSMutableArray *imageLoadingQueueCompletionBlocks;
@property (nonatomic) bool initialImageLoaded;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumViewCropRectSizeForHandleGesture;
@property (nonatomic) bool modelLoadingSuspended;
@property (nonatomic, retain) PUEditActionActivity *overcaptureSourceToggleActivity;
@property (nonatomic) double screenScale;
@property (nonatomic) struct CGSize { double x1; double x2; } screenSize;
@property (readonly) Class superclass;
@property (nonatomic) bool toolBadgeDoesHide;
@property (nonatomic, readonly) PUCropToolControllerSpec *toolControllerSpec;
@property (getter=_isTrackingAdjustmentControl, setter=_setTrackingAdjustmentControl:, nonatomic) bool trackingAdjustmentControl;
@property (nonatomic, retain) PFCoalescer *videoScrubberCoalescer;
@property (nonatomic) bool videoScrubberIsInteracting;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoScrubberSeekTime;
@property (nonatomic, retain) PUCropVideoScrubberView *videoScrubberView;

- (void).cxx_destruct;
- (void)_accessibilityLongPressChanged:(id)arg1;
- (id)_accessibilityLongPressGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_addHeight:(double)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 anchorTop:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_addWidth:(double)arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 anchorLeft:(bool)arg3;
- (id)_animateValueFromValue:(double)arg1 toValue:(double)arg2 interpolation:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_animationForKeyPath:(id)arg1;
- (id)_animationTargetForKeyPath:(id)arg1;
- (id)_animationTargetsByKeyPath;
- (id)_animationsByKeyPath;
- (struct CGVector { double x1; double x2; })_applyAspectOfCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toHandleMovement:(struct CGVector { double x1; double x2; })arg2;
- (void)_applyCropAndPerspectiveSuggestion;
- (void)_applyCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 straightenAngle:(double)arg2 pitchAngle:(double)arg3 yawAngle:(double)arg4 isAutoCrop:(bool)arg5 isSmartCrop:(bool)arg6 isOriginalCrop:(bool)arg7;
- (void)_applyReframeOrDynamicCrop;
- (id)_aspectButton;
- (void)_aspectButtonTapped:(id)arg1;
- (void)_autoApplyCropAndPerspectiveSuggestionIfNeeded;
- (id)_autoButton;
- (void)_autoRecomposeCropRect;
- (void)_cancelAnimationForKeyPath:(id)arg1;
- (void)_cancelDelayedRecomposeCropRect;
- (void)_closeAspectRatioPicker;
- (bool)_contentViewsHidden;
- (unsigned long long)_contentViewsHiddenAnimationCount;
- (struct CGVector { double x1; double x2; })_correctInputVector:(struct CGVector { double x1; double x2; })arg1 forHandle:(unsigned long long)arg2 onCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 lockDirection:(bool)arg4;
- (void)_createRendererIfNeeded;
- (id)_cropAspect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropCanvasFrame;
- (id)_cropCanvasView;
- (id)_cropHandleViewsByHandle;
- (long long)_cropMode;
- (id)_cropOverlayView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRectFromPanningHandle:(unsigned long long)arg1 byAmount:(struct CGVector { double x1; double x2; })arg2;
- (void)_cropToggleTapped:(id)arg1;
- (id)_cropView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropViewFrameForLastModelLoad;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultImageCropRect;
- (long long)_defaultOrientation;
- (double)_defaultPitchAngle;
- (double)_defaultStraightenAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultViewCropRect;
- (double)_defaultYawAngle;
- (struct CGVector { double x1; double x2; })_deltaMaskForHandle:(unsigned long long)arg1;
- (id)_fileSystemQueue;
- (id)_flipButton;
- (void)_flipButtonTapped:(id)arg1;
- (bool)_forceOvercaptureSourceForCrop;
- (id)_geometry;
- (void)_gridButtonTapped:(id)arg1;
- (bool)_gridVisible;
- (void)_handleCropHandlePan:(id)arg1;
- (void)_handleDidCreateEditedImage:(id)arg1 inputExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_handleRenderedVideoWithURL:(id)arg1 originalLivePhoto:(id)arg2 success:(bool)arg3 error:(id)arg4;
- (void)_handleTouchingGesture:(id)arg1;
- (bool)_hasAppliedCropSuggestion;
- (bool)_hasAppliedPerspectiveSuggestion;
- (bool)_hasAutoAppliedCropSuggestion;
- (bool)_hasAutoAppliedPerspectiveSuggestion;
- (bool)_hasConstraintsForKey:(id)arg1;
- (bool)_hasCropSuggestion;
- (bool)_hasPerspectiveSuggestion;
- (bool)_hasRequestedCropSuggestion;
- (bool)_hasRequestedPerspectiveSuggestion;
- (void)_hideGrid;
- (void)_hideGridDelayed;
- (void)_hideMaskedContent;
- (void)_hideMaskedContentDelayed;
- (bool)_ignoreTrackingUpdates;
- (id)_image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialHandlePanCropRect;
- (id)_initialLocationsInHandlesByHandle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_inputExtent;
- (void)_installRenderedImageAndDisplayIfNeeded;
- (void)_invalidateConstraintsForKey:(id)arg1;
- (bool)_isActiveTool;
- (bool)_isModelChangeLocal;
- (bool)_isTrackingAdjustmentControl;
- (id)_lastKnownComposition;
- (void)_layoutAdjustmentTools;
- (void)_loadCropSuggestionIfNeeded;
- (void)_loadImageIfNeededWithCompletion:(id /* block */)arg1;
- (void)_loadLivePhotoIfNeeded;
- (void)_loadPerspectiveSuggestionIfNeeded;
- (void)_loadStateFromModel;
- (bool)_needsImageLoad;
- (bool)_needsLivePhotoLoad;
- (bool)_needsModelLoad;
- (bool)_needsRecomposeCropRect;
- (bool)_overcaptureSourceUsed;
- (void)_performGeometryChange:(id /* block */)arg1 animated:(bool)arg2;
- (void)_performLocalCropModelChanges:(id /* block */)arg1;
- (void)_performLocalModelChanges:(id /* block */)arg1;
- (id)_perspectiveButton;
- (double)_pitchAngle;
- (struct CGPoint { double x1; double x2; })_pointForHandle:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_pointForHandle:(unsigned long long)arg1 onCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_preferredContentSizeCategoryChanged;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_previewViewInsets;
- (void)_recomposeCropRectAnimated:(bool)arg1;
- (void)_recomposeCropRectDelayed;
- (void)_removeSnapshotView:(id)arg1;
- (id)_renderer;
- (void)_resetAllValuesAnimated:(bool)arg1;
- (void)_resetAllValuesAnimated:(bool)arg1 skipLayerTransformUpdate:(bool)arg2;
- (id)_rotateButton;
- (void)_rotateButtonTapped:(id)arg1;
- (id)_rotateSnapshotView;
- (unsigned long long)_rotatingAnimationCount;
- (id)_selectedCropHandleView;
- (void)_setAccessibilityLongPressGestureRecognizer:(id)arg1;
- (void)_setActiveTool:(bool)arg1;
- (void)_setAnimation:(id)arg1 forKeyPath:(id)arg2;
- (void)_setAnimationTarget:(id)arg1 forKeyPath:(id)arg2;
- (void)_setAnimationTargetsByKeyPath:(id)arg1;
- (void)_setAnimationsByKeyPath:(id)arg1;
- (void)_setAspectButton:(id)arg1;
- (void)_setAutoButton:(id)arg1;
- (void)_setContentViewsHidden:(bool)arg1;
- (void)_setContentViewsHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setContentViewsHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setContentViewsHiddenAnimationCount:(unsigned long long)arg1;
- (void)_setCropAspect:(id)arg1;
- (void)_setCropAspect:(id)arg1 animated:(bool)arg2;
- (void)_setCropCanvasView:(id)arg1;
- (void)_setCropHandleViewsByHandle:(id)arg1;
- (void)_setCropMode:(long long)arg1;
- (void)_setCropOverlayView:(id)arg1;
- (void)_setCropView:(id)arg1;
- (void)_setCropViewFrameForLastModelLoad:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setFileSystemQueue:(id)arg1;
- (void)_setFlipButton:(id)arg1;
- (void)_setGeometry:(id)arg1;
- (void)_setGridVisible:(bool)arg1;
- (void)_setHasAppliedCropSuggestion:(bool)arg1;
- (void)_setHasAppliedPerspectiveSuggestion:(bool)arg1;
- (void)_setHasAutoAppliedCropSuggestion:(bool)arg1;
- (void)_setHasAutoAppliedPerspectiveSuggestion:(bool)arg1;
- (void)_setHasRequestedCropSuggestion:(bool)arg1;
- (void)_setHasRequestedPerspectiveSuggestion:(bool)arg1;
- (void)_setIgnoreTrackingUpdates:(bool)arg1;
- (void)_setImage:(id)arg1;
- (void)_setInitialHandlePanCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setInitialLocationsInHandlesByHandle:(id)arg1;
- (void)_setInputExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setLastKnownComposition:(id)arg1;
- (void)_setModelChangeLocal:(bool)arg1;
- (void)_setNeedsImageLoad:(bool)arg1;
- (void)_setNeedsLivePhotoLoad:(bool)arg1;
- (void)_setNeedsModelLoad:(bool)arg1;
- (void)_setPerspectiveButton:(id)arg1;
- (void)_setPitchAngle:(double)arg1;
- (void)_setPitchAngle:(double)arg1 animated:(bool)arg2;
- (void)_setPreviewViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setRenderer:(id)arg1;
- (void)_setRotateButton:(id)arg1;
- (void)_setRotateSnapshotView:(id)arg1;
- (void)_setRotatingAnimationCount:(unsigned long long)arg1;
- (void)_setSelectedCropHandleView:(id)arg1;
- (void)_setStraightenAngle:(double)arg1;
- (void)_setStraightenAngle:(double)arg1 animated:(bool)arg2;
- (void)_setSuggestedCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setSuggestedPitchAngle:(double)arg1;
- (void)_setSuggestedStraightenAngle:(double)arg1;
- (void)_setSuggestedYawAngle:(double)arg1;
- (void)_setTrackingAdjustmentControl:(bool)arg1;
- (void)_setViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setViewCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_setWantsPreviewViewHidden:(bool)arg1;
- (void)_setYawAngle:(double)arg1;
- (void)_setYawAngle:(double)arg1 animated:(bool)arg2;
- (void)_setupCropModelFromCompositionController:(id)arg1;
- (void)_showGridAndCancelDelayedHide;
- (void)_showMaskedContentAndCancelDelayedHide;
- (double)_straightenAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suggestedCrop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suggestedCropRectForImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_suggestedPitchAngle;
- (double)_suggestedStraightenAngle;
- (double)_suggestedYawAngle;
- (void)_toggleCropAndPerspective;
- (void)_toggleOvercaptureSource;
- (void)_updateBadgeTextWithInfo:(id)arg1;
- (void)_updateCropActionButtons;
- (void)_updateCropCanvasConstraintsIfNeeded;
- (void)_updateCropToggleButton;
- (void)_updateCropToggleConstraintsIfNeeded;
- (void)_updateCropViewsForInteraction;
- (void)_updateOvercaptureSourceSwitchActivity;
- (void)_updatePreviewViewInsets;
- (void)_updateRendererWithCurrentComposition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewCropRect;
- (bool)_wantsPreviewViewHidden;
- (double)_yawAngle;
- (id)adjustmentPickerView;
- (void)adjustmentsDataChanged:(id)arg1;
- (id)adjustmentsRenderer:(id)arg1;
- (id)adjustmentsViewController;
- (void)adjustmentsViewControllerDidUpdateSelectedControl:(id)arg1;
- (void)adjustmentsViewControllerSliderDidEndScrubbing:(id)arg1;
- (void)adjustmentsViewControllerSliderWillBeginScrubbing:(id)arg1;
- (void)adjustmentsViewControllerToolDidEndScrubbing:(id)arg1;
- (void)adjustmentsViewControllerToolWillBeginScrubbing:(id)arg1;
- (bool)autoButtonInReframeMode;
- (long long)autoButtonMode;
- (id)badgeShowingExpirationTimer;
- (id)badgeView;
- (void)baseLivePhotoInvalidated;
- (void)basePhotoInvalidated;
- (bool)canBecomeActiveTool;
- (bool)canResetToDefaultValue;
- (id)centerToolbarView;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (id)containerView;
- (void)createVideoScrubber;
- (void)cropAspectController:(id)arg1 cropAspectSelected:(id)arg2;
- (id)cropAspectFlipperView;
- (void)cropAspectFlipperView:(id)arg1 cropOrientationSelected:(long long)arg2;
- (id)cropAspectViewController;
- (id)cropModel;
- (void)cropTransformedImageViewDidEndTracking:(id)arg1;
- (void)cropTransformedImageViewDidTrack:(id)arg1;
- (void)cropTransformedImageViewWillBeginTracking:(id)arg1;
- (id)dataSource;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (bool)disableSourceSwitch;
- (id)filter;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleResigningCropTool;
- (bool)handlesMediaViewInsets;
- (bool)imageHasOriginalCrop;
- (bool)imageHasReframeData;
- (bool)imageIsUsingReframe;
- (bool)imageLoadingInProgress;
- (id)imageLoadingQueue;
- (id)imageLoadingQueueCompletionBlocks;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)initialImageLoaded;
- (bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (id)leadingToolbarViews;
- (void)leavingEditWithCancel;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (struct CGSize { double x1; double x2; })minimumViewCropRectSizeForHandleGesture;
- (bool)modelLoadingSuspended;
- (id)overcaptureSourceToggleActivity;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredPreviewViewInsets;
- (void)prepareForSave:(bool)arg1;
- (void)prepareForToolTransitionWithCompletion:(id /* block */)arg1;
- (void)resetToDefaultValueAnimated:(bool)arg1;
- (void)resetToolLabelHidingTimer;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setAdjustmentPickerView:(id)arg1;
- (void)setAdjustmentsViewController:(id)arg1;
- (void)setAutoButtonInReframeMode:(bool)arg1;
- (void)setAutoButtonMode:(long long)arg1;
- (void)setBadgeShowingExpirationTimer:(id)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCropAspectFlipperView:(id)arg1;
- (void)setCropAspectViewController:(id)arg1;
- (void)setCropModel:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableSourceSwitch:(bool)arg1;
- (void)setImageHasOriginalCrop:(bool)arg1;
- (void)setImageHasReframeData:(bool)arg1;
- (void)setImageIsUsingReframe:(bool)arg1;
- (void)setImageLoadingInProgress:(bool)arg1;
- (void)setImageLoadingQueue:(id)arg1;
- (void)setImageLoadingQueueCompletionBlocks:(id)arg1;
- (void)setInitialImageLoaded:(bool)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setMinimumViewCropRectSizeForHandleGesture:(struct CGSize { double x1; double x2; })arg1;
- (void)setModelLoadingSuspended:(bool)arg1;
- (void)setOvercaptureSourceToggleActivity:(id)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setToolBadgeDoesHide:(bool)arg1;
- (void)setVideoScrubberCoalescer:(id)arg1;
- (void)setVideoScrubberIsInteracting:(bool)arg1;
- (void)setVideoScrubberSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoScrubberView:(id)arg1;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (void)showBadgeView:(bool)arg1 animated:(bool)arg2;
- (void)showToolLabel;
- (void)showVideoScrubber:(bool)arg1;
- (bool)suppressesEditUpdates;
- (bool)toolBadgeDoesHide;
- (long long)toolControllerTag;
- (id)toolbarIcon;
- (id)trailingToolbarViews;
- (void)updateVideoFrameWithScrubber;
- (void)updateViewConstraints;
- (void)updateViewOrdering;
- (id)videoScrubberCoalescer;
- (bool)videoScrubberIsInteracting;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoScrubberSeekTime;
- (id)videoScrubberView;
- (void)videoScrubberViewDidScrubTo:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)videoScrubberViewInteractionDone;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsDefaultPreviewView;
- (bool)wantsSecondaryToolbarVisible;
- (void)willBecomeActiveTool;
- (void)willResignActiveTool;

@end
