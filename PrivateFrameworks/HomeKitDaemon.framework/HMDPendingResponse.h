/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPendingResponse : HMFObject {
    NSMutableArray * _allResponses;
    double  _creationTime;
    NSMutableArray * _latestResponses;
    NSString * _originalRequestIdentifier;
    unsigned long long  _pendingResponseCount;
    HMFMessage * _requestMessage;
    id /* block */  _responseHandler;
    unsigned long long  _totalRequestsCount;
}

@property (nonatomic, retain) NSMutableArray *allResponses;
@property (nonatomic) double creationTime;
@property (nonatomic, retain) NSMutableArray *latestResponses;
@property (nonatomic, retain) NSString *originalRequestIdentifier;
@property (nonatomic) unsigned long long pendingResponseCount;
@property (nonatomic, retain) HMFMessage *requestMessage;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) unsigned long long totalRequestsCount;

+ (id)tupleForMessage:(id)arg1 originalRequestIdentifier:(id)arg2 requestCount:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)addResponsesToPendingResponse:(id)arg1;
- (void)addToPendingResponses:(id)arg1;
- (id)allResponses;
- (double)creationTime;
- (id)description;
- (id)latestResponses;
- (id)originalRequestIdentifier;
- (unsigned long long)pendingResponseCount;
- (id)requestMessage;
- (id /* block */)responseHandler;
- (id)retrieveAndClearAllResponses;
- (id)retrieveAndClearLatestResponses;
- (void)setAllResponses:(id)arg1;
- (void)setCreationTime:(double)arg1;
- (void)setLatestResponses:(id)arg1;
- (void)setOriginalRequestIdentifier:(id)arg1;
- (void)setPendingResponseCount:(unsigned long long)arg1;
- (void)setRequestMessage:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setTotalRequestsCount:(unsigned long long)arg1;
- (unsigned long long)totalRequestsCount;

@end
