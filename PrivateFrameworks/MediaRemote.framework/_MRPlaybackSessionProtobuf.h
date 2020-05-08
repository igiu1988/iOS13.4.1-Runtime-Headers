/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRPlaybackSessionProtobuf : PBCodable <NSCopying> {
    NSString * _identifier;
    NSData * _playbackSessionData;
    NSString * _type;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPlaybackSessionData;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *playbackSessionData;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasPlaybackSessionData;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playbackSessionData;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlaybackSessionData:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
