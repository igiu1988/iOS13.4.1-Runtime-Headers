/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDNWDeviceReport : PBCodable <NSCopying> {
    unsigned int  _batteryAbsoluteCapacity;
    bool  _batteryAtCriticalLevel;
    bool  _batteryAtWarnLevel;
    unsigned int  _batteryCurrentCapacity;
    unsigned int  _batteryDesignCapacity;
    bool  _batteryExternalPowerIsConnected;
    bool  _batteryFullyCharged;
    bool  _batteryIsCharging;
    unsigned int  _batteryMaximumCapacity;
    unsigned int  _batteryPercentage;
    unsigned int  _batteryTimeRemaining;
    unsigned int  _batteryVoltage;
    bool  _devicePluggedIn;
    bool  _deviceScreenOn;
    struct { 
        unsigned int batteryAbsoluteCapacity : 1; 
        unsigned int batteryCurrentCapacity : 1; 
        unsigned int batteryDesignCapacity : 1; 
        unsigned int batteryMaximumCapacity : 1; 
        unsigned int batteryPercentage : 1; 
        unsigned int batteryTimeRemaining : 1; 
        unsigned int batteryVoltage : 1; 
        unsigned int thermalPressure : 1; 
        unsigned int batteryAtCriticalLevel : 1; 
        unsigned int batteryAtWarnLevel : 1; 
        unsigned int batteryExternalPowerIsConnected : 1; 
        unsigned int batteryFullyCharged : 1; 
        unsigned int batteryIsCharging : 1; 
        unsigned int devicePluggedIn : 1; 
        unsigned int deviceScreenOn : 1; 
    }  _has;
    int  _thermalPressure;
}

@property (nonatomic) unsigned int batteryAbsoluteCapacity;
@property (nonatomic) bool batteryAtCriticalLevel;
@property (nonatomic) bool batteryAtWarnLevel;
@property (nonatomic) unsigned int batteryCurrentCapacity;
@property (nonatomic) unsigned int batteryDesignCapacity;
@property (nonatomic) bool batteryExternalPowerIsConnected;
@property (nonatomic) bool batteryFullyCharged;
@property (nonatomic) bool batteryIsCharging;
@property (nonatomic) unsigned int batteryMaximumCapacity;
@property (nonatomic) unsigned int batteryPercentage;
@property (nonatomic) unsigned int batteryTimeRemaining;
@property (nonatomic) unsigned int batteryVoltage;
@property (nonatomic) bool devicePluggedIn;
@property (nonatomic) bool deviceScreenOn;
@property (nonatomic) bool hasBatteryAbsoluteCapacity;
@property (nonatomic) bool hasBatteryAtCriticalLevel;
@property (nonatomic) bool hasBatteryAtWarnLevel;
@property (nonatomic) bool hasBatteryCurrentCapacity;
@property (nonatomic) bool hasBatteryDesignCapacity;
@property (nonatomic) bool hasBatteryExternalPowerIsConnected;
@property (nonatomic) bool hasBatteryFullyCharged;
@property (nonatomic) bool hasBatteryIsCharging;
@property (nonatomic) bool hasBatteryMaximumCapacity;
@property (nonatomic) bool hasBatteryPercentage;
@property (nonatomic) bool hasBatteryTimeRemaining;
@property (nonatomic) bool hasBatteryVoltage;
@property (nonatomic) bool hasDevicePluggedIn;
@property (nonatomic) bool hasDeviceScreenOn;
@property (nonatomic) bool hasThermalPressure;
@property (nonatomic) int thermalPressure;

- (int)StringAsThermalPressure:(id)arg1;
- (unsigned int)batteryAbsoluteCapacity;
- (bool)batteryAtCriticalLevel;
- (bool)batteryAtWarnLevel;
- (unsigned int)batteryCurrentCapacity;
- (unsigned int)batteryDesignCapacity;
- (bool)batteryExternalPowerIsConnected;
- (bool)batteryFullyCharged;
- (bool)batteryIsCharging;
- (unsigned int)batteryMaximumCapacity;
- (unsigned int)batteryPercentage;
- (unsigned int)batteryTimeRemaining;
- (unsigned int)batteryVoltage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)devicePluggedIn;
- (bool)deviceScreenOn;
- (id)dictionaryRepresentation;
- (bool)hasBatteryAbsoluteCapacity;
- (bool)hasBatteryAtCriticalLevel;
- (bool)hasBatteryAtWarnLevel;
- (bool)hasBatteryCurrentCapacity;
- (bool)hasBatteryDesignCapacity;
- (bool)hasBatteryExternalPowerIsConnected;
- (bool)hasBatteryFullyCharged;
- (bool)hasBatteryIsCharging;
- (bool)hasBatteryMaximumCapacity;
- (bool)hasBatteryPercentage;
- (bool)hasBatteryTimeRemaining;
- (bool)hasBatteryVoltage;
- (bool)hasDevicePluggedIn;
- (bool)hasDeviceScreenOn;
- (bool)hasThermalPressure;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBatteryAbsoluteCapacity:(unsigned int)arg1;
- (void)setBatteryAtCriticalLevel:(bool)arg1;
- (void)setBatteryAtWarnLevel:(bool)arg1;
- (void)setBatteryCurrentCapacity:(unsigned int)arg1;
- (void)setBatteryDesignCapacity:(unsigned int)arg1;
- (void)setBatteryExternalPowerIsConnected:(bool)arg1;
- (void)setBatteryFullyCharged:(bool)arg1;
- (void)setBatteryIsCharging:(bool)arg1;
- (void)setBatteryMaximumCapacity:(unsigned int)arg1;
- (void)setBatteryPercentage:(unsigned int)arg1;
- (void)setBatteryTimeRemaining:(unsigned int)arg1;
- (void)setBatteryVoltage:(unsigned int)arg1;
- (void)setDevicePluggedIn:(bool)arg1;
- (void)setDeviceScreenOn:(bool)arg1;
- (void)setHasBatteryAbsoluteCapacity:(bool)arg1;
- (void)setHasBatteryAtCriticalLevel:(bool)arg1;
- (void)setHasBatteryAtWarnLevel:(bool)arg1;
- (void)setHasBatteryCurrentCapacity:(bool)arg1;
- (void)setHasBatteryDesignCapacity:(bool)arg1;
- (void)setHasBatteryExternalPowerIsConnected:(bool)arg1;
- (void)setHasBatteryFullyCharged:(bool)arg1;
- (void)setHasBatteryIsCharging:(bool)arg1;
- (void)setHasBatteryMaximumCapacity:(bool)arg1;
- (void)setHasBatteryPercentage:(bool)arg1;
- (void)setHasBatteryTimeRemaining:(bool)arg1;
- (void)setHasBatteryVoltage:(bool)arg1;
- (void)setHasDevicePluggedIn:(bool)arg1;
- (void)setHasDeviceScreenOn:(bool)arg1;
- (void)setHasThermalPressure:(bool)arg1;
- (void)setThermalPressure:(int)arg1;
- (int)thermalPressure;
- (id)thermalPressureAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
