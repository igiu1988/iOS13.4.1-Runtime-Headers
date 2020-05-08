/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWakeConfiguration : NSObject <HMDTLVProtocol, NSCopying> {
    HMDWakeConfigurationParamaters * _custom1;
    HMDWakeConfigurationParamaters * _custom2;
    NSData * _reserved;
}

@property (nonatomic, retain) HMDWakeConfigurationParamaters *custom1;
@property (nonatomic, retain) HMDWakeConfigurationParamaters *custom2;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *reserved;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custom1;
- (id)custom2;
- (id)description;
- (id)init;
- (id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)reserved;
- (id)serializeWithError:(id*)arg1;
- (void)setCustom1:(id)arg1;
- (void)setCustom2:(id)arg1;
- (void)setReserved:(id)arg1;

@end
