/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostAnimationTransactionLifetime : SignpostAnimationSubInterval {
    NSString * _executablePath;
    int  _pid;
    NSString * _processName;
    unsigned int  _swapId;
    unsigned int  _transactionSeed;
}

@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) unsigned int swapId;
@property (nonatomic, readonly) unsigned int transactionSeed;

- (void).cxx_destruct;
- (id)executablePath;
- (id)initWithTransactionSeedInterval:(id)arg1;
- (int)pid;
- (id)processName;
- (unsigned int)swapId;
- (unsigned int)transactionSeed;

@end
