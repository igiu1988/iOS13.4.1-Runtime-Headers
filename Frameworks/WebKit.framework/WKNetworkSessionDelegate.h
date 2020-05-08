/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNetworkSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate> {
    struct WeakPtr<WebKit::NetworkSessionCocoa> { 
        struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
            struct WeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _session;
    struct WeakPtr<WebKit::SessionWrapper> { 
        struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
            struct WeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _sessionWrapper;
    bool  _withCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 webSocketTask:(id)arg2 didCloseWithCode:(long long)arg3 reason:(id)arg4;
- (void)URLSession:(id)arg1 webSocketTask:(id)arg2 didOpenWithProtocol:(id)arg3;
- (struct NetworkDataTaskCocoa { int (**x1)(); struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x_1_2_1; } x_2_1_1; } x2; struct WeakPtrFactory<WebKit::NetworkDataTask> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_3_1_1; } x3; int x4; struct Timer { int (**x_5_1_1)(); struct MonotonicTime { double x_2_2_1; } x_5_1_2; struct Seconds { double x_3_2_1; } x_5_1_3; struct RefPtr<WebCore::ThreadTimerHeapItem, WTF::DumbPtrTraits<WebCore::ThreadTimerHeapItem> > { struct ThreadTimerHeapItem {} *x_4_2_1; } x_5_1_4; struct Ref<WTF::Thread, WTF::DumbPtrTraits<WTF::Thread> > { struct Thread {} *x_5_2_1; } x_5_1_5; struct Function<void ()>={unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > >=^{CallableWrapperBase<void> {} x_5_1_6; } x5; }*)existingTask:(id)arg1;
- (struct WebSocketTask { struct WeakPtrFactory<WebKit::WebSocketTask> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_1_1_1; } x1; struct NetworkSocketChannel {} *x2; struct RetainPtr<NSURLSessionWebSocketTask> { void *x_3_1_1; } x3; bool x4; }*)existingWebSocketTask:(id)arg1;
- (id)initWithNetworkSession:(struct NetworkSessionCocoa { int (**x1)(); struct WeakPtrFactory<WebKit::NetworkSession> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_2_1_1; } x2; struct SessionID { unsigned long long x_3_1_1; } x3; struct Ref<WebKit::NetworkProcess, WTF::DumbPtrTraits<WebKit::NetworkProcess> > { struct NetworkProcess {} *x_4_1_1; } x4; struct HashSet<WebKit::NetworkDataTask *, WTF::PtrHash<WebKit::NetworkDataTask *>, WTF::HashTraits<WebKit::NetworkDataTask *> > { struct HashTable<WebKit::NetworkDataTask *, WebKit::NetworkDataTask *, WTF::IdentityExtractor, WTF::PtrHash<WebKit::NetworkDataTask *>, WTF::HashTraits<WebKit::NetworkDataTask *>, WTF::HashTraits<WebKit::NetworkDataTask *> > { struct NetworkDataTask {} **x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebKit::WebResourceLoadStatisticsStore, WTF::DumbPtrTraits<WebKit::WebResourceLoadStatisticsStore> > { struct WebResourceLoadStatisticsStore {} *x_7_1_1; } x7; }*)arg1 wrapper:(struct SessionWrapper { struct WeakPtrFactory<WebKit::SessionWrapper> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_1_1_1; } x1; struct RetainPtr<NSURLSession> { void *x_2_1_1; } x2; struct RetainPtr<WKNetworkSessionDelegate> { void *x_3_1_1; } x3; struct HashMap<unsigned long long, WebKit::NetworkDataTaskCocoa *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebKit::NetworkDataTaskCocoa *> > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebKit::NetworkDataTaskCocoa *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebKit::NetworkDataTaskCocoa *> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WebKit::NetworkDataTaskCocoa *, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebKit::NetworkDataTaskCocoa *> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WebKit::NetworkDataTaskCocoa *> {} *x_1_2_1; } x_4_1_1; } x4; }*)arg2 withCredentials:(bool)arg3;
- (void)sessionInvalidated;

@end
