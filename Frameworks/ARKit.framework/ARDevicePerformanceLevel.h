/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARDevicePerformanceLevel : NSObject <NSCopying> {
    unsigned long long  _batteryLevel;
    unsigned long long  _thermalLevel;
}

@property (nonatomic, readonly) unsigned long long batteryLevel;
@property (nonatomic, readonly) unsigned long long thermalLevel;

+ (unsigned long long)ARDevicethermalStateFromNSProcessInfoThermalState:(long long)arg1;

- (unsigned long long)batteryLevel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNSProcessInfoThermalState:(long long)arg1 initWithBatteryLevel:(unsigned long long)arg2;
- (id)initWithThermalLevel:(unsigned long long)arg1 initWithBatteryLevel:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)thermalLevel;

@end
