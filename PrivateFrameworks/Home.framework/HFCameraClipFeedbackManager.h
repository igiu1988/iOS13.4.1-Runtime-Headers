/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraClipFeedbackManager : NSObject <NSURLSessionDelegate> {
    unsigned long long  _apiVersion;
    NSURLSession * _backgroundSession;
    NSOperationQueue * _backgroundSessionQueue;
    NSString * _backgroundURLSessionIdentifier;
    NSString * _currentApiKey;
    HMCameraProfile * _currentCameraProfile;
    NSURL * _currentUploadURL;
    NSString * _currentWrappedApiKey;
    <HFCameraClipFeedbackObserving> * _delegate;
    bool  _disableCertificatePinning;
    unsigned long long  _environment;
    NSMutableSet * _failedClipIdentifiers;
    bool  _isEligibleToAddFailedClipsToPendingQueue;
    NSTimer * _networkingTimeout;
    NSMutableOrderedSet * _pendingClipIdentifiers;
    id /* block */  _sessionCompletionHandler;
    NSURLSessionDataTask * _signedURLTask;
    NSMutableDictionary * _submittedClipIdentifiers;
    NSMutableSet * _uploadedClipIdentifiers;
    BKSProcessAssertion * _uploadsInProgressAssertion;
    HMCameraClipFetchVideoAssetContextOperation * _videoDownloadOperation;
}

@property (nonatomic) unsigned long long apiVersion;
@property (nonatomic, retain) NSURLSession *backgroundSession;
@property (nonatomic, retain) NSOperationQueue *backgroundSessionQueue;
@property (nonatomic, retain) NSString *backgroundURLSessionIdentifier;
@property (nonatomic, retain) NSString *currentApiKey;
@property (nonatomic, retain) HMCameraProfile *currentCameraProfile;
@property (nonatomic, retain) NSURL *currentUploadURL;
@property (nonatomic, retain) NSString *currentWrappedApiKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HFCameraClipFeedbackObserving> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableCertificatePinning;
@property (nonatomic) unsigned long long environment;
@property (nonatomic, retain) NSMutableSet *failedClipIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEligibleToAddFailedClipsToPendingQueue;
@property (nonatomic, retain) NSTimer *networkingTimeout;
@property (nonatomic, retain) NSMutableOrderedSet *pendingClipIdentifiers;
@property (nonatomic, copy) id /* block */ sessionCompletionHandler;
@property (nonatomic, retain) NSURLSessionDataTask *signedURLTask;
@property (nonatomic, retain) NSMutableDictionary *submittedClipIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *uploadedClipIdentifiers;
@property (nonatomic, retain) BKSProcessAssertion *uploadsInProgressAssertion;
@property (nonatomic, retain) HMCameraClipFetchVideoAssetContextOperation *videoDownloadOperation;

+ (id)_appendDateStringToString:(id)arg1;
+ (id)_cameraProfileFromKey:(id)arg1;
+ (id)_prefixStringWithoutDate:(id)arg1;
+ (id)backgroundURLSessionIdentifier;
+ (id)dateFormatter;
+ (id)dateStringFromDate:(id)arg1;
+ (id)feedbackRequestURLForClipUUIDString:(id)arg1;
+ (id)sharedManager;
+ (id)submissionKeyForCameraClip:(id)arg1 fromCameraProfile:(id)arg2;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)_addIdentifierToPendingClipIdentifiers:(id)arg1;
- (void)_addSubmissionKeyToUploadService:(id)arg1;
- (id)_appendDateStringToString:(id)arg1;
- (id)_base64EncodeDataAsString:(id)arg1;
- (void)_beginNextSubmissionProcessForIdentifier:(id)arg1;
- (void)_cacheFeedbackService;
- (id)_cameraClipKeyFromSubmissionKey:(id)arg1;
- (id)_cameraProfileKeyFromSubmissionKey:(id)arg1;
- (bool)_canBypassCertificatePinning;
- (bool)_canChallengeBypassCertificatePinning:(id)arg1;
- (void)_cleanUpCurrentCameraProfileIfNeeded;
- (void)_cleanUpLocalFilesForIdentifier:(id)arg1;
- (id)_encryptRecording:(id)arg1 usingKey:(id)arg2 forPayload:(id)arg3;
- (void)_failAttemptToUploadCurrentIdentifier;
- (void)_finalizeHandlingOfIdentifier:(id)arg1;
- (id)_identifierFromString:(id)arg1;
- (void)_invalidateAssertion;
- (bool)_isValidSubmissionKey:(id)arg1;
- (bool)_needsToPurgeClipsOlderThanThirtyDays;
- (void)_prepareQueuesForResumptionOfService;
- (id)_previousFailureIdentifierForIdentifier:(id)arg1;
- (void)_reloadFailedIdentifiersToPendingQueue:(id)arg1;
- (void)_removeFailureIdentifier:(id)arg1;
- (void)_removeFileAtLocation:(id)arg1;
- (void)_removePendingIdentifier:(id)arg1;
- (void)_updatePreviousClipIdentifiers:(id)arg1 forKey:(id)arg2;
- (void)addFailedIdentifiersToPendingQueueIfEligible;
- (unsigned long long)apiVersion;
- (id)backgroundSession;
- (id)backgroundSessionQueue;
- (id)backgroundURLSessionIdentifier;
- (void)cancelSignedURLRequest;
- (id)currentApiKey;
- (id)currentCameraProfile;
- (id)currentUploadURL;
- (id)currentWrappedApiKey;
- (id)delegate;
- (bool)didPreviouslySubmitCameraClip:(id)arg1;
- (bool)disableCertificatePinning;
- (unsigned long long)environment;
- (id)failedClipIdentifiers;
- (id)feedbackServiceHostName;
- (id)feedbackServiceURL;
- (id)init;
- (void)invalidateVideoDownloadOperation;
- (bool)isEligibleToAddFailedClipsToPendingQueue;
- (id)networkingTimeout;
- (id)nextSubmissionKeyToProcess;
- (id)pendingClipIdentifiers;
- (void)prepareServiceForActivityWhileBackgrounded;
- (void)purgeStaleSubmittedClips;
- (void)restartFeedbackServiceIfNeeded;
- (void)resumeServiceForURLSessionIdentifier:(id)arg1;
- (bool)serviceNeedsToContinueInBackground;
- (id /* block */)sessionCompletionHandler;
- (void)setApiVersion:(unsigned long long)arg1;
- (void)setBackgroundSession:(id)arg1;
- (void)setBackgroundSessionQueue:(id)arg1;
- (void)setBackgroundURLSessionIdentifier:(id)arg1;
- (void)setCurrentApiKey:(id)arg1;
- (void)setCurrentCameraProfile:(id)arg1;
- (void)setCurrentUploadURL:(id)arg1;
- (void)setCurrentWrappedApiKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableCertificatePinning:(bool)arg1;
- (void)setEnvironment:(unsigned long long)arg1;
- (void)setFailedClipIdentifiers:(id)arg1;
- (void)setIsEligibleToAddFailedClipsToPendingQueue:(bool)arg1;
- (void)setNetworkingTimeout:(id)arg1;
- (void)setPendingClipIdentifiers:(id)arg1;
- (void)setSessionCompletionHandler:(id /* block */)arg1;
- (void)setSignedURLTask:(id)arg1;
- (void)setSubmittedClipIdentifiers:(id)arg1;
- (void)setUploadedClipIdentifiers:(id)arg1;
- (void)setUploadsInProgressAssertion:(id)arg1;
- (void)setVideoDownloadOperation:(id)arg1;
- (id)signedURLTask;
- (void)stripAudioFromFileForCameraClipIdentifier:(id)arg1 sendToUploadLocation:(id)arg2;
- (void)submitCameraClip:(id)arg1 fromCameraProfile:(id)arg2;
- (void)submitClipsFromCameraProfile:(id)arg1;
- (void)submitNextPendingCameraClip;
- (id)submittedClipIdentifiers;
- (void)updateLastPurgeDate;
- (void)uploadStrippedAudioMovieFileAtURL:(id)arg1 toLocation:(id)arg2;
- (id)uploadedClipIdentifiers;
- (id)uploadsInProgressAssertion;
- (id)videoDownloadOperation;
- (void)willResignActive;

@end
