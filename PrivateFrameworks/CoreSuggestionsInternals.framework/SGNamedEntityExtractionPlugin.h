/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNamedEntityExtractionPlugin : NSObject <FIAPPlugin> {
    SGNamedEntityDissector * _dissector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_entityContainersForContentItem:(id)arg1;
- (id)_entityContainersForUserAction:(id)arg1 searchableItem:(id)arg2;
- (id)_extractionsFromEntityContainers:(id)arg1;
- (id)_harvestMapsIntent:(id)arg1 identifier:(id)arg2;
- (id)_harvestPodcastsIntent:(id)arg1 identifier:(id)arg2 groupIdentifier:(id)arg3;
- (void)_processCSSearchableItemLocationWithName:(id)arg1 thoroughfare:(id)arg2 city:(id)arg3 state:(id)arg4 country:(id)arg5 postalCode:(id)arg6 extractionContainer:(id)arg7;
- (void)_processUserActivity:(id)arg1 extractionContainer:(id)arg2 language:(id)arg3;
- (bool)_shouldAcceptSearchableItem:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)extractionsFromSearchableItem:(id)arg1;
- (id)extractionsFromUserAction:(id)arg1 searchableItem:(id)arg2;
- (id)identifier;
- (id)init;
- (id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3;
- (id)processSearchableItem:(id)arg1;
- (void)processTextContentItem:(id)arg1;
- (id)processUserAction:(id)arg1 searchableItem:(id)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;

@end
