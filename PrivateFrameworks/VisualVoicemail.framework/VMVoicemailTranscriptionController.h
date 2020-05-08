/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailTranscriptionController : NSObject {
    VMTranscriptionAssetModelOperation * _assetModelOperation;
    NSMapTable * _delegateToQueue;
    NSLocale * _locale;
    <VMNetworkObserver> * _networkObserver;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    <VMSpeechRecognizer> * _speechRecognizer;
    bool  _transcribing;
    NSOperationQueue * _transcriptionOperationQueue;
    NSProgress * _transcriptionProgress;
    <VMTranscriptionService> * _transcriptionService;
}

@property (nonatomic) VMTranscriptionAssetModelOperation *assetModelOperation;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, retain) <VMNetworkObserver> *networkObserver;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, readonly) <VMSpeechRecognizer> *speechRecognizer;
@property (getter=isTranscribing, nonatomic, readonly) bool transcribing;
@property (nonatomic, readonly) NSOperationQueue *transcriptionOperationQueue;
@property (nonatomic, readonly) NSProgress *transcriptionProgress;
@property (nonatomic, retain) <VMTranscriptionService> *transcriptionService;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)assetModelOperation;
- (id)assetModelOperationWithCompletion:(id /* block */)arg1;
- (void)cancelQueuedTranscriptions;
- (void)dealloc;
- (id)delegateToQueue;
- (void)handleCPNetworkObserverNetworkReachableNotification:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)initWithSpeechRecognizer:(id)arg1;
- (bool)isDictationModelInstalled;
- (bool)isTranscribing;
- (id)locale;
- (id)networkObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performSynchronousBlock:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeNetworkReachableObserver;
- (void)reportDictationProblemForFileAtURL:(id)arg1;
- (void)requestAssetModelInstallation;
- (void)requestAssetModelOperationWithCompletion:(id /* block */)arg1;
- (void)requestDatabaseSanitization;
- (void)retrieveDictationResultForFileAtURL:(id)arg1 queuePriority:(long long)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (id)serialDispatchQueue;
- (void)setAssetModelOperation:(id)arg1;
- (void)setNetworkObserver:(id)arg1;
- (void)setTranscriptionService:(id)arg1;
- (id)speechRecognizer;
- (id)transcriptionOperationQueue;
- (id)transcriptionProgress;
- (id)transcriptionService;

@end
