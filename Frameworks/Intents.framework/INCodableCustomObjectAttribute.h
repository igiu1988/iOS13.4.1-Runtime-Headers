/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableCustomObjectAttribute : INCodableObjectAttribute {
    INCodableDescription * _codableDescription;
    NSString * _objectTypeName;
    NSString * _objectTypeNamespace;
}

@property (nonatomic) INCodableDescription *codableDescription;
@property (nonatomic, copy) NSString *objectTypeName;
@property (nonatomic, copy) NSString *objectTypeNamespace;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)_unsafeObjectClass;
- (id)codableDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;
- (id)objectTypeName;
- (id)objectTypeNamespace;
- (Class)resolutionResultClass;
- (void)setCodableDescription:(id)arg1;
- (void)setObjectTypeName:(id)arg1;
- (void)setObjectTypeNamespace:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)valueTransformer;
- (long long)valueType;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClass;
- (id)wf_contentItemForValue:(id)arg1;
- (Class)wf_facadeClass;
- (Class)wf_objectClass;
- (Class)wf_parameterClass;

@end
