/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions {
    NSURL * _primaryURL;
    NUAdjustment * _reframeCropAdjustment;
    NUAdjustment * _reframeVideoAdjustment;
    bool  _renderCompanionResources;
    NSURL * _videoComplementURL;
    NSURL * _videoPosterFrameURL;
}

@property (retain) NSURL *primaryURL;
@property (retain) NUAdjustment *reframeCropAdjustment;
@property (retain) NUAdjustment *reframeVideoAdjustment;
@property bool renderCompanionResources;
@property (retain) NSURL *videoComplementURL;
@property (retain) NSURL *videoPosterFrameURL;

- (void).cxx_destruct;
- (id)primaryURL;
- (id)reframeCropAdjustment;
- (id)reframeVideoAdjustment;
- (bool)renderCompanionResources;
- (void)setPrimaryURL:(id)arg1;
- (void)setReframeCropAdjustment:(id)arg1;
- (void)setReframeVideoAdjustment:(id)arg1;
- (void)setRenderCompanionResources:(bool)arg1;
- (void)setVideoComplementURL:(id)arg1;
- (void)setVideoPosterFrameURL:(id)arg1;
- (id)videoComplementURL;
- (id)videoPosterFrameURL;

@end
