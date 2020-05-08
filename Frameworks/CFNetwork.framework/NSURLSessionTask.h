/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTask : NSObject <FCOperationIdentifying, FCOperationPrioritizing, NSCopying, NSProgressReporting, RCOperationIdentifying, RCOperationPrioritizing> {
    <__NSURLSessionTaskGroupForConfiguration> * __taskGroup;
    __CFN_TaskMetrics * _metrics_ivar;
    NSObject<OS_nw_activity> * _nw_activity_ivar;
    NSObject<OS_nw_activity> * _private_nw_activity;
    NSDate * earliestBeginDate;
}

@property (nonatomic, copy) NSString *_APSRelayTopic;
@property (copy) NSDictionary *_DuetActivityProperties;
@property (copy) NSData *_TCPConnectionMetadata;
@property unsigned short _TLSMaximumSupportedProtocolVersion;
@property unsigned short _TLSMinimumSupportedProtocolVersion;
@property (readonly) unsigned short _TLSNegotiatedCipherSuite;
@property unsigned long long _allowedProtocolTypes;
@property bool _allowsCellular;
@property int _allowsCellularOverride;
@property int _allowsConstrainedOverride;
@property int _allowsExpensiveOverride;
@property (nonatomic) bool _allowsQUIC;
@property bool _appSSOFallback;
@property (setter=_setAppleIDContext:, copy) <NSURLSessionAppleIDContext> *_appleIDContext;
@property bool _appleIDContextRedirect;
@property bool _authenticatorConfiguredViaTaskProperty;
@property (nonatomic, retain) NSURL *_backgroundPublishingURL;
@property (retain) __CFN_TransactionMetrics *_backgroundTransactionMetrics;
@property (copy) NSString *_boundInterfaceIdentifier;
@property long long _bytesPerSecondLimit;
@property bool _cacheOnly;
@property unsigned long long _cachePolicy;
@property (retain) const struct _CFURLCache { }*_cfCache;
@property (retain) struct OpaqueCFHTTPCookieStorage { }*_cfCookies;
@property (retain) struct _CFURLCredentialStorage { }*_cfCreds;
@property (retain) struct _CFHSTSPolicy { }*_cfHSTS;
@property (setter=_setConnectionIsCellular:) bool _connectionIsCellular;
@property bool _connectionIsCompanionLink;
@property (copy) NSArray *_contentDispositionFallbackArray;
@property int _cookieAcceptPolicy;
@property long long _countOfBytesReceivedEncoded;
@property long long _countOfPendingBytesReceivedEncoded;
@property unsigned int _darkWakePowerAssertion;
@property (nonatomic, retain) NSDictionary *_dependencyInfo;
@property bool _disallowCellular;
@property (nonatomic) long long _discretionaryOverride;
@property (nonatomic) bool _doesSZExtractorConsumeExtractedData;
@property (readonly, copy) NSURLSessionEffectiveConfiguration *_effectiveConfiguration;
@property (nonatomic) unsigned long long _expectedProgressTarget;
@property long long _expectedWorkload;
@property (setter=set_extractor:, nonatomic, retain) <SZExtractor> *_extractor;
@property bool _extractorFinishedDecoding;
@property bool _extractorPreparedForExtraction;
@property (nonatomic) bool _hasSZExtractor;
@property (nonatomic, copy) id /* block */ _httpConnectionInfoCompletionBlock;
@property (nonatomic, readonly) bool _isAVAssetTask;
@property bool _isTopLevelNavigation;
@property (copy) NSDictionary *_legacySocketStreamProperties;
@property double _loadingPriority;
@property double _loadingPriorityValue;
@property (nonatomic, readonly) NSString *_loggableDescription;
@property (retain) __CFN_TaskMetrics *_metrics;
@property int _networkServiceType;
@property (retain) NSObject<OS_nw_activity> *_nw_activity;
@property (copy) NSString *_pathToDownloadTaskFile;
@property unsigned int _powerAssertion;
@property (nonatomic) bool _preconnect;
@property bool _preventsAppSSO;
@property bool _preventsIdleSystemSleep;
@property bool _preventsSystemHTTPProxyAuthentication;
@property long long _priority;
@property long long _priorityValue;
@property (retain) NSObject<OS_nw_activity> *_private_nw_activity;
@property bool _prohibitAuthUI;
@property (nonatomic) id _protocolForTask;
@property (copy) NSDictionary *_proxySettings;
@property (nonatomic, retain) NSURL *_publishingURL;
@property (nonatomic) unsigned int _qos;
@property long long _requestPriority;
@property bool _requiresSecureHTTPSProxyConnection;
@property bool _shouldHandleCookies;
@property bool _shouldPipelineHTTP;
@property (nonatomic) bool _shouldReportTimingDataToAWD;
@property bool _shouldSkipPipelineProbe;
@property bool _shouldSkipPreferredClientCertificateLookup;
@property bool _shouldUsePipelineHeuristics;
@property (retain) NSURL *_siteForCookies;
@property (copy) NSDictionary *_sslSettings;
@property (copy) NSString *_storagePartitionIdentifier;
@property bool _strictContentLength;
@property long long _suspensionThreshhold;
@property (readonly, retain) <__NSURLSessionTaskGroupForConfiguration> *_taskGroup;
@property double _timeWindowDelay;
@property double _timeWindowDuration;
@property double _timeoutInterval;
@property double _timeoutIntervalForResource;
@property (nonatomic, retain) NSDictionary *_trailers;
@property (copy) NSUUID *_uniqueIdentifier;
@property (retain) NSObject<OS_voucher> *_voucher;
@property (copy) NSURLSessionTaskHTTPAuthenticator *authenticator;
@property long long countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend;
@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property (copy) NSURLRequest *currentRequest;
@property (readonly, retain) NSURL *currentRequest_URL;
@property (readonly, retain) NSURL *currentRequest_mainDocumentURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSURLSessionTaskDependencyTree *dependencyTree;
@property (readonly, copy) NSString *description;
@property (copy) NSDate *earliestBeginDate;
@property (copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (copy) NSURLRequest *originalRequest;
@property float priority;
@property (readonly) NSProgress *progress;
@property (nonatomic) long long relativePriority;
@property (copy) NSURLResponse *response;
@property (readonly, retain) NSURLSession *session;
@property double startTime;
@property long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionTaskDependency *taskDependency;
@property (copy) NSString *taskDescription;
@property unsigned long long taskIdentifier;
@property (nonatomic, readonly) NSURLSessionTaskMetrics *ts_taskMetrics;
@property (readonly, retain) NSObject<OS_dispatch_queue> *workQueue;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)new;

- (void)_adoptEffectiveConfiguration:(id)arg1;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (void)_completeUploadProgress;
- (void)_consumePendingBytesReceivedEncoded;
- (const struct __CFDictionary { }*)_copyATSState;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (const struct __CFDictionary { }*)_copySocketStreamProperties;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (void)_didSendMetrics;
- (void)_finishProgressReporting;
- (void)_getAuthenticationHeadersForResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (const struct __CFSet { }*)_getAuthenticatorStatusCodes;
- (bool)_isAVAssetTask;
- (void)_logUnimplemented:(SEL)arg1;
- (id)_loggableDescription;
- (id)_metrics;
- (bool)_needSendingMetrics;
- (id)_nw_activity;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_adoptEffectiveConfiguration:(id)arg1;
- (void)_onqueue_expectedProgressTargetChanged;
- (void)_onqueue_releasePowerAsssertion;
- (id)_private_nw_activity;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (void)_setBytesPerSecondLimit:(long long)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (id)_taskGroup;
- (void)_withXURLCache:(id /* block */)arg1;
- (void)cancel;
- (long long)computeAdjustedPoolPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)earliestBeginDate;
- (void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithTaskGroup:(id)arg1;
- (void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2;
- (void)resume;
- (id)session;
- (void)setEarliestBeginDate:(id)arg1;
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1;
- (void)set_metrics:(id)arg1;
- (void)set_nw_activity:(id)arg1;
- (void)set_private_nw_activity:(id)arg1;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)suspend;
- (void)updateCurrentRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices

- (id)descriptionWithAddress;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)longOperationDescription;
- (long long)relativePriority;
- (void)setRelativePriority:(long long)arg1;
- (id)shortOperationDescription;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (id)longOperationDescription;
- (long long)relativePriority;
- (void)setRelativePriority:(long long)arg1;
- (id)shortOperationDescription;

// Image: /System/Library/PrivateFrameworks/TeaFoundation.framework/TeaFoundation

- (id)ts_taskMetrics;

@end
