/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
 */

@interface DistributedEvaluation.DESSecureAggregationSession : NSObject {
    void b_uData;
    void b_uSharesByIndex;
    void checkinTimer;
    void clientIndex;
    void clientUuid;
    void clientsThatSubmittedData;
    void cohort;
    void cohortThreshold;
    void configuration;
    void encryptedSharesFromPeers;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  publicCommunicationKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  publicMaskingKey;
    void queue;
    void secretData;
    void service;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signature;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  verificationKey;
}

@property (nonatomic, copy) NSString *clientUuid;

- (void).cxx_destruct;
- (void)checkinWithCompletion:(id /* block */)arg1;
- (id)clientUuid;
- (id)init;
- (id)initWithDatabase:(id)arg1 toService:(id)arg2 local:(bool)arg3 configuration:(id)arg4;
- (void)postTaskWithTaskUuid:(id)arg1 numTargetDevices:(unsigned int)arg2 samplingRate:(float)arg3 cohortSize:(unsigned int)arg4 secretSharingThreshold:(unsigned int)arg5 completion:(id /* block */)arg6;
- (void)registerTaskWithTaskUuid:(id)arg1 completion:(id /* block */)arg2;
- (void)setClientUuid:(id)arg1;

@end
