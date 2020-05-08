/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
 */

@interface FMClient.SearchResultDevice : NSObject <NSSecureCoding> {
    void deviceClass;
    void deviceName;
    void discoveryId;
    void firstName;
    void lastName;
    void needsSafety;
    void ownerDsid;
    void pairedDevices;
    void productName;
    void productType;
    void serverId;
    void thisDevice;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *discoveryId;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) bool needsSafety;
@property (nonatomic, readonly) NSString *ownerDsid;
@property (nonatomic, readonly) NSArray *pairedDevices;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *serverId;
@property (nonatomic, readonly) bool thisDevice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceClass;
- (id)deviceName;
- (id)discoveryId;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 ownerDsid:(id)arg3 serverId:(id)arg4 deviceName:(id)arg5 deviceClass:(id)arg6 productName:(id)arg7 discoveryId:(id)arg8 productType:(id)arg9 thisDevice:(bool)arg10 needsSafety:(bool)arg11 pairedDevices:(id)arg12;
- (id)lastName;
- (bool)needsSafety;
- (id)ownerDsid;
- (id)pairedDevices;
- (id)productName;
- (id)productType;
- (id)serverId;
- (bool)thisDevice;

@end
