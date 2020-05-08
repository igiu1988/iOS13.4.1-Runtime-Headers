/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPCommand : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _beaconIdentifier;
    NSNumber * _duration;
    bool  _enableLostMode;
    NSDate * _expiration;
    SPHandle * _handle;
    NSUUID * _identifier;
    NSString * _lostModeMessage;
    NSString * _lostModePhoneNumber;
    NSString * _obfuscatedIdentifier;
    long long  _type;
}

@property (nonatomic, copy) NSUUID *beaconIdentifier;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic) bool enableLostMode;
@property (nonatomic, copy) NSDate *expiration;
@property (nonatomic, copy) SPHandle *handle;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *lostModeMessage;
@property (nonatomic, copy) NSString *lostModePhoneNumber;
@property (nonatomic, copy) NSString *obfuscatedIdentifier;
@property (nonatomic, readonly, copy) NSString *taskName;
@property (nonatomic) long long type;

+ (id)disableNotifyWhenFound:(id)arg1;
+ (id)enableNotifyWhenFound:(id)arg1;
+ (id)locate:(id)arg1;
+ (id)startNotifyWhenFound:(id)arg1;
+ (id)stopNotifyWhenFound:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)duration;
- (bool)enableLostMode;
- (void)encodeWithCoder:(id)arg1;
- (id)expiration;
- (id)handle;
- (id)identifier;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8 identifier:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)lostModeMessage;
- (id)lostModePhoneNumber;
- (id)obfuscatedIdentifier;
- (void)setBeaconIdentifier:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setEnableLostMode:(bool)arg1;
- (void)setExpiration:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLostModeMessage:(id)arg1;
- (void)setLostModePhoneNumber:(id)arg1;
- (void)setObfuscatedIdentifier:(id)arg1;
- (void)setType:(long long)arg1;
- (id)taskName;
- (long long)type;

@end
