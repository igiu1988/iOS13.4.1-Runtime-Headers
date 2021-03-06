/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMusicRecommendationsRequestContext : NSObject {
    MPModelForYouRecommendationsResponse * _forYouResponse;
    NSMutableOrderedSet * _heavyRotationModelObjects;
    NSArray * _importedObjects;
    MPModelResponse * _lookupResponse;
    NSMapTable * _modelObjectSectionMap;
    NSMutableOrderedSet * _personalMixesModelObjects;
}

@property (nonatomic, retain) MPModelForYouRecommendationsResponse *forYouResponse;
@property (nonatomic, retain) NSArray *importedObjects;
@property (nonatomic, readonly) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;
@property (nonatomic, retain) MPModelResponse *lookupResponse;
@property (nonatomic, readonly) unsigned long long minimumNumberOfHeavyRotationModelObjects;
@property (nonatomic, readonly) NSSet *modelObjects;
@property (nonatomic, readonly) unsigned long long numberOfHeavyRotationModelObjects;
@property (nonatomic, readonly) NSOrderedSet *recommendations;

- (void).cxx_destruct;
- (void)_processResponsesIfNeeded;
- (id)forYouResponse;
- (id)importedObjects;
- (id)importedStoreContainerItemMappings;
- (id)lookupResponse;
- (unsigned long long)minimumNumberOfHeavyRotationModelObjects;
- (id)modelObjects;
- (unsigned long long)numberOfHeavyRotationModelObjects;
- (id)recommendations;
- (void)setForYouResponse:(id)arg1;
- (void)setImportedObjects:(id)arg1;
- (void)setLookupResponse:(id)arg1;

@end
