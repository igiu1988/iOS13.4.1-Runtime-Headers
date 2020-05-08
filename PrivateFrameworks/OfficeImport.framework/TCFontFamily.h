/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCFontFamily : NSObject {
    NSArray * _members;
    NSDictionary * _namesByLanguage;
}

@property (nonatomic, readonly) NSArray *members;
@property (nonatomic, readonly) NSDictionary *namesByLanguage;

- (void).cxx_destruct;
- (bool)allFamilyIsBold;
- (bool)allFamilyIsItalic;
- (id)bestMatchForStyling:(struct TCFontStyling { int x1; unsigned int x2; BOOL x3; bool x4; int x5; })arg1;
- (unsigned long long)boldFontIndexInWeightVariants:(id)arg1;
- (id)description;
- (bool)doesAnyNonBoldVariantExistForFont:(id)arg1;
- (id)englishName;
- (id)equivalentDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithNamesByLanguage:(id)arg1 members:(id)arg2;
- (id)memberForFullName:(id)arg1;
- (id)memberForPSName:(id)arg1;
- (id)members;
- (id)namesByLanguage;
- (unsigned long long)regularFontIndexInWeightVariants:(id)arg1;
- (id)regularVariant:(bool)arg1;
- (bool)traitsAreAdditive;
- (id)variantByAddingBoldToFont:(id)arg1;
- (id)variantByRemovingBoldFromFont:(id)arg1;
- (id)variantByTogglingItalicOfFont:(id)arg1;
- (id)weightVariantsOfFont:(id)arg1;

@end
