/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMescalSession : NSObject {
    NSData * _certificateData;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AMSMescalFairPlay * _fairPlayContext;
    long long  _mescalType;
    bool  _primed;
    AMSURLSession * _urlSession;
}

@property (nonatomic) bool primed;

+ (id)sessionWithType:(long long)arg1;

- (void).cxx_destruct;
- (bool)_cacheCertData:(id)arg1 expiration:(double)arg2;
- (id)_cachedCertData;
- (id)_cachedCertPath;
- (id)_establishContextWithBag:(id)arg1 error:(id*)arg2;
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id*)arg2;
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id*)arg3;
- (void)_resetSession;
- (bool)_shouldRetryFairPlayForError:(id)arg1;
- (bool)_verifyEntitlements;
- (bool)_verifyPrimeResponse:(id)arg1 error:(id*)arg2;
- (id)initWithType:(long long)arg1;
- (bool)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2;
- (bool)primed;
- (void)setPrimed:(bool)arg1;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3;
- (bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id*)arg4;

@end
