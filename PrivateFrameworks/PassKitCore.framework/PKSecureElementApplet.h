/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElementApplet : NSObject <NSSecureCoding> {
    bool  _containsSubKeys;
    NSString * _identifier;
    unsigned long long  _lifecycleState;
    bool  _locked;
}

@property (nonatomic, readonly) bool containsSubKeys;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long lifecycleState;
@property (getter=isLocked, nonatomic, readonly) bool locked;

+ (id)secureElementAppletWithInternalApplet:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsSubKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned long long)arg2 locked:(bool)arg3 containsSubKeys:(bool)arg4;
- (bool)isLocked;
- (unsigned long long)lifecycleState;

@end
