/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUNumberFormatter : NSObject {
    NSString * _additionalCurrencyCode;
    NSDictionary * _additionalCurrencyCodeFormatters;
    NSMutableDictionary * _currencyCodeToHalfWidthSymbolMap;
    NSMutableDictionary * _currencyCodeToSymbolMap;
    NSString * _currencyDecimalSeparator;
    NSDictionary * _currencyFormatters;
    NSString * _currencyGroupingSeparator;
    NSString * _currencyString;
    NSArray * _decimalFormatters;
    NSString * _decimalSeparator;
    NSString * _decimalString;
    struct __CFNumberFormatter { } * _fractionFormatter;
    NSString * _groupingSeparator;
    unsigned long long  _groupingSize;
    OITSULocaleStructuredDictionary * _harmonizedNumberFormatterSymbols;
    NSLocale * _locale;
    NSString * _percentSymbol;
    NSArray * _percentageFormatters;
    NSString * _percentageString;
    NSArray * _scientificFormatters;
    NSString * _scientificString;
    NSMutableArray * _transformedCurrencyStrings;
    NSMutableArray * _transformedDecimalStrings;
    NSMutableArray * _transformedPercentageStrings;
    NSMutableArray * _transformedScientificStrings;
}

+ (id)availableCurrencyCodes;
+ (struct __CFNumberFormatter { }*)createHarmonizedCFNumberFormatterWithLocale:(id)arg1 style:(long long)arg2;
+ (id)currencyDecimalSeparatorForLocale:(id)arg1;
+ (id)currencyGroupingSeparatorForLocale:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (id)currencySymbolForCurrencyCode:(id)arg1 locale:(id)arg2;
+ (id)currentLocaleCurrencyCode;
+ (id)currentLocaleCurrencyDecimalSeparator;
+ (id)currentLocaleDecimalSeparator;
+ (id)decimalSeparatorForLocale:(id)arg1;
+ (id)defaultCurrencyCodeForLocale:(id)arg1;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (id)formatterForLocale:(id)arg1;
+ (id)groupingSeparatorForLocale:(id)arg1;
+ (unsigned long long)groupingSizeForLocale:(id)arg1;
+ (void)initialize;
+ (id)numberFormatStringSpecialSymbols;
+ (id)percentSymbolForLocale:(id)arg1;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg1;
+ (id)userVisibleCurrencyCodes;

- (void).cxx_destruct;
- (id)currencyCode;
- (id)currencyDecimalSeparator;
- (bool)currencyFromString:(id)arg1 additionalCurrencyCode:(id)arg2 value:(double*)arg3 formatString:(id*)arg4 currencyCode:(id*)arg5;
- (id)currencyGroupingSeparator;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (void)dealloc;
- (bool)decimalFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3;
- (id)decimalSeparator;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)displayNameForCurrencyCode:(id)arg1;
- (bool)fractionFromString:(id)arg1 value:(double*)arg2;
- (id)groupingSeparator;
- (unsigned long long)groupingSize;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)arg1;
- (struct __CFNumberFormatter { }*)p_createHarmonizedCFNumberFormatterOfStyle:(long long)arg1;
- (id)p_currencyFormatters;
- (id)p_decimalFormatters;
- (id)p_findCurrencySymbolInString:(id)arg1 additionalCurrencyCode:(id)arg2 successfullString:(id*)arg3 currencyCode:(id*)arg4;
- (void)p_loadHarmonizedNumberFormatterSymbols;
- (void)p_numberPreferencesChanged:(id)arg1;
- (id)p_percentageFormatters;
- (id)p_scientificFormatters;
- (bool)p_valueFromString:(id)arg1 formatters:(id)arg2 value:(double*)arg3 formatString:(id*)arg4;
- (id)percentSymbol;
- (bool)percentageFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3;
- (bool)scientificFromString:(id)arg1 value:(double*)arg2 formatString:(id*)arg3;

@end
