/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

@interface SGModelHyperparameters : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterNGramRange;
    NSString * _featuresModelId;
    NSString * _featuresVersion;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tokenNGramRange;
    unsigned long long  _vectorLength;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterNGramRange;
@property (nonatomic, readonly, copy) NSString *featuresModelId;
@property (nonatomic, readonly, copy) NSString *featuresVersion;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } tokenNGramRange;
@property (nonatomic, readonly) unsigned long long vectorLength;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterNGramRange;
- (id)featuresModelId;
- (id)featuresVersion;
- (id)initWithDictionary:(id)arg1;
- (id)sessionDescriptorForLanguage:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenNGramRange;
- (unsigned long long)vectorLength;

@end
