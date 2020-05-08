/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACProtobufVariableValue : PBCodable <NSCopying> {
    ACProtobufVariableValueList * _arrayValue;
    NSData * _dataValue;
    ACProtobufDate * _dateValue;
    ACProtobufVariableValueDictionary * _dictionaryValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
        unsigned int unsignedIntegerValue : 1; 
    }  _has;
    long long  _integerValue;
    ACProtobufVariableValueList * _setValue;
    NSString * _stringValue;
    unsigned long long  _unsignedIntegerValue;
    ACProtobufURL * _urlValue;
    ACProtobufUUID * _uuidValue;
}

@property (nonatomic, retain) ACProtobufVariableValueList *arrayValue;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) ACProtobufDate *dateValue;
@property (nonatomic, retain) ACProtobufVariableValueDictionary *dictionaryValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) bool hasArrayValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasDateValue;
@property (nonatomic, readonly) bool hasDictionaryValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntegerValue;
@property (nonatomic, readonly) bool hasSetValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasUnsignedIntegerValue;
@property (nonatomic, readonly) bool hasUrlValue;
@property (nonatomic, readonly) bool hasUuidValue;
@property (nonatomic) long long integerValue;
@property (nonatomic, retain) id object;
@property (nonatomic, retain) ACProtobufVariableValueList *setValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) unsigned long long unsignedIntegerValue;
@property (nonatomic, retain) ACProtobufURL *urlValue;
@property (nonatomic, retain) ACProtobufUUID *uuidValue;

- (void).cxx_destruct;
- (bool)_setObject:(id)arg1;
- (id)arrayValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryValue;
- (double)doubleValue;
- (bool)hasArrayValue;
- (bool)hasDataValue;
- (bool)hasDateValue;
- (bool)hasDictionaryValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasSetValue;
- (bool)hasStringValue;
- (bool)hasUnsignedIntegerValue;
- (bool)hasUrlValue;
- (bool)hasUuidValue;
- (unsigned long long)hash;
- (id)initWithObjectValue:(id)arg1;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)object;
- (bool)readFrom:(id)arg1;
- (void)setArrayValue:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDictionaryValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setHasUnsignedIntegerValue:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setObject:(id)arg1;
- (void)setSetValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1;
- (void)setUrlValue:(id)arg1;
- (void)setUuidValue:(id)arg1;
- (id)setValue;
- (id)stringValue;
- (unsigned long long)unsignedIntegerValue;
- (id)urlValue;
- (id)uuidValue;
- (void)writeTo:(id)arg1;

@end
