/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/FeatureFlagsSupport
 */

@interface FFConfiguration : NSObject {
    NSMutableSet * _domains;
    NSMutableDictionary * configByLevel;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSMutableDictionary * metaByLevel;
    NSArray * searchPaths;
}

@property (nonatomic, readonly) NSSet *domains;

+ (id)shared;

- (void).cxx_destruct;
- (void)addFeaturesForDomain:(id)arg1 pathIndex:(int)arg2 fromURL:(id)arg3;
- (void)clearCachedData;
- (bool)commitUpdates:(id*)arg1;
- (bool)createDirectoryAtURL:(id)arg1 error:(id*)arg2;
- (void)createMutableDomainConfig:(id)arg1 level:(long long)arg2;
- (id)defaultStateForFeature:(id)arg1 domain:(id)arg2;
- (void)disableFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (id)domains;
- (id)effectiveStateForFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (void)enableFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (id)featuresForDomain:(id)arg1;
- (id)fileURLForDomain:(id)arg1 pathIndex:(int)arg2;
- (id)fileURLForLevel:(long long)arg1 pathIndex:(int)arg2;
- (id)initPrivate;
- (void)invalidateCache;
- (bool)isValidName:(id)arg1;
- (void)loadAllData;
- (void)loadAllLevelsForDomain:(id)arg1;
- (void)loadCombinedDataForLevel:(long long)arg1;
- (void)loadDomain:(id)arg1 level:(long long)arg2;
- (id)makeFeatureDictionaryFrom:(id)arg1 forDomain:(id)arg2;
- (void)populateDictionary:(id)arg1 withFeatures:(id)arg2;
- (id)resolvedStateForFeature:(id)arg1 domain:(id)arg2;
- (void)setValue:(long long)arg1 feature:(id)arg2 domain:(id)arg3 level:(long long)arg4;
- (id)stateForFeature:(id)arg1 domain:(id)arg2;
- (id)stateForFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (void)unsetFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (void)validateName:(id)arg1;
- (bool)writeCombinedUpdates:(id*)arg1;
- (bool)writeData:(id)arg1 toFile:(id)arg2 error:(id*)arg3;
- (bool)writeDomainUpdates:(id*)arg1;

@end
