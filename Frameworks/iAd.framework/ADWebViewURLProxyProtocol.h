/* Generated by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADWebViewURLProxyProtocol : NSURLProtocol <NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {
    NSThread * _clientThread;
    NSArray * _modes;
    ADNSURLSessionDemultiplexer * _sessionDemux;
    double  _startTime;
    NSURLSessionDataTask * _task;
}

@property (retain) NSThread *clientThread;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *modes;
@property (retain) ADNSURLSessionDemultiplexer *sessionDemux;
@property double startTime;
@property (readonly) Class superclass;
@property (retain) NSURLSessionDataTask *task;

+ (unsigned long long)basicProxyAuthHeaderSizeForUser:(id)arg1 withPassword:(id)arg2;
+ (id)buildTrimmedUrlStringFromUrl:(id)arg1 byRemovingBytes:(unsigned long long)arg2;
+ (id)buildTrimmedUrlStringFromUrl:(id)arg1 toReduceEncodedSizeBy:(unsigned long long)arg2;
+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)createLongProxyAuthHeaderRecordForRequest:(id)arg1 proxyAuthHeaderSize:(unsigned long long)arg2;
+ (unsigned long long)decodedSizeForEncodedLength:(unsigned long long)arg1;
+ (void)initialize;
+ (void)registerProtocol;
+ (void)unregister;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)clientThread;
- (void)dealloc;
- (id)modes;
- (id)sessionDemux;
- (void)setClientThread:(id)arg1;
- (void)setModes:(id)arg1;
- (void)setSessionDemux:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTask:(id)arg1;
- (void)startLoading;
- (double)startTime;
- (void)stopLoading;
- (id)task;

@end
