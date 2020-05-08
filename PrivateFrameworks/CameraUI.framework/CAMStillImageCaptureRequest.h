/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMBurstIdentifierProvider, CAMBurstRequest, CAMCaptureAdjustmentProvider, CAMIrisRequest, CAMTimelapseRequest, NSCopying, NSMutableCopying> {
    NSString * _EV0IrisIdentifier;
    NSURL * _EV0LocalSpatialOverCaptureVideoDestinationURL;
    NSURL * _EV0LocalVideoDestinationURL;
    NSString * _EV0PersistenceUUID;
    NSString * _EV0VideoPersistenceUUID;
    NSArray * _adjustmentFilters;
    long long  _aspectRatio;
    long long  _aspectRatioCrop;
    NSString * _burstIdentifier;
    long long  _ctmCaptureType;
    <CAMStillImageCaptureRequestDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredPreviewSize;
    long long  _effectFilterType;
    long long  _flashMode;
    long long  _hdrMode;
    NSString * _irisIdentifier;
    long long  _irisMode;
    long long  _lightingEffectType;
    NSURL * _localCTMSpatialOverCaptureVideoDestinationURL;
    NSURL * _localCTMVideoDestinationURL;
    NSURL * _localSpatialOverCaptureVideoDestinationURL;
    NSURL * _localVideoDestinationURL;
    double  _loggingVideoZoomFactor;
    long long  _loggingZoomInteractionType;
    long long  _lowLightMode;
    unsigned long long  _maximumBurstLength;
    NSArray * _originalFilters;
    long long  _photoQualityPrioritization;
    bool  _stillDuringVideo;
    NSString * _timelapseIdentifier;
    unsigned long long  _userInitiationTime;
    NSString * _videoPersistenceUUID;
    bool  _wantsAudioForCapture;
    bool  _wantsAutoDualCameraFusion;
    bool  _wantsHighResolutionStills;
    bool  _wantsPortraitEffect;
    bool  _wantsSpatialOverCapture;
    bool  _wantsSquareCrop;
}

@property (getter=isCTMVideo, nonatomic, readonly) bool CTMVideo;
@property (nonatomic, readonly, copy) NSString *EV0IrisIdentifier;
@property (nonatomic, readonly, copy) NSURL *EV0LocalSpatialOverCaptureVideoDestinationURL;
@property (nonatomic, readonly, copy) NSURL *EV0LocalVideoDestinationURL;
@property (nonatomic, readonly, copy) NSString *EV0PersistenceUUID;
@property (nonatomic, readonly, copy) NSString *EV0VideoPersistenceUUID;
@property (nonatomic, readonly) NSArray *adjustmentFilters;
@property (nonatomic, readonly) long long aspectRatioCrop;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) long long ctmCaptureType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } desiredPreviewSize;
@property (nonatomic, readonly) long long effectFilterType;
@property (nonatomic, readonly) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly, copy) NSString *irisIdentifier;
@property (nonatomic, readonly) long long irisMode;
@property (nonatomic, readonly) long long lightingEffectType;
@property (nonatomic, readonly, copy) NSURL *localCTMSpatialOverCaptureVideoDestinationURL;
@property (nonatomic, readonly, copy) NSURL *localCTMVideoDestinationURL;
@property (nonatomic, readonly, copy) NSURL *localSpatialOverCaptureVideoDestinationURL;
@property (nonatomic, readonly, copy) NSURL *localVideoDestinationURL;
@property (nonatomic, readonly) double loggingVideoZoomFactor;
@property (nonatomic, readonly) long long loggingZoomInteractionType;
@property (nonatomic, readonly) long long lowLightMode;
@property (nonatomic, readonly) unsigned long long maximumBurstLength;
@property (nonatomic, readonly) NSArray *originalFilters;
@property (nonatomic, readonly) long long photoQualityPrioritization;
@property (nonatomic, readonly) bool stillDuringVideo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *timelapseIdentifier;
@property (nonatomic, readonly) unsigned long long userInitiationTime;
@property (nonatomic, readonly, copy) NSString *videoPersistenceUUID;
@property (nonatomic, readonly) bool wantsAudioForCapture;
@property (nonatomic, readonly) bool wantsAutoDualCameraFusion;
@property (nonatomic, readonly) bool wantsHighResolutionStills;
@property (nonatomic, readonly) bool wantsPortraitEffect;
@property (nonatomic, readonly) bool wantsSpatialOverCapture;
@property (nonatomic, readonly) bool wantsSquareCrop;

- (void).cxx_destruct;
- (id)EV0IrisIdentifier;
- (id)EV0LocalSpatialOverCaptureVideoDestinationURL;
- (id)EV0LocalVideoDestinationURL;
- (id)EV0PersistenceUUID;
- (id)EV0VideoPersistenceUUID;
- (id)adjustmentFilters;
- (long long)aspectRatioCrop;
- (id)burstIdentifier;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)ctmCaptureType;
- (id)delegate;
- (struct CGSize { double x1; double x2; })desiredPreviewSize;
- (long long)effectFilterType;
- (long long)flashMode;
- (bool)hasAdjustments;
- (long long)hdrMode;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(bool)arg2;
- (id)irisIdentifier;
- (id)irisIdentifierForEV0:(bool)arg1;
- (id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(bool)arg1;
- (id)irisLocalVideoDestinationURLForEV0:(bool)arg1;
- (long long)irisMode;
- (id)irisStillImagePersistenceUUIDForEV0:(bool)arg1;
- (id)irisVideoPersistenceUUIDForEV0:(bool)arg1;
- (bool)isCTMVideo;
- (bool)isEV0LocalVideoDestinationURL:(id)arg1;
- (bool)isLocalSpatialOverCaptureVideoDestinationURL:(id)arg1;
- (long long)lightingEffectType;
- (id)localCTMSpatialOverCaptureVideoDestinationURL;
- (id)localCTMVideoDestinationURL;
- (id)localSpatialOverCaptureVideoDestinationURL;
- (id)localVideoDestinationURL;
- (double)loggingVideoZoomFactor;
- (long long)loggingZoomInteractionType;
- (long long)lowLightMode;
- (unsigned long long)maximumBurstLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originalFilters;
- (long long)photoQualityPrioritization;
- (bool)shouldProtectPersistenceForVideo;
- (bool)stillDuringVideo;
- (id)timelapseIdentifier;
- (unsigned long long)userInitiationTime;
- (id)videoPersistenceUUID;
- (bool)wantsAudioForCapture;
- (bool)wantsAutoDualCameraFusion;
- (bool)wantsHighResolutionStills;
- (bool)wantsPortraitEffect;
- (bool)wantsSpatialOverCapture;
- (bool)wantsSquareCrop;

@end
