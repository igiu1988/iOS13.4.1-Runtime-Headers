/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGMetalTextureAtlas : PXGImageTexture <PXGMetalSpriteTexture> {
    unsigned long long  _bytesPerPixel;
    unsigned int  _capacity;
    PXGColorProgram * _colorProgram;
    long long  _cols;
    _Atomic short  _count;
    <MTLDevice> * _device;
    struct { } * _guarded_textureInfoByThumbnailIndex;
    _Atomic unsigned char  _isPerformingThumbnailCheckin;
    unsigned long long  _pixelFormat;
    long long  _renderPipelineIndex;
    NSIndexSet * _renderedSpriteIndexes;
    char * _retainCountByThumbnailIndex;
    NSIndexSet * _skipRenderSpriteIndexes;
    unsigned int * _spriteIndexByThumbnailIndex;
    NSMutableIndexSet * _spriteIndexesUsedBySprites;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSMutableIndexSet * _syncQueue_availableThumbnailIndexes;
    struct { int x1; unsigned int x2; unsigned int x3; } * _syncQueue_pendingThumbnailRequestInfo;
    unsigned long long  _syncQueue_pendingThumbnailRequestInfoCapacity;
    unsigned long long  _syncQueue_pendingThumbnailRequestInfoCount;
    NSMutableDictionary * _syncQueue_thumbnailsInUseByRenderPass;
    <MTLTexture> * _texture;
    NSMutableIndexSet * _thumbnailIndexesBeingCheckedIn;
    NSMutableIndexSet * _thumbnailIndexesPendingCheckin;
    NSMutableIndexSet * _thumbnailIndexesUsedBySprites;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (nonatomic, readonly) unsigned int capacity;
@property (nonatomic, readonly) <MTLTexture> *chromaTexture;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (nonatomic, readonly) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedByteSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImage { }*imageRepresentation;
@property (nonatomic, readonly) bool isAtlas;
@property (nonatomic, readonly) bool isCaptureTexture;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic) long long renderPipelineIndex;
@property (nonatomic, readonly) NSIndexSet *renderedSpriteIndexes;
@property (nonatomic, readonly) int shaderFlags;
@property (nonatomic, retain) NSIndexSet *skipRenderSpriteIndexes;
@property (nonatomic, readonly) unsigned int spriteCount;
@property (nonatomic, readonly) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTLTexture> *texture;
@property (nonatomic, readonly, copy) NSIndexSet *thumbnailIndexesUsedBySprites;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;

+ (unsigned int)maxCapacityForThumbnailSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_checkinPendingThumbnailIndexesIfNeeded;
- (void)_invalidateRenderedSpriteIndexes;
- (void)_syncQueue_checkinThumbnailIndex:(unsigned int)arg1;
- (unsigned int)_syncQueue_checkoutNextThumbnailIndex;
- (void)_syncQueue_releaseThumbnailAtIndex:(long long)arg1;
- (void)_syncQueue_releaseThumbnailsAtIndexes:(id)arg1;
- (void)_syncQueue_resizeStorageIfNeeded;
- (void)_syncQueue_retainThumbnailAtIndex:(long long)arg1;
- (void)_syncQueue_retainThumbnailsAtIndexes:(id)arg1;
- (void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
- (unsigned int)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)applyChangeDetails:(id)arg1;
- (unsigned int)capacity;
- (id)chromaTexture;
- (void)cleanupAfterRender:(long long)arg1;
- (id)colorProgram;
- (bool)containsSpriteIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (long long)estimatedByteSize;
- (void)getSpriteIndexes:(unsigned int*)arg1 maxSpriteCount:(unsigned int)arg2;
- (void)getTextureInfos:(struct { }*)arg1 forSpriteIndexes:(unsigned int*)arg2 geometries:(const struct { struct { double x_1_1_1; double x_1_1_2; float x_1_1_3; } x1; }*)arg3 spriteStyles:(const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; unsigned short x4; unsigned short x5; unsigned char x6; }*)arg4 spriteInfos:(const struct { int x1; int x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (struct CGImage { }*)imageRepresentation;
- (id)init;
- (id)initWithThumbnailSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned long long)arg2 capacity:(unsigned int)arg3 colorProgram:(id)arg4 device:(id)arg5;
- (bool)isAtlas;
- (bool)isCaptureTexture;
- (bool)isOpaque;
- (unsigned long long)pixelFormat;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)prepareForRender:(long long)arg1;
- (int)presentationType;
- (void)processPendingTextureRequestIDsWithHandler:(id /* block */)arg1;
- (void)processPendingThumbnailRequestIDsWithHandler:(id /* block */)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (long long)renderPipelineIndex;
- (id)renderedSpriteIndexes;
- (void)setRenderPipelineIndex:(long long)arg1;
- (void)setSkipRenderSpriteIndexes:(id)arg1;
- (int)shaderFlags;
- (id)skipRenderSpriteIndexes;
- (unsigned int)spriteCount;
- (id)spriteIndexes;
- (id)texture;
- (id)thumbnailIndexesUsedBySprites;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
