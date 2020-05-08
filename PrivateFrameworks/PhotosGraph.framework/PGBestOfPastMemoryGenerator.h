/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator {
    NSDate * _localEndDate;
    NSDate * _localStartDate;
}

@property (nonatomic) NSDate *localEndDate;
@property (nonatomic) NSDate *localStartDate;

- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)localEndDate;
- (id)localStartDate;
- (void)setLocalEndDate:(id)arg1;
- (void)setLocalStartDate:(id)arg1;

@end
