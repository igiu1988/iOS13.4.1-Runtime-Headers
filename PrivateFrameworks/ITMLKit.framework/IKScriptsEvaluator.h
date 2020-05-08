/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate> {
    IKAppContext * _appContext;
    JSManagedValue * _callback;
    NSString * _identifier;
    bool  _isJingleRequest;
    NSMutableArray * _records;
    NSArray * _scripts;
}

@property (nonatomic) IKAppContext *appContext;
@property (nonatomic, retain) JSManagedValue *callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isJingleRequest;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic, retain) NSArray *scripts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(bool)arg3;
- (id)appContext;
- (id)callback;
- (void)evaluate;
- (void)evaluateScripts;
- (void)handleScirptLoadFailure;
- (id)identifier;
- (id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(bool)arg4;
- (bool)isJingleRequest;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)parseScriptData:(id)arg1 successPredicate:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)records;
- (void)scriptDidLoadWithID:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)scripts;
- (void)setAppContext:(id)arg1;
- (void)setCallback:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsJingleRequest:(bool)arg1;
- (void)setRecords:(id)arg1;
- (void)setScripts:(id)arg1;

@end
