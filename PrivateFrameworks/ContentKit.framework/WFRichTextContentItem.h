/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (id)attributedStringFromHTMLFile:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
+ (id)attributesDictionaryForType:(id)arg1;
+ (id)contentCategories;
+ (id)documentTypeForType:(id)arg1;
+ (id)htmlFooter;
+ (id)htmlHeader;
+ (id)normalizedHTMLDocumentFromHTML:(id)arg1;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)arg1;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
+ (bool)typeRequiresMainThread:(id)arg1;

- (bool)canGenerateRepresentationForType:(id)arg1;
- (void)generateAttributedString:(id /* block */)arg1 fromFile:(id)arg2 forClass:(Class)arg3;
- (void)generateDataRepresentation:(id /* block */)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateFileRepresentations:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateRTFDRepresentation:(id /* block */)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;
- (void)getFileRepresentationsForSerialization:(id /* block */)arg1;
- (bool)isContent;
- (id)preferredFileType;

@end
