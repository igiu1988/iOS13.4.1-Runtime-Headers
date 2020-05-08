/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVoteStats : NSObject {
    long long  _count;
    long long  _votes;
}

@property (nonatomic) long long count;
@property (nonatomic) long long votes;

- (long long)count;
- (id)initWithVotes:(long long)arg1 andCount:(long long)arg2;
- (float)rate;
- (void)setCount:(long long)arg1;
- (void)setVotes:(long long)arg1;
- (long long)votes;

@end