/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFMDMv1InstallAppRequest : DMFInstallAppRequest {
    NSString * _VPNUUIDString;
    NSArray * _associatedDomains;
    NSDictionary * _configuration;
    bool  _manage;
    unsigned long long  _managementOptions;
    NSString * _originator;
    NSString * _personaID;
    NSString * _redemptionCode;
}

@property (nonatomic, copy) NSString *VPNUUIDString;
@property (nonatomic, copy) NSArray *associatedDomains;
@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic) bool manage;
@property (nonatomic) unsigned long long managementOptions;
@property (nonatomic, copy) NSString *originator;
@property (nonatomic, copy) NSString *personaID;
@property (nonatomic, copy) NSString *redemptionCode;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)VPNUUIDString;
- (id)associatedDomains;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)manage;
- (unsigned long long)managementOptions;
- (id)originator;
- (id)personaID;
- (id)redemptionCode;
- (void)setAssociatedDomains:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setManage:(bool)arg1;
- (void)setManagementOptions:(unsigned long long)arg1;
- (void)setOriginator:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (void)setRedemptionCode:(id)arg1;
- (void)setVPNUUIDString:(id)arg1;

@end
