/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPDownload : NSObject <AVAssetDownloadDelegate> {
    bool  _allowCellularUsage;
    bool  _allowHDR;
    bool  _allowMultichannelAudio;
    NSPointerArray * _delegates;
    unsigned long long  _downloadInitiationBackgroundTask;
    bool  _downloadIsComplete;
    NSProgress * _downloadProgress;
    TVPDownloadSession * _downloadSession;
    AVAggregateAssetDownloadTask * _downloadTask;
    unsigned long long  _downloadTerminationBackgroundTask;
    NSError * _error;
    bool  _includeDefaultAudioOption;
    NSObject<TVPMediaItem> * _mediaItem;
    TVPMediaItemLoader * _mediaItemLoader;
    NSMapTable * _mediaSelectionToProgressMap;
    NSNumber * _minimumRequiredMediaBitrate;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumRequiredPresentationSize;
    unsigned long long  _numMediaSelectionsCompleted;
    unsigned long long  _numMediaSelectionsThatWillReceiveDownloadProgress;
    bool  _performKeyFetchOnly;
    NSArray * _preferredAudioLanguageCodes;
    TVPReportingSession * _reportingSession;
    long long  _state;
    TVPStateMachine * _stateMachine;
    bool  _useLegacyAudioSettings;
    NSDictionary * _userInfo;
}

@property (nonatomic) bool allowCellularUsage;
@property (nonatomic) bool allowHDR;
@property (nonatomic) bool allowMultichannelAudio;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSPointerArray *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long downloadInitiationBackgroundTask;
@property (nonatomic) bool downloadIsComplete;
@property (nonatomic, retain) NSProgress *downloadProgress;
@property (nonatomic) TVPDownloadSession *downloadSession;
@property (nonatomic, retain) AVAggregateAssetDownloadTask *downloadTask;
@property (nonatomic) unsigned long long downloadTerminationBackgroundTask;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeDefaultAudioOption;
@property (nonatomic, retain) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic, retain) TVPMediaItemLoader *mediaItemLoader;
@property (nonatomic, retain) NSMapTable *mediaSelectionToProgressMap;
@property (nonatomic, retain) NSNumber *minimumRequiredMediaBitrate;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumRequiredPresentationSize;
@property (nonatomic) unsigned long long numMediaSelectionsCompleted;
@property (nonatomic) unsigned long long numMediaSelectionsThatWillReceiveDownloadProgress;
@property (nonatomic) bool performKeyFetchOnly;
@property (nonatomic, retain) NSArray *preferredAudioLanguageCodes;
@property (nonatomic, readonly) double progress;
@property (nonatomic, retain) TVPReportingSession *reportingSession;
@property (nonatomic) long long state;
@property (nonatomic, retain) TVPStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic) bool useLegacyAudioSettings;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (void)initialize;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 forMediaSelection:(id)arg6;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_mediaItemLoaderStateDidChangeTo:(id)arg1;
- (void)_registerStateMachineHandlers;
- (void)addDelegate:(id)arg1;
- (bool)allowCellularUsage;
- (bool)allowHDR;
- (bool)allowMultichannelAudio;
- (void)cancel;
- (id)delegates;
- (id)descriptionForState:(long long)arg1;
- (unsigned long long)downloadInitiationBackgroundTask;
- (bool)downloadIsComplete;
- (id)downloadProgress;
- (id)downloadSession;
- (id)downloadTask;
- (unsigned long long)downloadTerminationBackgroundTask;
- (id)error;
- (void)failWithError:(id)arg1;
- (bool)includeDefaultAudioOption;
- (id)initWithMediaItem:(id)arg1 downloadSession:(id)arg2 existingDownloadTask:(id)arg3;
- (id)mediaItem;
- (id)mediaItemLoader;
- (id)mediaSelectionToProgressMap;
- (id)minimumRequiredMediaBitrate;
- (struct CGSize { double x1; double x2; })minimumRequiredPresentationSize;
- (unsigned long long)numMediaSelectionsCompleted;
- (unsigned long long)numMediaSelectionsThatWillReceiveDownloadProgress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (bool)performKeyFetchOnly;
- (id)preferredAudioLanguageCodes;
- (double)progress;
- (void)removeDelegate:(id)arg1;
- (id)reportingSession;
- (void)setAllowCellularUsage:(bool)arg1;
- (void)setAllowHDR:(bool)arg1;
- (void)setAllowMultichannelAudio:(bool)arg1;
- (void)setDelegates:(id)arg1;
- (void)setDownloadInitiationBackgroundTask:(unsigned long long)arg1;
- (void)setDownloadIsComplete:(bool)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setDownloadSession:(id)arg1;
- (void)setDownloadTask:(id)arg1;
- (void)setDownloadTerminationBackgroundTask:(unsigned long long)arg1;
- (void)setError:(id)arg1;
- (void)setIncludeDefaultAudioOption:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMediaItemLoader:(id)arg1;
- (void)setMediaSelectionToProgressMap:(id)arg1;
- (void)setMinimumRequiredMediaBitrate:(id)arg1;
- (void)setMinimumRequiredPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumMediaSelectionsCompleted:(unsigned long long)arg1;
- (void)setNumMediaSelectionsThatWillReceiveDownloadProgress:(unsigned long long)arg1;
- (void)setPerformKeyFetchOnly:(bool)arg1;
- (void)setPreferredAudioLanguageCodes:(id)arg1;
- (void)setReportingSession:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setUseLegacyAudioSettings:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)start;
- (long long)state;
- (id)stateMachine;
- (bool)useLegacyAudioSettings;
- (id)userInfo;

@end