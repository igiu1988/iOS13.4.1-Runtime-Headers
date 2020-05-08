/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass> {
    bool  _imageIsAnimated;
    WFFileType * _preferredFileType;
}

@property (nonatomic, readonly) WFImage *image;
@property (nonatomic) bool imageIsAnimated;
@property (nonatomic, retain) WFFileType *preferredFileType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)imageTypes;
+ (id)itemWithImage:(id)arg1 named:(id)arg2 preferredFileType:(id)arg3;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 contentSource:(id)arg4;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;

- (void).cxx_destruct;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)dateTaken;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)generateImageFileForType:(id)arg1 includingMetadata:(bool)arg2 compressionQuality:(id)arg3 error:(id*)arg4;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)height;
- (id)image;
- (id)imageFile;
- (bool)imageIsAnimated;
- (bool)isContent;
- (bool)isObjectBacked;
- (bool)isScreenshot;
- (id)location;
- (id)make;
- (id)metadata;
- (id)model;
- (id)orientation;
- (id)preferredFileType;
- (id)preferredObjectType;
- (void)setImageIsAnimated:(bool)arg1;
- (void)setPreferredFileType:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)width;

@end
