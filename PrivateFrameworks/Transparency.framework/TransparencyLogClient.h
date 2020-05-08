/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyLogClient : NSObject {
    TransparencyManagedDataStore * _dataStore;
    TransparencyLogSession * _session;
}

@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) TransparencyLogSession *session;

- (void).cxx_destruct;
- (id)dataStore;
- (void)download:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)downloadRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fetch:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fetch:(id)arg1 shouldRetry:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)fetchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithBackgroundSession:(id)arg1 dataStore:(id)arg2;
- (bool)needsRetry:(id)arg1;
- (id)session;
- (void)setDataStore:(id)arg1;
- (void)setSession:(id)arg1;

@end
