/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerSessionRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration> {
    MPCPlayerPath * _playerPath;
    MPPropertySet * _sessionProperties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPCPlayerPath *playerPath;
@property (nonatomic, readonly) MPPropertySet *playingItemProperties;
@property (nonatomic, readonly) NSString *preferredFallbackItemRelationship;
@property (nonatomic, readonly) MPPropertySet *queueItemProperties;
@property (nonatomic, readonly) MPPropertySet *queueSectionProperties;
@property (nonatomic, copy) MPPropertySet *sessionProperties;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; long long x2; } tracklistRange;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)middlewareClasses;
- (id)playerPath;
- (id)playingItemProperties;
- (id)queueItemProperties;
- (id)queueSectionProperties;
- (id)sessionProperties;
- (void)setPlayerPath:(id)arg1;
- (void)setSessionProperties:(id)arg1;
- (struct { long long x1; long long x2; })tracklistRange;

@end
