/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetClientURLRequestHelper : NSObject {
    id /* block */  _figAssetProvider;
    AVWeakReference * _weakReferenceToAsset;
    AVWeakReference * _weakReferenceToResourceLoader;
    AVWeakReference * _weakReferenceToSelf;
}

@property (nonatomic, readonly) const struct OpaqueFigAsset { }*figAsset;
@property (nonatomic, copy) id /* block */ figAssetProvider;
@property (nonatomic) AVAssetResourceLoader *resourceLoader;

- (id)URLAsset;
- (void)dealloc;
- (const struct OpaqueFigAsset { }*)figAsset;
- (id /* block */)figAssetProvider;
- (id)initWithAsset:(id)arg1;
- (id)resourceLoader;
- (void)setFigAssetProvider:(id /* block */)arg1;
- (void)setResourceLoader:(id)arg1;

@end
