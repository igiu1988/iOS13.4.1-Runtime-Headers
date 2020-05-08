/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUModel : NSObject {
    NSDictionary * _attributes;
}

@property (nonatomic, readonly) NSDictionary *attributes;

+ (id)_deserializeObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 key:(id)arg3 error:(out id*)arg4;
+ (id)deserializeArrayFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3;
+ (id)deserializeAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3;
+ (id)deserializeDictionaryFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3;
+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)deserializeStringFromDictionary:(id)arg1 key:(id)arg2 error:(out id*)arg3;
+ (id)requiredAttributes;
+ (id)reservedPropertyNames;
+ (id)supportedAttributes;
+ (bool)validateArray:(id)arg1 error:(out id*)arg2;
+ (bool)validateBool:(id)arg1 error:(out id*)arg2;
+ (bool)validateIdentifier:(id)arg1 error:(out id*)arg2;
+ (bool)validateName:(id)arg1 error:(out id*)arg2;
+ (bool)validateNumber:(id)arg1 error:(out id*)arg2;
+ (bool)validatePattern:(id)arg1 error:(out id*)arg2;
+ (bool)validatePropertyName:(id)arg1 error:(out id*)arg2;
+ (bool)validateString:(id)arg1 error:(out id*)arg2;
+ (bool)validateStringArray:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)attributes;
- (id)copy:(id)arg1;
- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (void)enumerateProperties:(id /* block */)arg1;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (bool)isValid:(out id*)arg1;
- (id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3;
- (id)modelForProperty:(id)arg1;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (id)serializeAsDictionary:(out id*)arg1;
- (bool)serializeAttribute:(id)arg1 value:(id)arg2 intoDictionary:(id)arg3 error:(out id*)arg4;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3;
- (bool)validateAttributes:(out id*)arg1;

@end
