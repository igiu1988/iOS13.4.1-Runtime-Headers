/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSiriShortcut : NSObject <NSSecureCoding> {
    NSString * _associatedAppBundleIdentifier;
    NSString * _identifier;
    NSString * _phrase;
    NSString * _shortcutName;
}

@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *shortcutName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)phrase;
- (void)setAssociatedAppBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPhrase:(id)arg1;
- (void)setShortcutName:(id)arg1;
- (id)shortcutName;

@end
