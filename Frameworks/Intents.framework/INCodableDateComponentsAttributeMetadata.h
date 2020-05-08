/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCodableDateComponentsAttributeMetadata : INCodableAttributeMetadata {
    unsigned long long  _dateStyle;
    long long  _format;
    NSString * _formatString;
    NSString * _formatStringID;
    unsigned long long  _timeStyle;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long dateStyle;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly, copy) NSString *formatString;
@property (nonatomic, readonly, copy) NSString *formatStringID;
@property (nonatomic, readonly) unsigned long long timeStyle;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)dateStyle;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)format;
- (id)formatString;
- (id)formatStringID;
- (id)initWithCoder:(id)arg1;
- (id)localizedFormatString;
- (id)localizedFormatStringWithLocalizer:(id)arg1;
- (unsigned long long)timeStyle;
- (long long)type;
- (void)updateWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2;

@end
