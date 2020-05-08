/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicleInformation : NSObject {
    CARSessionStatus * _currentSessionStatus;
}

@property (nonatomic, retain) CARSessionStatus *currentSessionStatus;
@property (nonatomic, readonly) unsigned long long driverPosition;
@property (nonatomic, readonly) unsigned long long vehicleAmbientBrightness;

- (void).cxx_destruct;
- (id)currentSessionStatus;
- (unsigned long long)driverPosition;
- (id)init;
- (void)setCurrentSessionStatus:(id)arg1;
- (unsigned long long)vehicleAmbientBrightness;

@end
