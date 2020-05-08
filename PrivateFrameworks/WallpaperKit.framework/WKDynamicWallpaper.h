/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKDynamicWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper> {
    NSDictionary * __dynamicDictionary;
    UIImage * __thumbnailImage;
}

@property (nonatomic, retain) NSDictionary *_dynamicDictionary;
@property (nonatomic, retain) UIImage *_thumbnailImage;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_dynamicDictionary;
- (id)_thumbnailImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 dictionary:(id)arg2;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;
- (void)set_dynamicDictionary:(id)arg1;
- (void)set_thumbnailImage:(id)arg1;
- (id)thumbnailImage;
- (unsigned long long)type;
- (id)wallpaperValue;

@end
