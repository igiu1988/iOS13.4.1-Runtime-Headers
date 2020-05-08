/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKNetworkRequestOperation : WLKAsyncOperation {
    NSNumber * _DSID;
    id  _authenticationDelegate;
    NSData * _data;
    AMSURLRequestEncoder * _encoder;
    NSError * _error;
    NSHTTPURLResponse * _httpResponse;
    NSString * _identifier;
    long long  _options;
    NSURLRequest * _request;
    long long  _responseStatusCode;
    AMSURLSession * _session;
    unsigned long long  _signpostIdentifier;
    NSDate * _startDate;
    NSURLSessionDataTask * _task;
}

@property (nonatomic, copy) NSNumber *DSID;
@property (nonatomic) id authenticationDelegate;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) AMSURLRequestEncoder *encoder;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSHTTPURLResponse *httpResponse;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) long long options;
@property (nonatomic, copy) NSURLRequest *request;
@property (nonatomic) long long responseStatusCode;
@property (nonatomic, retain) AMSURLSession *session;
@property (nonatomic) unsigned long long signpostIdentifier;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSURLSessionDataTask *task;

- (void).cxx_destruct;
- (id)DSID;
- (void)_finishExecutionIfPossibleWithError:(id)arg1;
- (void)_startNetworkRequest;
- (long long)_statusCodeForAMSResult:(id)arg1 error:(id)arg2;
- (id)authenticationDelegate;
- (void)cancel;
- (void)configureSession;
- (id)data;
- (id)encoder;
- (id)error;
- (void)executionDidBegin;
- (void)finishExecutionIfPossible;
- (void)handleResult:(id)arg1 error:(id)arg2;
- (id)httpResponse;
- (id)identifier;
- (id)init;
- (id)initWithURLRequest:(id)arg1 options:(long long)arg2;
- (long long)options;
- (void)prepareAndStartNetworkRequest;
- (void)prepareURLRequest:(id /* block */)arg1;
- (void)processResponse;
- (id)request;
- (long long)responseStatusCode;
- (id)session;
- (void)setAuthenticationDelegate:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setData:(id)arg1;
- (void)setEncoder:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponseStatusCode:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)setSignpostIdentifier:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTask:(id)arg1;
- (unsigned long long)signpostIdentifier;
- (id)startDate;
- (id)task;

@end
