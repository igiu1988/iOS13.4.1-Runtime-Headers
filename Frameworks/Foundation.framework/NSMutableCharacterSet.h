/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying, NSSecureCoding>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)controlCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (bool)supportsSecureCoding;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;

- (void)addCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addCharactersInString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invert;
- (bool)isMutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeCharactersInString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText

- (id)tswp_initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;

@end