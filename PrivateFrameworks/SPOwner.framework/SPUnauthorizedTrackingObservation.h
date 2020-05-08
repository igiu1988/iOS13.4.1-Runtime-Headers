/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding> {
    NSDate * _observedAt;
    NSArray * _observedLocations;
    SPUnauthorizedTrackingAdvertisement * _trackingIdentifier;
}

@property (nonatomic, copy) NSDate *observedAt;
@property (nonatomic, copy) NSArray *observedLocations;
@property (nonatomic, retain) SPUnauthorizedTrackingAdvertisement *trackingIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)observedAt;
- (id)observedLocations;
- (void)setObservedAt:(id)arg1;
- (void)setObservedLocations:(id)arg1;
- (void)setTrackingIdentifier:(id)arg1;
- (id)trackingIdentifier;

@end
