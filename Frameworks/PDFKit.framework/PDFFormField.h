/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFFormField : NSObject <NSCopying> {
    PDFFormFieldPrivateVars * _private;
}

- (void).cxx_destruct;
- (void)addFieldNameToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addFieldTypeToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNameValueToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addStringValueToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (long long)buttonType;
- (void)clearDictionaryRef;
- (void)commonCreateDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)createDictionaryRef;
- (void)dealloc;
- (id)defaultStringValue;
- (id)description;
- (struct __CFDictionary { }*)dictionaryRef;
- (id)document;
- (id)fieldName;
- (int)fieldType;
- (id)initWithAnnotation:(id)arg1;
- (id)initWithFormDictionary:(struct CGPDFDictionary { }*)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setDefaultStringValue:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFieldType:(int)arg1;
- (void)setStringValue:(id)arg1;
- (void)setWriteDefaultValue:(bool)arg1;
- (id)stringValue;
- (bool)writeDefaultValue;

@end
