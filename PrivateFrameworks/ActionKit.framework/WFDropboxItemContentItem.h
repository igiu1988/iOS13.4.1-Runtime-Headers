/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFDropboxItemContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (id)contentCategories;
+ (id)countDescription;
+ (bool)isAvailableOnPlatform:(long long)arg1;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;

- (bool)canEncodeWithCoder:(id)arg1;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)getPreferredFileExtension:(id /* block */)arg1;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (bool)hasStringOutput;
- (id)metadata;
- (id)outputTypes;
- (id)overrideFilename;
- (id)representedFileType;
- (id)representedFilename;
- (id)richListTitle;

@end
