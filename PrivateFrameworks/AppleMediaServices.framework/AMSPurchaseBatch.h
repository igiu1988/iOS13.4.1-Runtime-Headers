/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPurchaseBatch : NSObject {
    NSMutableDictionary * _contextMap;
    NSMutableArray * _contexts;
    bool  _isComplete;
    NSLock * _lock;
    AMSLazyPromise * _promise;
    NSMutableArray * _results;
}

@property (nonatomic, readonly) NSMutableDictionary *contextMap;
@property (nonatomic, readonly) NSMutableArray *contexts;
@property (nonatomic) bool isComplete;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, readonly) AMSLazyPromise *promise;
@property (nonatomic, readonly) NSMutableArray *results;

- (void).cxx_destruct;
- (id)contextForPurchaseId:(id)arg1;
- (id)contextMap;
- (id)contexts;
- (bool)finishContext:(id)arg1 withError:(id)arg2;
- (bool)finishContext:(id)arg1 withResult:(id)arg2;
- (id)initWithContexts:(id)arg1 weakPromise:(id)arg2;
- (bool)isComplete;
- (id)lock;
- (id)nextPurchaseContext;
- (id)promise;
- (id)results;
- (void)setIsComplete:(bool)arg1;
- (void)setLock:(id)arg1;

@end
