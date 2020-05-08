/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSLitePlacemark : NSObject <NSSecureCoding> {
    NSString * _ISOcountryCode;
    NSString * _administrativeArea;
    NSString * _administrativeAreaCode;
    NSArray * _areasOfInterest;
    NSString * _geoServiceProvider;
    NSString * _inlandWater;
    bool  _isIsland;
    NSString * _locality;
    CLLocation * _location;
    NSString * _ocean;
    CLCircularRegion * _region;
    NSData * _revGeoLocationData;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, retain) NSString *ISOcountryCode;
@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, retain) NSString *administrativeAreaCode;
@property (nonatomic, retain) NSArray *areasOfInterest;
@property (nonatomic, retain) NSString *geoServiceProvider;
@property (nonatomic, retain) NSString *inlandWater;
@property (nonatomic) bool isIsland;
@property (nonatomic, readonly) bool isOcean;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSString *ocean;
@property (nonatomic, retain) CLCircularRegion *region;
@property (nonatomic, retain) NSData *revGeoLocationData;
@property (nonatomic, retain) NSString *subAdministrativeArea;
@property (nonatomic, retain) NSString *subLocality;
@property (nonatomic, retain) NSString *subThoroughfare;
@property (nonatomic, retain) NSString *thoroughfare;

+ (bool)_isIslandForGeoMapItem:(id)arg1;
+ (id)litePlacemarkFromCLPlacemark:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ISOcountryCode;
- (void)_extractValuesFromGeoMapItem:(id)arg1;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areasOfInterest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoServiceProvider;
- (id)initWithCLPlacemark:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRTMapItem:(id)arg1;
- (id)inlandWater;
- (bool)isEqual:(id)arg1;
- (bool)isIsland;
- (bool)isOcean;
- (id)locality;
- (id)location;
- (id)ocean;
- (id)region;
- (id)revGeoLocationData;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAdministrativeAreaCode:(id)arg1;
- (void)setAreasOfInterest:(id)arg1;
- (void)setGeoServiceProvider:(id)arg1;
- (void)setISOcountryCode:(id)arg1;
- (void)setInlandWater:(id)arg1;
- (void)setIsIsland:(bool)arg1;
- (void)setLocality:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOcean:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setRevGeoLocationData:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;

@end
