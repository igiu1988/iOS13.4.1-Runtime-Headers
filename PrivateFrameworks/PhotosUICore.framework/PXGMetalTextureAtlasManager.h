/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGMetalTextureAtlasManager : NSObject <PXGTextureAtlasManager> {
    NSArray * _atlasTextures;
    unsigned int  _capacityPerAtlas;
    PXGColorProgram * _colorProgram;
    <MTLDevice> * _device;
    unsigned long long  _pixelFormat;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSIndexSet * _skipRenderSpriteIndexes;
    NSObject<OS_dispatch_queue> * _syncQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (copy) NSArray *atlasTextures;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, retain) NSIndexSet *skipRenderSpriteIndexes;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *textures;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (void)_getAtlas:(id*)arg1 localThumbnailIndex:(unsigned int*)arg2 forGlobalThumbnailIndex:(unsigned int)arg3;
- (void)_requestQueue_getNextAvailableAtlas:(id*)arg1 thumbnailOffset:(unsigned int*)arg2;
- (void)_updateAtlasSpriteIndexSkips;
- (unsigned int)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)applyChangeDetails:(id)arg1;
- (id)atlasTextures;
- (id)colorProgram;
- (id)description;
- (id)init;
- (id)initWithThumbnailSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned long long)arg2 capacityPerAtlas:(unsigned int)arg3 requestQueue:(id)arg4 colorProgram:(id)arg5 device:(id)arg6;
- (unsigned long long)pixelFormat;
- (void)processPendingThumbnailRequestIDsWithHandler:(id /* block */)arg1;
- (void)pruneUnusedTextures;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (void)setAtlasTextures:(id)arg1;
- (void)setSkipRenderSpriteIndexes:(id)arg1;
- (id)skipRenderSpriteIndexes;
- (id)textures;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
