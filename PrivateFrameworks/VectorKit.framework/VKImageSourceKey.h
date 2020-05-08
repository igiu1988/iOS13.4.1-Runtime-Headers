/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKImageSourceKey : NSObject <GEOTransitArtworkDataSource, GEOTransitIconDataSource, GEOTransitShieldDataSource> {
    unsigned char  _dataType;
    unsigned int  _dataValue;
    NSArray * _fallbackImageKeys;
    bool  _hasDataValue;
    unsigned int  _iconAttributeKey;
    unsigned int  _iconAttributeValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _imageCenter;
    NSString * _imageName;
    unsigned int  _keyType;
    NSString * _relatedText;
    struct Color<unsigned char, 4, geo::ColorSpace::Linear> { 
        struct Matrix<unsigned char, 4, 1> { 
            unsigned char _e[4]; 
        } _backing; 
    }  _shieldColor;
    NSString * _shieldText;
    NSString * _shieldTextLocale;
    unsigned int  _shieldType;
    NSString * _text;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic) unsigned char dataType;
@property (nonatomic) unsigned int dataValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *fallbackImageKeys;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readonly) int iconType;
@property (nonatomic) struct CGPoint { double x1; double x2; } imageCenter;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) unsigned int keyType;
@property (nonatomic, retain) NSString *relatedText;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) NSString *shieldTextLocale;
@property (nonatomic, readonly) long long shieldType;
@property (nonatomic, readonly) unsigned int shieldType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, readonly) <GEOTransitTextDataSource> *textDataSource;
@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; } transitLineColor;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

- (id).cxx_construct;
- (id)_initWithKeyType:(unsigned int)arg1;
- (unsigned char)dataType;
- (unsigned int)dataValue;
- (void)dealloc;
- (id)fallbackImageKeys;
- (bool)hasDataValue;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (struct CGPoint { double x1; double x2; })imageCenter;
- (id)imageName;
- (id)initWithDataType:(unsigned char)arg1;
- (id)initWithIconAttributeKey:(unsigned int)arg1 attributeValue:(unsigned int)arg2;
- (id)initWithIconName:(const char *)arg1;
- (id)initWithLabelImageKey:(const struct shared_ptr<md::LabelImageKey> { struct LabelImageKey {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)initWithShieldName:(const char *)arg1 text:(const char *)arg2 locale:(const char *)arg3 color:(struct Color<unsigned char, 4, geo::ColorSpace::Linear> { struct Matrix<unsigned char, 4, 1> { unsigned char x_1_1_1[4]; } x1; })arg4;
- (id)initWithShieldText:(const char *)arg1 locale:(const char *)arg2 type:(unsigned int)arg3 color:(struct Color<unsigned char, 4, geo::ColorSpace::Linear> { struct Matrix<unsigned char, 4, 1> { unsigned char x_1_1_1[4]; } x1; })arg4;
- (unsigned int)keyType;
- (id)relatedText;
- (void)setDataType:(unsigned char)arg1;
- (void)setDataValue:(unsigned int)arg1;
- (void)setFallbackImageKeys:(id)arg1;
- (void)setImageCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRelatedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)shieldText;
- (id)shieldTextLocale;
- (unsigned int)shieldType;
- (id)text;
- (struct { float x1; float x2; float x3; float x4; })transitLineColor;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)accessibilityText;
- (int)artworkSourceType;
- (int)artworkUseType;
- (bool)hasRoutingIncidentBadge;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (int)iconType;
- (id)shieldColorString;
- (id)shieldDataSource;
- (id)textDataSource;

@end