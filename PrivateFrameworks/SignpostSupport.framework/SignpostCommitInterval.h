/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostCommitInterval : SignpostAnimationSubInterval {
    NSString * _executablePath;
    int  _pid;
    NSString * _processName;
    unsigned long long  _threadID;
    unsigned int  _transactionSeed;
}

@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic, readonly) unsigned int transactionSeed;

- (void).cxx_destruct;
- (id)executablePath;
- (id)initWithCommitInterval:(id)arg1;
- (int)pid;
- (id)processName;
- (unsigned long long)threadID;
- (unsigned int)transactionSeed;

@end
