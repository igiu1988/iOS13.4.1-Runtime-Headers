/* Generated by EzioChiu.
 */

@protocol _INPBUpdateMediaAffinityIntent <NSObject>

@required

+ (Class)mediaItemsType;

- (int)StringAsAffinityType:(NSString *)arg1;
- (void)addMediaItems:(_INPBMediaItemValue *)arg1;
- (int)affinityType;
- (NSString *)affinityTypeAsString:(int)arg1;
- (void)clearMediaItems;
- (bool)hasAffinityType;
- (bool)hasIntentMetadata;
- (bool)hasMediaSearch;
- (_INPBIntentMetadata *)intentMetadata;
- (NSArray *)mediaItems;
- (_INPBMediaItemValue *)mediaItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mediaItemsCount;
- (_INPBMediaSearch *)mediaSearch;
- (void)setAffinityType:(int)arg1;
- (void)setHasAffinityType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setMediaItems:(NSArray *)arg1;
- (void)setMediaSearch:(_INPBMediaSearch *)arg1;

@end
