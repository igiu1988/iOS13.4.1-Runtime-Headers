/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableIndexRequest : NSObject {
    id /* block */  _completionBlock;
    id /* block */  _completionDataBlock;
    NSData * _data;
    CSDataWrapper * _dataWrapper;
    bool  _finished;
    CSSearchableIndex * _index;
    NSString * _label;
    unsigned long long  _maxRetryCount;
    id /* block */  _performBlock;
    _Atomic unsigned int  _requestID;
    unsigned long long  _retryCount;
    bool  _shouldThrottle;
    bool  _started;
    bool  _throttled;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) id /* block */ completionDataBlock;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, retain) CSDataWrapper *dataWrapper;
@property (nonatomic) bool finished;
@property (nonatomic, retain) CSSearchableIndex *index;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic, copy) id /* block */ performBlock;
@property (nonatomic) _Atomic unsigned int requestID;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) bool shouldThrottle;
@property (nonatomic) bool started;
@property (nonatomic) bool throttled;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_perform;
- (void)_throttleIfNecessary;
- (void)_unthrottleIfNecessary;
- (id /* block */)completionBlock;
- (id /* block */)completionDataBlock;
- (id)data;
- (id)dataWrapper;
- (void)dealloc;
- (id)description;
- (void)finishWithError:(id)arg1;
- (bool)finished;
- (id)index;
- (id)initWithSearchableIndex:(id)arg1 label:(id)arg2;
- (id)label;
- (unsigned long long)maxRetryCount;
- (id /* block */)performBlock;
- (unsigned int)requestID;
- (unsigned long long)retryCount;
- (void)retryIfNecessaryWithError:(id)arg1;
- (void)retryIfNecessaryWithError:(id)arg1 dataWrapper:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCompletionDataBlock:(id /* block */)arg1;
- (void)setDataWrapper:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setIndex:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxRetryCount:(unsigned long long)arg1;
- (void)setPerformBlock:(id /* block */)arg1;
- (void)setRequestID:(unsigned int)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setShouldThrottle:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (void)setThrottled:(bool)arg1;
- (bool)shouldThrottle;
- (void)start;
- (bool)started;
- (bool)throttled;

@end