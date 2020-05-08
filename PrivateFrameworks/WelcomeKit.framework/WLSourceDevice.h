/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

@interface WLSourceDevice : NSObject <NSSecureCoding> {
    NSString * _hardwareBrand;
    NSString * _hardwareDesign;
    NSString * _hardwareMaker;
    NSString * _hardwareModel;
    NSString * _hardwareProduct;
    unsigned short  _httpPort;
    NSString * _ipAddress;
    bool  _isLocal;
    NSString * _name;
    NSString * _osAPIVersion;
    NSString * _persistentIdentifier;
    unsigned short  _socketPort;
}

@property (nonatomic, copy) NSString *hardwareBrand;
@property (nonatomic, copy) NSString *hardwareDesign;
@property (nonatomic, copy) NSString *hardwareMaker;
@property (nonatomic, copy) NSString *hardwareModel;
@property (nonatomic, copy) NSString *hardwareProduct;
@property (nonatomic) unsigned short httpPort;
@property (nonatomic, copy) NSString *ipAddress;
@property (nonatomic) bool isLocal;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *osAPIVersion;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (nonatomic) unsigned short socketPort;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareBrand;
- (id)hardwareDesign;
- (id)hardwareMaker;
- (id)hardwareModel;
- (id)hardwareProduct;
- (unsigned short)httpPort;
- (id)initWithCoder:(id)arg1;
- (id)ipAddress;
- (bool)isLocal;
- (id)name;
- (id)osAPIVersion;
- (id)persistentIdentifier;
- (void)setHardwareBrand:(id)arg1;
- (void)setHardwareDesign:(id)arg1;
- (void)setHardwareMaker:(id)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHardwareProduct:(id)arg1;
- (void)setHttpPort:(unsigned short)arg1;
- (void)setIpAddress:(id)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOsAPIVersion:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setSocketPort:(unsigned short)arg1;
- (unsigned short)socketPort;

@end
