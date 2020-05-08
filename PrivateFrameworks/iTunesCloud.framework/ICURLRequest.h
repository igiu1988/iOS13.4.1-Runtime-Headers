/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICURLRequest : NSObject <NSProgressReporting> {
    NSDictionary * _avDownloadOptions;
    bool  _cancelOnHTTPErrors;
    id /* block */  _completionHandler;
    NSURLRequest * _currentURLRequest;
    NSError * _error;
    bool  _extendedCertificateValidationRequired;
    long long  _handlingType;
    double  _lastProgressUpdateTime;
    double  _lastUpdateTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _maxRetryCounts;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableArray * _observers;
    bool  _prioritize;
    NSProgress * _progress;
    unsigned long long  _redirectCount;
    ICRequestContext * _requestContext;
    long long  _requestState;
    NSMutableData * _responseData;
    NSURL * _responseDataURL;
    ICURLResponseHandler * _responseHandler;
    NSData * _resumeData;
    NSMutableDictionary * _retryCounts;
    double  _retryDelay;
    NSString * _retryReason;
    double  _startTime;
    NSURLSessionTask * _task;
    long long  _type;
    NSURLRequest * _urlRequest;
    NSURLResponse * _urlResponse;
    NSObject<OS_dispatch_semaphore> * _waitSemaphore;
}

@property (nonatomic, retain) NSDictionary *avDownloadOptions;
@property (nonatomic) bool cancelOnHTTPErrors;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSURLRequest *currentURLRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (getter=isExtendedCertificateValidationRequired, nonatomic) bool extendedCertificateValidationRequired;
@property (nonatomic) long long handlingType;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastProgressUpdateTime;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) bool prioritize;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) unsigned long long redirectCount;
@property (nonatomic, readonly, copy) ICRequestContext *requestContext;
@property (nonatomic) long long requestState;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURL *responseDataURL;
@property (nonatomic, retain) ICURLResponseHandler *responseHandler;
@property (nonatomic, readonly, copy) NSData *resumeData;
@property (nonatomic, readonly) unsigned long long retryCount;
@property (nonatomic) double retryDelay;
@property (nonatomic, retain) NSString *retryReason;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSessionTask *task;
@property (nonatomic) long long type;
@property (nonatomic, readonly) NSURLRequest *urlRequest;
@property (nonatomic, retain) NSURLResponse *urlResponse;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *waitSemaphore;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)arg1;

- (void).cxx_destruct;
- (void)_ensureValidRetryReason:(id)arg1;
- (void)_incrementRetryCountForReason:(id)arg1;
- (unsigned long long)_maxRetryCountForReason:(id)arg1;
- (unsigned long long)_retryCountForReason:(id)arg1;
- (void)_setMaxRetryCount:(unsigned long long)arg1 forReason:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)avDownloadOptions;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)arg1;
- (bool)cancelOnHTTPErrors;
- (id /* block */)completionHandler;
- (id)currentURLRequest;
- (void)dealloc;
- (id)description;
- (id)error;
- (long long)handlingType;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (bool)isExtendedCertificateValidationRequired;
- (double)lastProgressUpdateTime;
- (double)lastUpdateTime;
- (unsigned long long)maxRetryCount;
- (bool)prioritize;
- (id)progress;
- (unsigned long long)redirectCount;
- (void)removeObserver:(id)arg1;
- (id)requestContext;
- (long long)requestState;
- (id)responseData;
- (id)responseDataURL;
- (id)responseHandler;
- (id)resumeData;
- (unsigned long long)retryCount;
- (double)retryDelay;
- (id)retryReason;
- (void)setAvDownloadOptions:(id)arg1;
- (void)setCancelOnHTTPErrors:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentURLRequest:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExtendedCertificateValidationRequired:(bool)arg1;
- (void)setHandlingType:(long long)arg1;
- (void)setLastProgressUpdateTime:(double)arg1;
- (void)setLastUpdateTime:(double)arg1;
- (void)setMaxRetryCount:(unsigned long long)arg1;
- (void)setPrioritize:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setRequestState:(long long)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseDataURL:(id)arg1;
- (void)setResponseHandler:(id)arg1;
- (void)setRetryDelay:(double)arg1;
- (void)setRetryReason:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTask:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUrlResponse:(id)arg1;
- (void)setWaitSemaphore:(id)arg1;
- (double)startTime;
- (id)task;
- (long long)type;
- (void)updateState:(long long)arg1;
- (id)urlRequest;
- (id)urlResponse;
- (id)waitSemaphore;

@end
