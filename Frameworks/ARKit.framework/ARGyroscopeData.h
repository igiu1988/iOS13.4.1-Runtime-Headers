/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARGyroscopeData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARMutableSensorData, NSSecureCoding> {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rotationRate;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct { double x1; double x2; double x3; } rotationRate;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMetadataWrapper:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct { double x1; double x2; double x3; })rotationRate;
- (void)setRotationRate:(struct { double x1; double x2; double x3; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
