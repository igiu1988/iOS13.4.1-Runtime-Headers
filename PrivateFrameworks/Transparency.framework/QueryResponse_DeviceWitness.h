/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface QueryResponse_DeviceWitness : GPBMessage

@property (nonatomic, retain) NSMutableArray *clientDataWitnessArray;
@property (nonatomic, readonly) unsigned long long clientDataWitnessArray_Count;
@property (nonatomic, retain) VRFWitness *deviceIdWitness;
@property (nonatomic) bool hasDeviceIdWitness;

+ (id)descriptor;

@end