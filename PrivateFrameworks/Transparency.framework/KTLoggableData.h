/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface KTLoggableData : NSObject <NSSecureCoding> {
    NSData * _clientData;
    NSData * _clientDataVRFOutput;
    NSData * _deviceID;
    NSData * _deviceVRFOutput;
    bool  _marked;
    bool  _successfulSync;
}

@property (retain) NSData *clientData;
@property (retain) NSData *clientDataVRFOutput;
@property (copy) NSData *deviceID;
@property (retain) NSData *deviceVRFOutput;
@property bool marked;
@property bool successfulSync;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientData;
- (id)clientDataVRFOutput;
- (id)debugDescription;
- (id)description;
- (id)deviceID;
- (id)deviceVRFOutput;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)marked;
- (void)setClientData:(id)arg1;
- (void)setClientDataVRFOutput:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceVRFOutput:(id)arg1;
- (void)setMarked:(bool)arg1;
- (void)setSuccessfulSync:(bool)arg1;
- (bool)successfulSync;

@end
