/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFieldProperties : NSObject <NSSecureCoding> {
    bool  _ECP2Field;
    NSArray * _TCIs;
    long long  _accessTerminalSubtype;
    bool  _authenticationRequired;
    NSError * _error;
    NSArray * _merchantIdentifiers;
    bool  _shouldIgnore;
    unsigned long long  _technology;
    unsigned long long  _terminalSubtype;
    long long  _terminalType;
    long long  _valueAddedServiceMode;
}

@property (getter=isECP2Field, nonatomic) bool ECP2Field;
@property (nonatomic, copy) NSArray *TCIs;
@property (nonatomic, readonly) long long accessTerminalSubtype;
@property (nonatomic) bool authenticationRequired;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSArray *merchantIdentifiers;
@property (nonatomic, readonly) bool shouldIgnore;
@property (nonatomic, readonly) unsigned long long technology;
@property (nonatomic, readonly) unsigned long long terminalSubtype;
@property (nonatomic, readonly) long long terminalType;
@property (nonatomic, readonly) long long valueAddedServiceMode;

+ (id)fieldPropertiesForFieldNotification:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)TCIs;
- (long long)accessTerminalSubtype;
- (long long)accessTerminalSubtype;
- (bool)authenticationRequired;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 terminalSubtype:(unsigned long long)arg3 valueAddedServiceMode:(long long)arg4;
- (bool)isECP2Field;
- (id)merchantIdentifiers;
- (void)setAuthenticationRequired:(bool)arg1;
- (void)setECP2Field:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setMerchantIdentifiers:(id)arg1;
- (void)setTCIs:(id)arg1;
- (bool)shouldIgnore;
- (bool)shouldIgnore;
- (unsigned long long)technology;
- (unsigned long long)terminalSubtype;
- (long long)terminalType;
- (long long)valueAddedServiceMode;

@end
