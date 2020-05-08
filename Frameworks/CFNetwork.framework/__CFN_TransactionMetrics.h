/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding> {
    bool  _APSRelayAttempted;
    bool  _APSRelaySucceeded;
    NSUUID * _UUID;
    double  _beginTime;
    double  _cacheLookupBeginTime;
    double  _cacheLookupEndTime;
    NSURLResponse * _cachedResponse;
    __CFN_ConnectionMetrics * _connectionMetrics;
    unsigned long long  _endReason;
    double  _endTime;
    bool  _firstOnConnection;
    NSURLResponse * _lastResponse;
    long long  _lastResponseBodySize;
    long long  _lastResponseBodyTransferSize;
    long long  _lastResponseHeaderSize;
    long long  _options;
    bool  _pushed;
    NSURLRequest * _request;
    double  _requestBeginTime;
    long long  _requestBodySize;
    long long  _requestBodyTransferSize;
    double  _requestEndTime;
    long long  _requestHeaderSize;
    double  _responseBeginTime;
    long long  _responseBodySize;
    long long  _responseBodyTransferSize;
    double  _responseEndTime;
    long long  _responseHeaderSize;
    bool  _scheduledOriginLoad;
    long long  _schedulingTier;
    __CFN_SessionMetrics * _sessionMetrics;
    NSDictionary * _subflowCountsBegin;
    NSDictionary * _subflowCountsEnd;
    __CFN_TaskMetrics * _taskMetrics;
    NSDictionary * _tcpInfoBegin;
    NSDictionary * _tcpInfoEnd;
    NSURLRequest * _transferredRequest;
}

@property (nonatomic) bool APSRelayAttempted;
@property (nonatomic) bool APSRelaySucceeded;
@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic) double beginTime;
@property (nonatomic) double cacheLookupBeginTime;
@property (nonatomic) double cacheLookupEndTime;
@property (nonatomic, retain) NSURLResponse *cachedResponse;
@property (nonatomic, retain) __CFN_ConnectionMetrics *connectionMetrics;
@property (nonatomic) unsigned long long endReason;
@property (nonatomic) double endTime;
@property (nonatomic) bool firstOnConnection;
@property (nonatomic, retain) NSURLResponse *lastResponse;
@property (nonatomic) long long lastResponseBodySize;
@property (nonatomic) long long lastResponseBodyTransferSize;
@property (nonatomic) long long lastResponseHeaderSize;
@property (readonly) NSDictionary *legacyStaticMetrics;
@property (nonatomic) long long options;
@property (getter=isPushed, nonatomic) bool pushed;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) double requestBeginTime;
@property (nonatomic) long long requestBodySize;
@property (nonatomic) long long requestBodyTransferSize;
@property (nonatomic) double requestEndTime;
@property (nonatomic) long long requestHeaderSize;
@property (nonatomic) double responseBeginTime;
@property (nonatomic) long long responseBodySize;
@property (nonatomic) long long responseBodyTransferSize;
@property (nonatomic) double responseEndTime;
@property (nonatomic) long long responseHeaderSize;
@property (nonatomic) bool scheduledOriginLoad;
@property (nonatomic) long long schedulingTier;
@property (nonatomic, retain) __CFN_SessionMetrics *sessionMetrics;
@property (nonatomic, retain) NSDictionary *subflowCountsBegin;
@property (nonatomic, retain) NSDictionary *subflowCountsEnd;
@property (nonatomic) __CFN_TaskMetrics *taskMetrics;
@property (nonatomic, retain) NSDictionary *tcpInfoBegin;
@property (nonatomic, retain) NSDictionary *tcpInfoEnd;
@property (nonatomic, retain) NSURLRequest *transferredRequest;

+ (id)nstatCountsFromTCPInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)APSRelayAttempted;
- (bool)APSRelaySucceeded;
- (id)UUID;
- (double)beginTime;
- (void)cacheLookupBegin;
- (double)cacheLookupBeginTime;
- (void)cacheLookupEnd:(struct _CFCachedURLResponse { }*)arg1;
- (double)cacheLookupEndTime;
- (id)cachedResponse;
- (void)connectionCreate:(struct shared_ptr<TransportConnection> { struct TransportConnection {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)connectionMetrics;
- (void)encodeWithCoder:(id)arg1;
- (void)end:(unsigned long long)arg1;
- (unsigned long long)endReason;
- (double)endTime;
- (bool)firstOnConnection;
- (void)importLegacyStaticMetricsFromAPSRelay:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1 taskMetrics:(id)arg2 sessionMetrics:(id)arg3;
- (bool)isPushed;
- (id)lastResponse;
- (long long)lastResponseBodySize;
- (long long)lastResponseBodyTransferSize;
- (long long)lastResponseHeaderSize;
- (id)legacyStaticMetrics;
- (long long)options;
- (void)originLoad;
- (id)request;
- (void)requestBeginOnConnection:(id)arg1;
- (double)requestBeginTime;
- (void)requestBody:(id)arg1;
- (long long)requestBodySize;
- (long long)requestBodyTransferSize;
- (void)requestEnd;
- (double)requestEndTime;
- (void)requestHeaderEnd;
- (long long)requestHeaderSize;
- (void)responseBegin;
- (double)responseBeginTime;
- (void)responseBody:(struct __CFData { }*)arg1;
- (long long)responseBodySize;
- (long long)responseBodyTransferSize;
- (void)responseEnd;
- (double)responseEndTime;
- (void)responseHeaderEnd:(id)arg1;
- (long long)responseHeaderSize;
- (bool)scheduledOriginLoad;
- (long long)schedulingTier;
- (id)sessionMetrics;
- (void)setAPSRelayAttempted:(bool)arg1;
- (void)setAPSRelaySucceeded:(bool)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setCacheLookupBeginTime:(double)arg1;
- (void)setCacheLookupEndTime:(double)arg1;
- (void)setCachedResponse:(id)arg1;
- (void)setConnectionMetrics:(id)arg1;
- (void)setEndReason:(unsigned long long)arg1;
- (void)setEndTime:(double)arg1;
- (void)setFirstOnConnection:(bool)arg1;
- (void)setLastResponse:(id)arg1;
- (void)setLastResponseBodySize:(long long)arg1;
- (void)setLastResponseBodyTransferSize:(long long)arg1;
- (void)setLastResponseHeaderSize:(long long)arg1;
- (void)setOptions:(long long)arg1;
- (void)setPushed:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestBeginTime:(double)arg1;
- (void)setRequestBodySize:(long long)arg1;
- (void)setRequestBodyTransferSize:(long long)arg1;
- (void)setRequestEndTime:(double)arg1;
- (void)setRequestHeaderSize:(long long)arg1;
- (void)setResponseBeginTime:(double)arg1;
- (void)setResponseBodySize:(long long)arg1;
- (void)setResponseBodyTransferSize:(long long)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseHeaderSize:(long long)arg1;
- (void)setScheduledOriginLoad:(bool)arg1;
- (void)setSchedulingTier:(long long)arg1;
- (void)setSessionMetrics:(id)arg1;
- (void)setSubflowCountsBegin:(id)arg1;
- (void)setSubflowCountsEnd:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (void)setTcpInfoBegin:(id)arg1;
- (void)setTcpInfoEnd:(id)arg1;
- (void)setTransferredRequest:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)subflowCountsBegin;
- (id)subflowCountsEnd;
- (id)taskMetrics;
- (id)tcpInfoBegin;
- (id)tcpInfoEnd;
- (id)transferredRequest;

@end
