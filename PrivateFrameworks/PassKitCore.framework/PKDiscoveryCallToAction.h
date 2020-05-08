/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiscoveryCallToAction : NSObject <NSSecureCoding> {
    long long  _action;
    NSDictionary * _actionInfo;
    NSSet * _allowedFeatureIdentifiers;
    PKColor * _backgroundColor;
    NSString * _buttonTextKey;
    long long  _foregroundContentMode;
    bool  _foregroundContentModeIsSet;
    PKDiscoveryMedia * _icon;
    NSString * _localizedButtonText;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    NSString * _referrerIdentifier;
    bool  _roundIcon;
    NSString * _subtitleKey;
    NSString * _titleKey;
    NSString * _transitNetworkIdentifier;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) NSDictionary *actionInfo;
@property (nonatomic, readonly) NSSet *allowedFeatureIdentifiers;
@property (nonatomic, readonly) PKColor *backgroundColor;
@property (nonatomic, readonly) NSString *buttonTextKey;
@property (nonatomic) long long foregroundContentMode;
@property (nonatomic, readonly) PKDiscoveryMedia *icon;
@property (nonatomic, retain) NSString *localizedButtonText;
@property (nonatomic, retain) NSString *localizedSubtitle;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, readonly) long long paymentSetupMode;
@property (nonatomic, readonly) NSString *referrerIdentifier;
@property (getter=shouldRoundIcon, nonatomic) bool roundIcon;
@property (nonatomic, readonly) NSString *subtitleKey;
@property (nonatomic, readonly) NSString *titleKey;
@property (nonatomic, readonly) NSString *transitNetworkIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)actionInfo;
- (id)allowedFeatureIdentifiers;
- (id)backgroundColor;
- (id)buttonTextKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)foregroundContentMode;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;
- (id)localizedButtonText;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (long long)paymentSetupMode;
- (id)referrerIdentifier;
- (void)setForegroundContentMode:(long long)arg1;
- (void)setLocalizedButtonText:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setRoundIcon:(bool)arg1;
- (bool)shouldRoundIcon;
- (id)subtitleKey;
- (id)titleKey;
- (id)transitNetworkIdentifier;

@end
