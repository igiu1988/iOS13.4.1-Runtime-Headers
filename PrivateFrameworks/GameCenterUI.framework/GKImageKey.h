/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKImageKey : NSObject {
    NSString * _basename;
    NSString * _cacheKey;
    NSString * _filePath;
    NSString * _imageID;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSString *basename;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, retain) NSString *imageID;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)fileNameWithIdentifierInImageSource:(id)arg1;
+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;

- (void).cxx_destruct;
- (id)basename;
- (id)cacheKey;
- (id)filePath;
- (id)imageID;
- (void)setBasename:(id)arg1;
- (void)setImageID:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
