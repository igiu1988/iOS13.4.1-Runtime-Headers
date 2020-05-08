/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphPOINode : PGGraphNode <PGGraphLocalizable, PGGraphPortraitTopic, PGGraphSynonymSupport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;
@property (nonatomic, readonly) NSString *pg_topic;
@property (readonly) Class superclass;

+ (id)_localizationKeyForPOINode:(id)arg1;

- (id)localizedName;
- (id)localizedSynonyms;
- (id)pg_topic;

@end
