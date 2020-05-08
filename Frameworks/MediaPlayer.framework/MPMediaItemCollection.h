/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaItemCollection : MPMediaEntity {
    unsigned long long  _containedMediaTypes;
    bool  _initializedContainedMediaTypes;
    NSArray * _items;
    unsigned long long  _itemsCount;
    MPMediaQuery * _itemsQuery;
    MPMediaItem * _representativeItem;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long groupingType;
@property (nonatomic, readonly) NSArray *items;
@property (getter=wlk_jsPropertyStrings, nonatomic, readonly) NSSet *jsPropertyStrings;
@property (nonatomic, readonly) unsigned long long mediaTypes;
@property (nonatomic, readonly) MPMediaItem *representativeItem;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)artworkCatalogCachePropertiesForGroupingType:(long long)arg1;
+ (id)collectionWithItems:(id)arg1;
+ (id)representativePersistentIDPropertyForGroupingType:(long long)arg1;
+ (id)sortTitlePropertyForGroupingType:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)titlePropertyForGroupingType:(long long)arg1;

- (void).cxx_destruct;
- (bool)MPSD_hasDownloadableItem;
- (bool)MPSD_hasDownloadingItem;
- (id)_artworkCatalogRepresentativeItem;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)arg1;
- (id)albumArtistArtworkCatalog;
- (id)artistArtworkCatalog;
- (id)artworkCatalog;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (long long)groupingType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItemsQuery:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsQuery;
- (unsigned long long)mediaTypes;
- (id)multiverseIdentifier;
- (id)representativeItem;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (id)MPU_contentItemIdentifierCollectionPropertiesForGroupingType:(long long)arg1;
+ (void)_MPU_getContentItemIdentifierCollectionItemType:(unsigned long long*)arg1 storeAdamIDProperty:(id*)arg2 forGroupingType:(long long)arg3;

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)wlk_JSgenericProperties;

- (id)wlk_jsPropertyStrings;

@end
