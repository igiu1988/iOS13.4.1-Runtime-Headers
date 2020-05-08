/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNMonogrammer : NSObject {
    UIColor * _backgroundColor;
    double  _diameter;
    UIFont * _font;
    double  _innerBorderWidth;
    UIImage * _knockoutMaskMonogram;
    long long  _monogrammerStyle;
    UIImage * _questionMarkMonogram;
    double  _scale;
    NSString * _silhouetteImageName;
    UIImage * _silhouetteMonogram;
    CNMonogrammer * _subMonogrammer;
    UIColor * _textColor;
    bool  _textKnockout;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) double diameter;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, readonly) NSArray *keysToFetch;
@property (nonatomic, readonly) UIImage *knockoutMaskMonogram;
@property (nonatomic, readonly) UIImage *questionMarkMonogram;
@property (nonatomic, readonly) UIImage *silhouetteMonogram;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool textKnockout;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)_initialsForContact:(id)arg1;
+ (id)descriptorForRequiredKeysIncludingImage:(bool)arg1;
+ (long long)monogramTypeForContact:(id)arg1;
+ (id)requiredKeyDescriptor;

- (void).cxx_destruct;
- (void)_clearMonogramCache;
- (id)_copyMonogramWithImageData:(id)arg1;
- (id)_copyMonogramWithInitials:(id)arg1;
- (id)_copyMonogramWithKnockoutMask;
- (id)_copyMonogramWithSilhouette;
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)backgroundColor;
- (void)dealloc;
- (double)diameter;
- (id)font;
- (id)init;
- (id)initWithStyle:(long long)arg1 diameter:(double)arg2;
- (double)innerBorderWidth;
- (id)keysToFetch;
- (id)knockoutMaskMonogram;
- (id)monogramForContact:(id)arg1;
- (id)monogramForContact:(id)arg1 isContactImage:(bool*)arg2;
- (id)monogramForContacts:(id)arg1;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)monogramsAsFlatImages;
- (void)monogramsForStark;
- (void)monogramsWithTint:(id)arg1;
- (id)questionMarkMonogram;
- (void)setBackgroundColor:(id)arg1;
- (void)setDiameter:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextKnockout:(bool)arg1;
- (id)silhouetteImageName;
- (id)silhouetteMonogram;
- (id)textColor;
- (bool)textKnockout;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)monogramForFirstWordFromText:(id)arg1;

@end
