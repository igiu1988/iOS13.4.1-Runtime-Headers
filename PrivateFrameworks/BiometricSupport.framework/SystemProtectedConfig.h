/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
 */

@interface SystemProtectedConfig : NSObject {
    int  _biometryEnabled;
    int  _identificationEnabled;
    int  _loginEnabled;
    int  _unlockEnabled;
    int  _unlockTokenMaxLifetime;
}

@property (nonatomic) int biometryEnabled;
@property (nonatomic) int identificationEnabled;
@property (nonatomic) int loginEnabled;
@property (nonatomic) int unlockEnabled;
@property (nonatomic) int unlockTokenMaxLifetime;

- (int)biometryEnabled;
- (int)identificationEnabled;
- (id)init;
- (int)loginEnabled;
- (void)setBiometryEnabled:(int)arg1;
- (void)setIdentificationEnabled:(int)arg1;
- (void)setLoginEnabled:(int)arg1;
- (void)setUnlockEnabled:(int)arg1;
- (void)setUnlockTokenMaxLifetime:(int)arg1;
- (int)unlockEnabled;
- (int)unlockTokenMaxLifetime;

@end
