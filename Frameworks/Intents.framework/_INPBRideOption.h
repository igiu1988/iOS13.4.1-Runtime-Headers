/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideOption : PBCodable <NSCopying, NSSecureCoding, _INPBRideOption> {
    bool  __encodeLegacyGloryData;
    NSArray * _availablePartySizeOptions;
    NSString * _availablePartySizeOptionsSelectionPrompt;
    NSString * _disclaimerMessage;
    _INPBTimestamp * _estimatedPickupDate;
    NSArray * _fareLineItems;
    struct { 
        unsigned int usesMeteredFare : 1; 
    }  _has;
    NSString * _name;
    _INPBPriceRangeValue * _priceRange;
    NSString * _specialPricing;
    _INPBImageValue * _specialPricingBadgeImage;
    NSString * _subtitle;
    _INPBUserActivity * _userActivityForBookingInApplication;
    bool  _usesMeteredFare;
}

@property (setter=_setEncodeLegacyGloryData:, nonatomic) bool _encodeLegacyGloryData;
@property (nonatomic, copy) NSArray *availablePartySizeOptions;
@property (nonatomic, readonly) unsigned long long availablePartySizeOptionsCount;
@property (nonatomic, copy) NSString *availablePartySizeOptionsSelectionPrompt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *disclaimerMessage;
@property (nonatomic, retain) _INPBTimestamp *estimatedPickupDate;
@property (nonatomic, copy) NSArray *fareLineItems;
@property (nonatomic, readonly) unsigned long long fareLineItemsCount;
@property (nonatomic, readonly) bool hasAvailablePartySizeOptionsSelectionPrompt;
@property (nonatomic, readonly) bool hasDisclaimerMessage;
@property (nonatomic, readonly) bool hasEstimatedPickupDate;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPriceRange;
@property (nonatomic, readonly) bool hasSpecialPricing;
@property (nonatomic, readonly) bool hasSpecialPricingBadgeImage;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasUserActivityForBookingInApplication;
@property (nonatomic) bool hasUsesMeteredFare;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _INPBPriceRangeValue *priceRange;
@property (nonatomic, copy) NSString *specialPricing;
@property (nonatomic, retain) _INPBImageValue *specialPricingBadgeImage;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBUserActivity *userActivityForBookingInApplication;
@property (nonatomic) bool usesMeteredFare;

+ (Class)availablePartySizeOptionsType;
+ (Class)fareLineItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_encodeLegacyGloryData;
- (void)_setEncodeLegacyGloryData:(bool)arg1;
- (void)addAvailablePartySizeOptions:(id)arg1;
- (void)addFareLineItems:(id)arg1;
- (id)availablePartySizeOptions;
- (id)availablePartySizeOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)availablePartySizeOptionsCount;
- (id)availablePartySizeOptionsSelectionPrompt;
- (void)clearAvailablePartySizeOptions;
- (void)clearFareLineItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)disclaimerMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedPickupDate;
- (id)fareLineItems;
- (id)fareLineItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fareLineItemsCount;
- (bool)hasAvailablePartySizeOptionsSelectionPrompt;
- (bool)hasDisclaimerMessage;
- (bool)hasEstimatedPickupDate;
- (bool)hasName;
- (bool)hasPriceRange;
- (bool)hasSpecialPricing;
- (bool)hasSpecialPricingBadgeImage;
- (bool)hasSubtitle;
- (bool)hasUserActivityForBookingInApplication;
- (bool)hasUsesMeteredFare;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)priceRange;
- (bool)readFrom:(id)arg1;
- (void)setAvailablePartySizeOptions:(id)arg1;
- (void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
- (void)setDisclaimerMessage:(id)arg1;
- (void)setEstimatedPickupDate:(id)arg1;
- (void)setFareLineItems:(id)arg1;
- (void)setHasUsesMeteredFare:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setSpecialPricing:(id)arg1;
- (void)setSpecialPricingBadgeImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setUserActivityForBookingInApplication:(id)arg1;
- (void)setUsesMeteredFare:(bool)arg1;
- (id)specialPricing;
- (id)specialPricingBadgeImage;
- (id)subtitle;
- (id)userActivityForBookingInApplication;
- (bool)usesMeteredFare;
- (void)writeTo:(id)arg1;

@end
