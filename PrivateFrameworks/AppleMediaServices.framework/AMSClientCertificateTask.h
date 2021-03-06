/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSClientCertificateTask : AMSTask {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AMSKeychainOptions * _options;
}

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) AMSKeychainOptions *options;

- (void).cxx_destruct;
- (id)_baaOptionsWithOptions:(id)arg1 error:(id*)arg2;
- (id)dispatchQueue;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (id)performClientCertChainRequest;
- (void)setDispatchQueue:(id)arg1;
- (void)setOptions:(id)arg1;

@end
