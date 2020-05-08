/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSchema : NSObject <NSSecureCoding> {
    NSMutableDictionary * _configurableParameterCombinationDictionary;
    NSMutableDictionary * _enums;
    NSMutableDictionary * _parameterCombinationDictionary;
    NSMutableDictionary * _schemaDictionary;
    bool  _system;
    NSDictionary * _typeForClassDictionary;
    NSDictionary * _typeForSemanticKeypathDictionary;
    NSMutableDictionary * _types;
}

@property (nonatomic, readonly) NSMutableDictionary *_configurableParameterCombinationDictionary;
@property (nonatomic, readonly) NSMutableDictionary *_enums;
@property (nonatomic, readonly) NSMutableDictionary *_parameterCombinationDictionary;
@property (nonatomic, readonly) NSMutableDictionary *_schemaDictionary;
@property (nonatomic, readonly) NSDictionary *_typeForClassDictionary;
@property (nonatomic, readonly) NSDictionary *_typeForSemanticKeypathDictionary;
@property (nonatomic, readonly) NSMutableDictionary *_types;
@property (getter=isSystem, nonatomic, readonly) bool system;

+ (id)_cache;
+ (bool)_defaultSchemaCanSupportIntent:(id)arg1;
+ (id)_defaultSchemaForBundle:(id)arg1;
+ (id)_defaultSchemaForBundle:(id)arg1 contentOptions:(unsigned long long)arg2;
+ (void)_resetCache;
+ (id)_schemaWithIntentDefinitionURLs:(id)arg1 bundleIdentifier:(id)arg2 contentOptions:(unsigned long long)arg3;
+ (id)_supportedTypesDictionary;
+ (id)defaultSchema;
+ (bool)supportsSecureCoding;
+ (id)systemSchema;

- (void).cxx_destruct;
- (id)_classNamesForClass:(Class)arg1;
- (id)_codableDescriptionWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 codableDescriptionClass:(Class)arg5;
- (id)_codableDescriptionsForClass:(Class)arg1;
- (id)_configurableParameterCombinationDictionary;
- (id)_configurableParameterCombinationsForClassName:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_dictionaryRepresentationForIntentCodableDescription:(id)arg1 intentResponseCodableDescription:(id)arg2 appInfo:(id)arg3 localizer:(id)arg4;
- (id)_enums;
- (id)_initWithContentsOfURLs:(id)arg1;
- (id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2 contentOptions:(unsigned long long)arg3;
- (id)_intentResponseWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 className:(id)arg3 filename:(id)arg4 bundleIdentifier:(id)arg5 referencedCodableDescriptions:(id)arg6;
- (id)_intentWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4;
- (void)_loadIntentsFromArrayOfDictionaries:(id)arg1 intentDefinitionNamespace:(id)arg2 fromFile:(id)arg3 bundleIdentifier:(id)arg4 referencedCodableDescriptions:(id)arg5 contentOptions:(unsigned long long)arg6;
- (id)_objectDescriptionForClass:(Class)arg1 identifier:(id)arg2;
- (id)_objectDescriptionForTypeOfClass:(Class)arg1;
- (id)_objectDescriptionWithSemanticKeypath:(id)arg1;
- (id)_parameterCombinationDictionary;
- (id)_parameterCombinationsForClass:(Class)arg1;
- (id)_parameterCombinationsForClassName:(id)arg1;
- (id)_schemaDictionary;
- (void)_setObjectDescription:(id)arg1 forClass:(Class)arg2 identifier:(id)arg3;
- (id)_typeForClassDictionary;
- (id)_typeForSemanticKeypathDictionary;
- (id)_types;
- (id)_typesWithDictionary:(id)arg1 filename:(id)arg2 bundleIdentifier:(id)arg3;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentationForIntent:(id)arg1;
- (id)dictionaryRepresentationForIntent:(id)arg1 localizer:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)intentCodableDescriptionWithIntentClassName:(id)arg1;
- (id)intentResponseCodableDescriptionWithIntentClassName:(id)arg1;
- (id)intentResponseCodableDescriptionWithIntentResponseClassName:(id)arg1;
- (id)intentWithName:(id)arg1;
- (bool)isSystem;

@end
