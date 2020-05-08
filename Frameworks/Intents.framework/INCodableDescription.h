/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableDescription : NSObject <INCodableCoding, NSSecureCoding> {
    NSString * _attributeDisplayPriorityKey;
    NSString * _attributeKeyPrefix;
    NSString * _attributeMetadataKeyPrefix;
    NSString * _attributePromptDialogKeyPrefix;
    NSString * _attributeRelationshipKeyPrefix;
    NSString * _attributeTagKey;
    NSString * _attributeUnsupportedReasonKeyPrefix;
    NSDictionary * _attributes;
    NSMutableDictionary * _attributesByName;
    NSString * _attributesKeyPrefix;
    NSString * _className;
    INCodableLocalizationTable * _customLocalizationTable;
    NSMutableDictionary * _dictionaryKeysForCacheGroup;
    NSOrderedSet * _displayOrderedAttributes;
    NSString * _intentDefinitionNamespace;
    INCodableLocalizationTable * _localizationTable;
    INSchema * _schema;
    NSString * _semanticRoot;
    NSString * _typeName;
}

@property (nonatomic, readonly, copy) NSString *_attributeDisplayPriorityKey;
@property (nonatomic, readonly, copy) NSString *_attributeKeyPrefix;
@property (nonatomic, readonly, copy) NSString *_attributeMetadataKeyPrefix;
@property (nonatomic, readonly, copy) NSString *_attributePromptDialogKeyPrefix;
@property (nonatomic, readonly, copy) NSString *_attributeRelationshipKeyPrefix;
@property (nonatomic, readonly, copy) NSString *_attributeTagKey;
@property (nonatomic, readonly, copy) NSString *_attributeUnsupportedReasonKeyPrefix;
@property (nonatomic, readonly, copy) NSString *_attributesKeyPrefix;
@property (setter=_setCustomLocalizationTable:, nonatomic, copy) INCodableLocalizationTable *_customLocalizationTable;
@property (nonatomic, retain) NSMutableDictionary *_dictionaryKeysForCacheGroup;
@property (setter=_setLocalizationTable:, nonatomic, copy) INCodableLocalizationTable *_localizationTable;
@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic, readonly, copy) NSString *cacheGroup;
@property (nonatomic, copy) NSString *className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSOrderedSet *displayOrderedAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *intentDefinitionNamespace;
@property (nonatomic, readonly, copy) NSString *keyPrefix;
@property (nonatomic, readonly) NSArray *referencedCodableEnums;
@property (nonatomic) INSchema *schema;
@property (nonatomic, copy) NSString *semanticRoot;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeName;
@property (nonatomic, readonly) NSString *wf_outputDisplayName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg1 usingTypes:(id)arg2;
+ (id)_calculateReferencedCodableDescriptionsFromAttributes:(id)arg1 usingTypes:(id)arg2 foundAttributes:(id)arg3;
+ (id)_codableDescriptionForTypedObject:(id)arg1 inDictionary:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributeDisplayPriorityKey;
- (id)_attributeKeyPrefix;
- (id)_attributeMetadataKeyPrefix;
- (id)_attributePromptDialogKeyPrefix;
- (id)_attributeRelationshipKeyPrefix;
- (id)_attributeTagKey;
- (id)_attributeUnsupportedReasonKeyPrefix;
- (id)_attributesKeyPrefix;
- (id)_customLocalizationTable;
- (id)_dictionaryKeyForKeyPath:(id)arg1 object:(id)arg2;
- (id)_dictionaryKeysForCacheGroup;
- (id)_ignoredAttributeTags;
- (id)_localizationTable;
- (id)_nullable_schema;
- (void)_setCustomLocalizationTable:(id)arg1;
- (void)_setLocalizationTable:(id)arg1;
- (void)_updateAttributesByName;
- (id)attributeByKeyPath:(id)arg1;
- (id)attributeByName:(id)arg1;
- (id)attributes;
- (id)cacheGroup;
- (id)className;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (id)displayOrderedAttributes;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)highestAttributeTag;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)intentDefinitionNamespace;
- (bool)isEqual:(id)arg1;
- (id)keyPrefix;
- (id)referencedCodableEnums;
- (id)schema;
- (id)semanticRoot;
- (void)setAttributes:(id)arg1;
- (void)setClassName:(id)arg1;
- (void)setDisplayOrderedAttributes:(id)arg1;
- (void)setIntentDefinitionNamespace:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)setSemanticRoot:(id)arg1;
- (void)setTypeName:(id)arg1;
- (void)set_dictionaryKeysForCacheGroup:(id)arg1;
- (id)typeName;
- (void)updateWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClassForCustomObjectWithNamespace:(id)arg1;
- (id)wf_outputDisplayName;

@end
