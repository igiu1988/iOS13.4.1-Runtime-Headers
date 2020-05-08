/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataURLSessionTask : NSObject <GEODataSessionTask, GEODataSessionUpdatableTask> {
    NSObject<OS_os_activity> * _activity;
    NSURLSessionTask * _backingTask;
    bool  _backingTaskNeedsResume;
    NSData * _cachedData;
    <GEODataSessionTaskDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    double  _endTime;
    bool  _finished;
    bool  _mptcpNegotiated;
    NSError * _nonBackingTaskError;
    NSDate * _originalStartDate;
    <NSObject> * _parsedResponse;
    float  _priority;
    unsigned int  _qos;
    NSMutableData * _receivedData;
    bool  _receivedRNFNotification;
    GEODataRequest * _request;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _requestKind;
    unsigned int  _sessionIdentifier;
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    double  _startTime;
    NSURLSessionTaskMetrics * _urlTaskMetrics;
    NSObject<OS_voucher> * _voucher;
}

@property (nonatomic, readonly) long long HTTPStatusCode;
@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) NSURLSessionTask *backingTask;
@property (nonatomic, copy) NSData *cachedData;
@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, readonly) unsigned long long contentLength;
@property (nonatomic, readonly) NSString *contentLengthString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <GEODataSessionTaskDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *downloadedFileURL;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) NSString *entityTag;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) bool failedDueToCancel;
@property (nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) double loadTime;
@property (nonatomic, readonly) bool mptcpNegotiated;
@property (nonatomic, readonly) NSURL *originalRequestURL;
@property (nonatomic, readonly) NSURLRequest *originalURLRequest;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) <NSObject> *parsedResponse;
@property float priority;
@property (nonatomic, readonly) bool protocolBufferHasPreamble;
@property (nonatomic, readonly) NSData *receivedData;
@property (nonatomic) bool receivedRNFNotification;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) GEODataRequest *request;
@property (nonatomic, readonly) <GEORequestCounterTicket> *requestCounterTicket;
@property (nonatomic, readonly) struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } requestKind;
@property (nonatomic, readonly) unsigned long long requestedMultipathServiceType;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic) unsigned int sessionIdentifier;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURLSessionTaskMetrics *urlTaskMetrics;

- (void).cxx_destruct;
- (long long)HTTPStatusCode;
- (id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2;
- (void)_prepareForRestart;
- (void)_start;
- (id)activity;
- (id)backingTask;
- (id)cachedData;
- (void)cancel;
- (id)clientMetrics;
- (unsigned long long)contentLength;
- (id)contentLengthString;
- (id)createURLRequest;
- (id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2;
- (void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2;
- (void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)debugDescription;
- (id)delegate;
- (void)delegateAsync:(id /* block */)arg1;
- (id)delegateQueue;
- (id)description;
- (void)didCollectMetrics:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2;
- (id)downloadedFileURL;
- (double)elapsedTime;
- (id)entityTag;
- (id)error;
- (bool)failedDueToCancel;
- (bool)finished;
- (unsigned long long)incomingPayloadSize;
- (id)init;
- (id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg4 priority:(float)arg5;
- (double)loadTime;
- (double)loadTimeIncludingTask:(id)arg1;
- (bool)mptcpNegotiated;
- (void)notifyDelegateWithSession:(id)arg1;
- (id)originalRequestURL;
- (id)originalURLRequest;
- (unsigned long long)outgoingPayloadSize;
- (id)parsedResponse;
- (float)priority;
- (bool)protocolBufferHasPreamble;
- (id)receivedData;
- (bool)receivedRNFNotification;
- (id)remoteAddressAndPort;
- (id)request;
- (id)requestCounterTicket;
- (struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })requestKind;
- (unsigned long long)requestedMultipathServiceType;
- (id)response;
- (unsigned int)sessionIdentifier;
- (void)setCachedData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setParsedResponse:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setReceivedRNFNotification:(bool)arg1;
- (void)setSessionIdentifier:(unsigned int)arg1;
- (void)start;
- (double)startTime;
- (void)updateRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)urlTaskMetrics;
- (bool)validateContentLengthWithError:(id*)arg1;
- (bool)validateNonEmptyResponseWithError:(id*)arg1;
- (bool)validateTileResponse:(bool)arg1 error:(id*)arg2;

@end
