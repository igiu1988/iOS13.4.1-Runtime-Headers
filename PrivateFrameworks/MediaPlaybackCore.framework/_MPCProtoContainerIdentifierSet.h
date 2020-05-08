/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoContainerIdentifierSet : PBCodable <NSCopying> {
    NSString * _cloudCollectionID;
    long long  _cloudID;
    NSString * _cloudUniversalLibraryID;
    long long  _delegateInfoID;
    struct { 
        unsigned int cloudID : 1; 
        unsigned int delegateInfoID : 1; 
        unsigned int storeAdamID : 1; 
    }  _has;
    NSString * _radioStationID;
    long long  _storeAdamID;
    NSString * _storePlaylistGlobalID;
    NSString * _storePlaylistVersionHash;
}

@property (nonatomic, retain) NSString *cloudCollectionID;
@property (nonatomic) long long cloudID;
@property (nonatomic, retain) NSString *cloudUniversalLibraryID;
@property (nonatomic) long long delegateInfoID;
@property (nonatomic, readonly) bool hasCloudCollectionID;
@property (nonatomic) bool hasCloudID;
@property (nonatomic, readonly) bool hasCloudUniversalLibraryID;
@property (nonatomic) bool hasDelegateInfoID;
@property (nonatomic, readonly) bool hasRadioStationID;
@property (nonatomic) bool hasStoreAdamID;
@property (nonatomic, readonly) bool hasStorePlaylistGlobalID;
@property (nonatomic, readonly) bool hasStorePlaylistVersionHash;
@property (nonatomic, retain) NSString *radioStationID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic, retain) NSString *storePlaylistGlobalID;
@property (nonatomic, retain) NSString *storePlaylistVersionHash;

- (void).cxx_destruct;
- (id)cloudCollectionID;
- (long long)cloudID;
- (id)cloudUniversalLibraryID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)delegateInfoID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCloudCollectionID;
- (bool)hasCloudID;
- (bool)hasCloudUniversalLibraryID;
- (bool)hasDelegateInfoID;
- (bool)hasRadioStationID;
- (bool)hasStoreAdamID;
- (bool)hasStorePlaylistGlobalID;
- (bool)hasStorePlaylistVersionHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)radioStationID;
- (bool)readFrom:(id)arg1;
- (void)setCloudCollectionID:(id)arg1;
- (void)setCloudID:(long long)arg1;
- (void)setCloudUniversalLibraryID:(id)arg1;
- (void)setDelegateInfoID:(long long)arg1;
- (void)setHasCloudID:(bool)arg1;
- (void)setHasDelegateInfoID:(bool)arg1;
- (void)setHasStoreAdamID:(bool)arg1;
- (void)setRadioStationID:(id)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (void)setStorePlaylistGlobalID:(id)arg1;
- (void)setStorePlaylistVersionHash:(id)arg1;
- (long long)storeAdamID;
- (id)storePlaylistGlobalID;
- (id)storePlaylistVersionHash;
- (void)writeTo:(id)arg1;

@end
