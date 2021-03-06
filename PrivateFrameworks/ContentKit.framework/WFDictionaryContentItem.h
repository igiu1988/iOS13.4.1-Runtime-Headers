/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFDictionaryContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *dictionary;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemsWithJSONFileRepresentation:(id)arg1 contentSource:(id)arg2;
+ (id)itemsWithPlistFileRepresentation:(id)arg1 contentSource:(id)arg2;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 contentSource:(id)arg3;
+ (id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 topLevelName:(id)arg3 contentSource:(id)arg4;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)typeDescription;

- (id)dictionary;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)preferredFileType;

@end
