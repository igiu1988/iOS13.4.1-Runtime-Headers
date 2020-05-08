/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGSeasonMemoryGenerator : PGMemoryGenerator {
    NSDate * _localDate;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSDate *localDate;
@property (nonatomic) unsigned long long type;

+ (bool)isMoment:(id)arg1 duringSeason:(id)arg2;
+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1;
+ (id)seasonNodeForMomentNode:(id)arg1;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (id)_lastSeasonPotentialMemory;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (id)_potentialMemoryForMomentNodes:(id)arg1 seasonNode:(id)arg2 category:(unsigned long long)arg3;
- (id)_seasonInHistoryPotentialMemories;
- (id)initWithController:(id)arg1;
- (void)lastSeasonMomentNodesForLocalDate:(id)arg1 resultBlock:(id /* block */)arg2;
- (id)localDate;
- (void)seasonInHistoryMomentNodesForLocalDate:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)setLocalDate:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
