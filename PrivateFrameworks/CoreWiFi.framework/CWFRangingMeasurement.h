/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFRangingMeasurement : NSObject <NSCopying, NSSecureCoding> {
    long long  _RSSI;
    unsigned long long  _channel;
    unsigned long long  _roundTripTime;
}

@property (nonatomic) long long RSSI;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned long long roundTripTime;

+ (bool)supportsSecureCoding;

- (long long)RSSI;
- (unsigned long long)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRangingMeasurement:(id)arg1;
- (unsigned long long)roundTripTime;
- (void)setChannel:(unsigned long long)arg1;
- (void)setRSSI:(long long)arg1;
- (void)setRoundTripTime:(unsigned long long)arg1;

@end
