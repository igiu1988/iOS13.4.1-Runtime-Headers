/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTClip : NSObject <JTMediaItemDelegate, NSCopying> {
    NSMutableArray * _animojis;
    NSMutableArray * _arSelfies;
    NSMutableDictionary * _audioAnalysis;
    JTAudioClip * _audioClip;
    bool  _audioEnabled;
    int  _audioInitialStartOffset;
    float  _audioVolume;
    <JTClipDelegate> * _delegate;
    int  _duration;
    NSMutableArray * _effects;
    NSMutableArray * _filters;
    bool  _isPastedClip;
    bool  _isTrimClip;
    NSMutableArray * _liveTitles;
    JTMediaItem * _mediaItem;
    int  _mediaStartOffset;
    bool  _originalSelfieAudioEnabled;
    NSMutableArray * _overlays;
    int  _presentationTime;
    int  _provisionalAudioInitialStartOffset;
    NSMutableArray * _sketches;
    UIImage * _thumbnail;
    NSArray * _transcription;
    NSDate * _transcriptionEditDate;
    NSString * _transcriptionFormattedString;
    NSDate * _transcriptionRunDate;
    PVTransformAnimation * _transformAnimation;
    int  _transformInitialStartOffset;
    NSString * _uuid;
}

@property (nonatomic, retain) NSMutableArray *animojis;
@property (nonatomic, retain) NSMutableArray *arSelfies;
@property (nonatomic, retain) NSMutableDictionary *audioAnalysis;
@property (nonatomic, retain) JTAudioClip *audioClip;
@property (nonatomic) bool audioEnabled;
@property (nonatomic) int audioInitialStartOffset;
@property (nonatomic) float audioVolume;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <JTClipDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int duration;
@property (nonatomic, retain) NSMutableArray *effects;
@property (nonatomic, retain) NSMutableArray *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPastedClip;
@property (nonatomic) bool isTrimClip;
@property (nonatomic, retain) NSMutableArray *liveTitles;
@property (nonatomic, retain) JTMediaItem *mediaItem;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } mediaSize;
@property (nonatomic) int mediaStartOffset;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic) bool originalSelfieAudioEnabled;
@property (nonatomic, retain) NSMutableArray *overlays;
@property (nonatomic, readonly) int presentationEndTime;
@property (nonatomic) int presentationTime;
@property (nonatomic) int provisionalAudioInitialStartOffset;
@property (nonatomic, retain) NSMutableArray *sketches;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, readonly) NSArray *transcription;
@property (nonatomic, retain) NSDate *transcriptionEditDate;
@property (nonatomic, retain) NSString *transcriptionFormattedString;
@property (nonatomic, retain) NSDate *transcriptionRunDate;
@property (nonatomic, retain) PVTransformAnimation *transformAnimation;
@property (nonatomic) int transformInitialStartOffset;
@property (nonatomic, retain) NSString *uuid;

+ (id)createCaptureClip;
+ (void)createStillClipPreviewWithLocalURL:(id)arg1 effectStack:(id)arg2 maximumPreviewDimension:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
+ (void)createStillClipWithAssetIdentifier:(id)arg1 progressHandlerBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (void)createStillClipWithImage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)createStillClipWithLocalURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)createVideoClipWithAssetIdentifier:(id)arg1 progressHandlerBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (void)createVideoClipWithLocalURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)createVideoClipWithLocalURL:(id)arg1 effectStack:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)defaultClip;
+ (id)defaultClipWithLocalAsset:(id)arg1;

- (void).cxx_destruct;
- (bool)_addEffect:(id)arg1;
- (id)_effectsOfType:(int)arg1;
- (bool)_removeAllEffectsOfType:(int)arg1 notifyDelegate:(bool)arg2;
- (void)addEffect:(id)arg1;
- (void)addEffectStack:(id)arg1;
- (id)animojis;
- (id)arSelfies;
- (id)audioAnalysis;
- (id)audioClip;
- (bool)audioEnabled;
- (int)audioInitialStartOffset;
- (float)audioVolume;
- (bool)canSaveClipToCameraRoll;
- (void)clipAudioHasChanged;
- (void)clipDidLoadWithError:(id)arg1;
- (void)clipHasAnUpdatedThumbnail;
- (void)clipHasChanged;
- (id)clipType;
- (void)clipWillLoad;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)duration;
- (void)effectHasChanged:(id)arg1;
- (id)effectStack;
- (id)effectStackExcludingType:(int)arg1;
- (id)effects;
- (id)effectsOfType:(int)arg1;
- (id)filters;
- (id)filtersForClip;
- (void)generateThumbnail;
- (bool)hasEffectOfType:(int)arg1;
- (bool)hasProjectLocalAsset;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMediaItem:(id)arg1;
- (bool)isAssetInTrash;
- (bool)isAssetLoaded;
- (bool)isAssetLocal;
- (bool)isAssetMissing;
- (bool)isAssetUnavailable;
- (bool)isCamera;
- (bool)isEqual:(id)arg1;
- (bool)isICPLAsset;
- (bool)isPastedClip;
- (bool)isStill;
- (bool)isStillFromCamera;
- (bool)isTrimClip;
- (bool)isValidForProject;
- (bool)isVideo;
- (id)liveTitles;
- (id)mediaItem;
- (void)mediaItem:(id)arg1 hasAnUpdatedThumbnail:(id)arg2;
- (void)mediaItemDidLoad:(id)arg1 error:(id)arg2;
- (void)mediaItemWillLoad:(id)arg1;
- (struct CGSize { double x1; double x2; })mediaSize;
- (int)mediaStartOffset;
- (int)mediaType;
- (bool)needsDerivativeMedia;
- (bool)originalSelfieAudioEnabled;
- (id)overlays;
- (int)presentationEndTime;
- (int)presentationTime;
- (id)projectLocalAssetURL;
- (int)provisionalAudioInitialStartOffset;
- (void)removeAllEffects;
- (bool)removeAllEffectsOfType:(int)arg1;
- (void)removeAllFiltersWithoutGeneratingAThumbnail;
- (void)removeEffect:(id)arg1;
- (id)removeStyleTranferOnUnsupportedDevice:(id)arg1;
- (void)setAnimojis:(id)arg1;
- (void)setArSelfies:(id)arg1;
- (void)setAudioAnalysis:(id)arg1;
- (void)setAudioClip:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setAudioInitialStartOffset:(int)arg1;
- (void)setAudioVolume:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setEffects:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setIsPastedClip:(bool)arg1;
- (void)setIsTrimClip:(bool)arg1;
- (void)setLiveTitles:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMediaStartOffset:(int)arg1;
- (void)setOriginalSelfieAudioEnabled:(bool)arg1;
- (void)setOverlays:(id)arg1;
- (void)setPresentationTime:(int)arg1;
- (void)setProjectLocalAssetURL:(id)arg1;
- (void)setProvisionalAudioInitialStartOffset:(int)arg1;
- (void)setSketches:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTranscriptionEditDate:(id)arg1;
- (void)setTranscriptionFormattedString:(id)arg1;
- (void)setTranscriptionRunDate:(id)arg1;
- (void)setTransformAnimation:(id)arg1;
- (void)setTransformInitialStartOffset:(int)arg1;
- (void)setUuid:(id)arg1;
- (id)sketches;
- (id)stringForMediaType:(int)arg1;
- (id)thumbnail;
- (void)thumbnailWithTargetSize:(struct CGSize { double x1; double x2; })arg1 requestedTime:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)thumbnailWithTargetSize:(struct CGSize { double x1; double x2; })arg1 requestedTime:(int)arg2 includeEffects:(bool)arg3 includeTransform:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)thumbnailWithTargetSize:(struct CGSize { double x1; double x2; })arg1 requestedTime:(int)arg2 includeFilters:(bool)arg3 includeOverlays:(bool)arg4 includeTransform:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)thumbnailsWithTargetSize:(struct CGSize { double x1; double x2; })arg1 requestedTimes:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)transcription;
- (id)transcriptionEditDate;
- (id)transcriptionFormattedString;
- (id)transcriptionRunDate;
- (id)transformAnimation;
- (void)transformHasChanged;
- (id)transformInfoOfClip;
- (int)transformInitialStartOffset;
- (id)uuid;

@end
