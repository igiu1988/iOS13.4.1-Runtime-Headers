/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface NBAsYouTypeFormatter : NSObject {
    NSRegularExpression * _CHARACTER_CLASS_PATTERN_;
    NSRegularExpression * _DIGIT_PATTERN_;
    NSString * _DIGIT_PLACEHOLDER_;
    NSRegularExpression * _ELIGIBLE_FORMAT_PATTERN_;
    NBPhoneMetaData * _EMPTY_METADATA_;
    unsigned long long  _MIN_LEADING_DIGITS_LENGTH_;
    NSRegularExpression * _NATIONAL_PREFIX_SEPARATORS_PATTERN_;
    NSString * _SEPARATOR_BEFORE_NATIONAL_NUMBER_;
    NSRegularExpression * _STANDALONE_DIGIT_PATTERN_;
    bool  _ableToFormat_;
    NSMutableString * _accruedInputWithoutFormatting_;
    NSMutableString * _accruedInput_;
    NSString * _currentFormattingPattern_;
    NBPhoneMetaData * _currentMetaData_;
    NSString * _currentOutput_;
    NSString * _defaultCountry_;
    NBPhoneMetaData * _defaultMetaData_;
    NSMutableString * _formattingTemplate_;
    bool  _inputHasFormatting_;
    bool  _isCompleteNumber_;
    bool  _isExpectingCountryCallingCode_;
    bool  _isSuccessfulFormatting;
    unsigned long long  _lastMatchPosition_;
    NSMutableString * _nationalNumber_;
    NSString * _nationalPrefixExtracted_;
    unsigned long long  _originalPosition_;
    NBPhoneNumberUtil * _phoneUtil_;
    unsigned long long  _positionToRemember_;
    NSMutableArray * _possibleFormats_;
    NSMutableString * _prefixBeforeNationalNumber_;
    bool  _shouldAddSpaceAfterNationalPrefix_;
}

@property (nonatomic, retain) NSRegularExpression *CHARACTER_CLASS_PATTERN_;
@property (nonatomic, retain) NSRegularExpression *DIGIT_PATTERN_;
@property (nonatomic, retain) NSString *DIGIT_PLACEHOLDER_;
@property (nonatomic, retain) NSRegularExpression *ELIGIBLE_FORMAT_PATTERN_;
@property (nonatomic, retain) NBPhoneMetaData *EMPTY_METADATA_;
@property (nonatomic) unsigned long long MIN_LEADING_DIGITS_LENGTH_;
@property (nonatomic, retain) NSRegularExpression *NATIONAL_PREFIX_SEPARATORS_PATTERN_;
@property (nonatomic) NSString *SEPARATOR_BEFORE_NATIONAL_NUMBER_;
@property (nonatomic, retain) NSRegularExpression *STANDALONE_DIGIT_PATTERN_;
@property (nonatomic) bool ableToFormat_;
@property (nonatomic, retain) NSMutableString *accruedInputWithoutFormatting_;
@property (nonatomic, retain) NSMutableString *accruedInput_;
@property (nonatomic, retain) NSString *currentFormattingPattern_;
@property (nonatomic, retain) NBPhoneMetaData *currentMetaData_;
@property (nonatomic, retain) NSString *currentOutput_;
@property (nonatomic, retain) NSString *defaultCountry_;
@property (nonatomic, retain) NBPhoneMetaData *defaultMetaData_;
@property (nonatomic, retain) NSMutableString *formattingTemplate_;
@property (nonatomic) bool inputHasFormatting_;
@property (nonatomic) bool isCompleteNumber_;
@property (nonatomic) bool isExpectingCountryCallingCode_;
@property (nonatomic, readonly) bool isSuccessfulFormatting;
@property (nonatomic) unsigned long long lastMatchPosition_;
@property (nonatomic, retain) NSMutableString *nationalNumber_;
@property (nonatomic, retain) NSString *nationalPrefixExtracted_;
@property (nonatomic) unsigned long long originalPosition_;
@property (nonatomic, retain) NBPhoneNumberUtil *phoneUtil_;
@property (nonatomic) unsigned long long positionToRemember_;
@property (nonatomic, retain) NSMutableArray *possibleFormats_;
@property (nonatomic, retain) NSMutableString *prefixBeforeNationalNumber_;
@property (nonatomic) bool shouldAddSpaceAfterNationalPrefix_;

- (void).cxx_destruct;
- (id)CHARACTER_CLASS_PATTERN_;
- (id)DIGIT_PATTERN_;
- (id)DIGIT_PLACEHOLDER_;
- (id)ELIGIBLE_FORMAT_PATTERN_;
- (id)EMPTY_METADATA_;
- (unsigned long long)MIN_LEADING_DIGITS_LENGTH_;
- (id)NATIONAL_PREFIX_SEPARATORS_PATTERN_;
- (id)SEPARATOR_BEFORE_NATIONAL_NUMBER_;
- (id)STANDALONE_DIGIT_PATTERN_;
- (bool)ableToExtractLongerNdd_;
- (bool)ableToFormat_;
- (id)accruedInputWithoutFormatting_;
- (id)accruedInput_;
- (id)appendNationalNumber_:(id)arg1;
- (id)attemptToChooseFormattingPattern_;
- (id)attemptToChoosePatternWithPrefixExtracted_;
- (bool)attemptToExtractCountryCallingCode_;
- (bool)attemptToExtractIdd_;
- (id)attemptToFormatAccruedDigits_;
- (void)clear;
- (bool)createFormattingTemplate_:(id)arg1;
- (id)currentFormattingPattern_;
- (id)currentMetaData_;
- (id)currentOutput_;
- (id)defaultCountry_;
- (id)defaultMetaData_;
- (id)description;
- (id)formattingTemplate_;
- (void)getAvailableFormats_:(id)arg1;
- (id)getFormattingTemplate_:(id)arg1 numberFormat:(id)arg2;
- (id)getMetadataForRegion_:(id)arg1;
- (long long)getRememberedPosition;
- (id)init;
- (id)initWithRegionCode:(id)arg1;
- (id)initWithRegionCode:(id)arg1 bundle:(id)arg2;
- (id)initWithRegionCodeForTest:(id)arg1;
- (id)initWithRegionCodeForTest:(id)arg1 bundle:(id)arg2;
- (id)inputAccruedNationalNumber_;
- (id)inputDigit:(id)arg1;
- (id)inputDigitAndRememberPosition:(id)arg1;
- (id)inputDigitHelper_:(id)arg1;
- (id)inputDigitWithOptionToRememberPosition_:(id)arg1 rememberPosition:(bool)arg2;
- (bool)inputHasFormatting_;
- (id)inputString:(id)arg1;
- (id)inputStringAndRememberPosition:(id)arg1;
- (bool)isCompleteNumber_;
- (bool)isDigitOrLeadingPlusSign_:(id)arg1;
- (bool)isExpectingCountryCallingCode_;
- (bool)isFormatEligible_:(id)arg1;
- (bool)isNanpaNumberWithNationalPrefix_;
- (bool)isSuccessfulFormatting;
- (unsigned long long)lastMatchPosition_;
- (bool)maybeCreateNewTemplate_;
- (void)narrowDownPossibleFormats_:(id)arg1;
- (id)nationalNumber_;
- (id)nationalPrefixExtracted_;
- (id)normalizeAndAccrueDigitsAndPlusSign_:(id)arg1 rememberPosition:(bool)arg2;
- (unsigned long long)originalPosition_;
- (id)phoneUtil_;
- (unsigned long long)positionToRemember_;
- (id)possibleFormats_;
- (id)prefixBeforeNationalNumber_;
- (id)removeLastDigit;
- (id)removeLastDigitAndRememberPosition;
- (id)removeNationalPrefixFromNationalNumber_;
- (void)setAbleToFormat_:(bool)arg1;
- (void)setAccruedInputWithoutFormatting_:(id)arg1;
- (void)setAccruedInput_:(id)arg1;
- (void)setCHARACTER_CLASS_PATTERN_:(id)arg1;
- (void)setCurrentFormattingPattern_:(id)arg1;
- (void)setCurrentMetaData_:(id)arg1;
- (void)setCurrentOutput_:(id)arg1;
- (void)setDIGIT_PATTERN_:(id)arg1;
- (void)setDIGIT_PLACEHOLDER_:(id)arg1;
- (void)setDefaultCountry_:(id)arg1;
- (void)setDefaultMetaData_:(id)arg1;
- (void)setELIGIBLE_FORMAT_PATTERN_:(id)arg1;
- (void)setEMPTY_METADATA_:(id)arg1;
- (void)setFormattingTemplate_:(id)arg1;
- (void)setInputHasFormatting_:(bool)arg1;
- (void)setIsCompleteNumber_:(bool)arg1;
- (void)setIsExpectingCountryCallingCode_:(bool)arg1;
- (void)setLastMatchPosition_:(unsigned long long)arg1;
- (void)setMIN_LEADING_DIGITS_LENGTH_:(unsigned long long)arg1;
- (void)setNATIONAL_PREFIX_SEPARATORS_PATTERN_:(id)arg1;
- (void)setNationalNumber_:(id)arg1;
- (void)setNationalPrefixExtracted_:(id)arg1;
- (void)setOriginalPosition_:(unsigned long long)arg1;
- (void)setPhoneUtil_:(id)arg1;
- (void)setPositionToRemember_:(unsigned long long)arg1;
- (void)setPossibleFormats_:(id)arg1;
- (void)setPrefixBeforeNationalNumber_:(id)arg1;
- (void)setSEPARATOR_BEFORE_NATIONAL_NUMBER_:(id)arg1;
- (void)setSTANDALONE_DIGIT_PATTERN_:(id)arg1;
- (void)setShouldAddSpaceAfterNationalPrefix_:(bool)arg1;
- (bool)shouldAddSpaceAfterNationalPrefix_;

@end
