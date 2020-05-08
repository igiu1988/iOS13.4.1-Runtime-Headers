/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIImageSystemImageVisualStyle : NSObject {
    NSCache * __systemImageCache;
    UIImage * _actionsImage;
    UIImage * _cameraImage;
    UIImage * _checkmarkImage;
    UIImage * _closeImage;
    UIImage * _strokedCheckmarkImage;
}

@property (nonatomic, retain) NSCache *_systemImageCache;
@property (nonatomic, readonly) UIImage *actionsImage;
@property (nonatomic, readonly) UIImage *addImage;
@property (nonatomic, readonly) UIImage *cameraImage;
@property (nonatomic, readonly) UIImage *checkmarkImage;
@property (nonatomic, readonly) UIImage *closeImage;
@property (nonatomic, readonly) UIImage *removeImage;
@property (nonatomic, readonly) UIImage *strokedCheckmarkImage;
@property (nonatomic, readonly) UIImage *systemTableViewCellDetailedDisclosureIndicatorImage;
@property (nonatomic, readonly) UIImage *systemTableViewCellDisclosureIndicatorImage;

+ (id)_iosVisualStyle;
+ (id)styleForConfiguration:(id)arg1;
+ (id)styleForThemeKey:(id)arg1;

- (void).cxx_destruct;
- (id)_addImageWithColor:(id)arg1 name:(id)arg2;
- (id)_cachedSystemImageForType:(id)arg1 withColor:(id)arg2;
- (id)_removeImageWithColor:(id)arg1 name:(id)arg2;
- (id)_systemImageCache;
- (id)actionsImage;
- (id)addImage;
- (id)addImageWithColor:(id)arg1;
- (id)cameraImage;
- (id)checkmarkImage;
- (id)closeImage;
- (id)init;
- (id)removeImage;
- (id)removeImageWithColor:(id)arg1;
- (void)set_systemImageCache:(id)arg1;
- (id)strokedCheckmarkImage;
- (id)systemTableViewCellDetailedDisclosureIndicatorImage;
- (id)systemTableViewCellDisclosureIndicatorImage;

@end
