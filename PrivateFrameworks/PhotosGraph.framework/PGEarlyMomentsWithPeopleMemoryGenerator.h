/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator {
    NSDate * _localDate;
    bool  _shouldGenerateAllMemories;
}

@property (nonatomic, retain) NSDate *localDate;
@property (nonatomic) bool shouldGenerateAllMemories;

+ (id)earlyMomentsByPeopleNodes:(id)arg1;
+ (unsigned long long)numberOfPotentialMemoriesForGraph:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg1 enumerationBlock:(id /* block */)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)localDate;
- (void)setLocalDate:(id)arg1;
- (void)setShouldGenerateAllMemories:(bool)arg1;
- (bool)shouldGenerateAllMemories;

@end
