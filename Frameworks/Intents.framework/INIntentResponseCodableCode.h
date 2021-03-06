/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponseCodableCode : NSObject <INCodableCoding, NSSecureCoding> {
    INIntentResponseCodableDescription * __responseCodableDescription;
    NSString * _conciseFormatString;
    NSString * _conciseFormatStringLocID;
    NSString * _formatString;
    NSString * _formatStringLocID;
    NSString * _name;
    bool  _success;
    long long  _value;
}

@property (setter=_setResponseCodableDescription:, nonatomic) INIntentResponseCodableDescription *_responseCodableDescription;
@property (nonatomic, readonly, copy) NSString *cacheGroup;
@property (nonatomic, copy) NSString *conciseFormatString;
@property (nonatomic, copy) NSString *conciseFormatStringLocID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *formatString;
@property (nonatomic, copy) NSString *formatStringLocID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *keyPrefix;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSArray *parameterNames;
@property (getter=isSuccess, nonatomic) bool success;
@property (readonly) Class superclass;
@property (nonatomic) long long value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_parameterNamesFromString:(id)arg1;
- (id)_responseCodableDescription;
- (void)_setResponseCodableDescription:(id)arg1;
- (id)cacheGroup;
- (id)conciseFormatString;
- (id)conciseFormatStringLocID;
- (id)dictionaryKeyForKeyPath:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formatString;
- (id)formatStringLocID;
- (id)initWithCoder:(id)arg1;
- (bool)isSuccess;
- (id)keyPrefix;
- (id)name;
- (id)parameterNames;
- (void)setConciseFormatString:(id)arg1;
- (void)setConciseFormatStringLocID:(id)arg1;
- (void)setFormatString:(id)arg1;
- (void)setFormatStringLocID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setValue:(long long)arg1;
- (void)updateWithDictionary:(id)arg1;
- (long long)value;

@end
