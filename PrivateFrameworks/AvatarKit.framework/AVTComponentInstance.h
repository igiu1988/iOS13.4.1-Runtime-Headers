/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTComponentInstance : NSObject {
    NSString * _assetImage;
    SCNNode * _assetNode;
    NSArray * _assets;
    NSDictionary * _layers;
}

@property (readonly) NSString *assetImage;
@property (readonly) SCNNode *assetNode;
@property (readonly) bool imageMirror;
@property (readonly) struct CGSize { double x1; double x2; } imageOffset;
@property (readonly) double imageScale;
@property (readonly) struct { bool x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; } uvRemappingInfo;

- (void).cxx_destruct;
- (void)_commonInitForCaching:(bool)arg1 component:(id)arg2;
- (id)assetImage;
- (id)assetImageForAsset:(id)arg1;
- (id)assetImageWithLayerNamed:(id)arg1;
- (id)assetNode;
- (void)dealloc;
- (bool)has2DAsset;
- (bool)has3DAsset;
- (bool)imageMirror;
- (struct CGSize { double x1; double x2; })imageOffset;
- (double)imageScale;
- (id)initWithComponent:(id)arg1;
- (id)initWithComponent:(id)arg1 forCaching:(bool)arg2;
- (void)updateMaterialsWithComponent:(id)arg1;
- (struct { bool x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; })uvRemappingInfo;

@end
