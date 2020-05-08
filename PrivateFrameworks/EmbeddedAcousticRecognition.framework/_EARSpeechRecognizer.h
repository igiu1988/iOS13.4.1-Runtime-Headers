/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognizer : NSObject {
    NSString * _bluetoothDeviceId;
    bool  _concatenateUtterances;
    NSString * _configPath;
    _EARSpeechRecognitionAudioBuffer * _currentAudioBuffer;
    NSString * _currentLanguage;
    struct weak_ptr<ResultStreamWrapper> { 
        struct ResultStreamWrapper {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _currentResultStreamWrapper;
    unsigned long long  _currentSamplingRate;
    NSString * _currentTask;
    bool  _detectUtterances;
    NSString * _deviceId;
    double  _endpointStart;
    bool  _farField;
    _EARFormatter * _formatter;
    NSObject<OS_dispatch_queue> * _formatterQueue;
    bool  _highPriority;
    NSString * _inputOrigin;
    NSData * _jitProfileData;
    NSArray * _leftContext;
    double  _maximumRecognitionDuration;
    NSDictionary * _recognitionConfidenceSubtraction;
    NSObject<OS_dispatch_queue> * _recognitionQueue;
    NSDictionary * _recognitionReplacements;
    bool  _recognizeEagerCandidates;
    struct unique_ptr<quasar::SpeechRecognizer, std::__1::default_delete<quasar::SpeechRecognizer> > { 
        struct __compressed_pair<quasar::SpeechRecognizer *, std::__1::default_delete<quasar::SpeechRecognizer> > { 
            struct SpeechRecognizer {} *__value_; 
        } __ptr_; 
    }  _recognizer;
    NSString * _refTranscriptForErrorBlaming;
    NSString * _sessionId;
    struct unique_ptr<quasar::TextTokenizer, std::__1::default_delete<quasar::TextTokenizer> > { 
        struct __compressed_pair<quasar::TextTokenizer *, std::__1::default_delete<quasar::TextTokenizer> > { 
            struct TextTokenizer {} *__value_; 
        } __ptr_; 
    }  _tokenizer;
    NSString * _userId;
    NSData * _userProfileData;
}

@property (nonatomic, copy) NSString *bluetoothDeviceId;
@property (nonatomic) bool concatenateUtterances;
@property (nonatomic) bool detectUtterances;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic) double endpointStart;
@property (nonatomic) bool farField;
@property (nonatomic) bool highPriority;
@property (nonatomic, copy) NSString *inputOrigin;
@property (nonatomic, copy) NSData *jitProfileData;
@property (nonatomic, copy) NSArray *leftContext;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic, readonly) _EARSpeechModelInfo *modelInfo;
@property (nonatomic, copy) NSDictionary *recognitionConfidenceSubtraction;
@property (nonatomic, copy) NSDictionary *recognitionReplacements;
@property (nonatomic) bool recognizeEagerCandidates;
@property (nonatomic, copy) NSString *refTranscriptForErrorBlaming;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSData *userProfileData;

+ (void)initialize;
+ (id)maximumSupportedConfigurationVersion;
+ (id)minimumSupportedConfigurationVersion;
+ (id)rawTokenResultsFromRecognitionResults:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase {} *x1; struct __shared_weak_count {} *x2; })_audioBufferWithLangauge:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 userProfileData:(id)arg4 resultStream:(struct shared_ptr<quasar::RecogResultStreamBase> { struct RecogResultStreamBase {} *x1; struct __shared_weak_count {} *x2; })arg5;
- (void)_restartActiveRecognition;
- (struct TextTokenizer { int (**x1)(); }*)_tokenizer;
- (id)bluetoothDeviceId;
- (void)cancelRecognition;
- (bool)concatenateUtterances;
- (bool)detectUtterances;
- (id)deviceId;
- (double)endpointStart;
- (bool)farField;
- (void)getFormatterWithBlock:(id /* block */)arg1;
- (bool)highPriority;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2;
- (id)initWithConfiguration:(id)arg1 overrideConfigFiles:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 generalVoc:(id)arg3 lexiconEnh:(id)arg4 itnEnh:(id)arg5;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3;
- (id)initWithConfiguration:(id)arg1 overrides:(id)arg2 overrideConfigFiles:(id)arg3 generalVoc:(id)arg4 lexiconEnh:(id)arg5 itnEnh:(id)arg6;
- (id)initWithConfiguration:(id)arg1 useQuasarFormatter:(bool)arg2;
- (id)initWithConfiguration:(id)arg1 withGeneralVoc:(id)arg2 withLexiconEnh:(id)arg3 withItnEnh:(id)arg4;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiConfig:(id)arg3;
- (id)inputOrigin;
- (id)jitProfileData;
- (id)leftContext;
- (double)maximumRecognitionDuration;
- (id)modelInfo;
- (id)recognitionConfidenceSubtraction;
- (id)recognitionReplacements;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5;
- (id)recognitionResultsWithAudioData:(id)arg1 userProfileData:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 extraLanguageModel:(id)arg6;
- (id)recognitionStatistics;
- (bool)recognizeEagerCandidates;
- (id)refTranscriptForErrorBlaming;
- (struct shared_ptr<quasar::SpeechRequestData> { struct SpeechRequestData {} *x1; struct __shared_weak_count {} *x2; })requestParametersWithUserProfileData:(id)arg1 task:(id)arg2 samplingRate:(unsigned long long)arg3 resultStream:(struct shared_ptr<quasar::RecogResultStreamBase> { struct RecogResultStreamBase {} *x1; struct __shared_weak_count {} *x2; })arg4 extraLanguageModel:(id)arg5 symbolTableList:(const struct shared_ptr<quasar::SymbolTableList> { struct SymbolTableList {} *x1; struct __shared_weak_count {} *x2; }*)arg6;
- (id)runRecognitionWithResultStream:(id)arg1;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4;
- (id)runRecognitionWithResultStream:(id)arg1 language:(id)arg2 task:(id)arg3 samplingRate:(unsigned long long)arg4 userProfileData:(id)arg5;
- (id)sessionId;
- (void)setAlternateRawRecognitionTokenSausage:(id)arg1;
- (void)setBluetoothDeviceId:(id)arg1;
- (void)setConcatenateUtterances:(bool)arg1;
- (void)setDetectUtterances:(bool)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setEndpointStart:(double)arg1;
- (void)setFarField:(bool)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setInputOrigin:(id)arg1;
- (void)setJitProfileData:(id)arg1;
- (void)setLeftContext:(id)arg1;
- (void)setLeftContextText:(id)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setRecognitionConfidenceSubtraction:(id)arg1;
- (void)setRecognitionReplacements:(id)arg1;
- (void)setRecognizeEagerCandidates:(bool)arg1;
- (void)setRefTranscriptForErrorBlaming:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setUserProfileData:(id)arg1;
- (void)updateJitProfileData:(id)arg1;
- (void)updateUserProfileData:(id)arg1;
- (id)userId;
- (id)userProfileData;

@end