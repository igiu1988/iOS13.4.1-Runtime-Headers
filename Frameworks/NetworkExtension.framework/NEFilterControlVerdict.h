/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSCopying, NSSecureCoding> {
    bool  _handledByDataProvider;
    bool  _updateRules;
}

@property bool handledByDataProvider;
@property bool updateRules;

+ (id)allowVerdictWithUpdateRules:(bool)arg1;
+ (id)dropVerdictWithUpdateRules:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (id)updateRules;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)filterAction;
- (bool)handledByDataProvider;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setHandledByDataProvider:(bool)arg1;
- (void)setUpdateRules:(bool)arg1;
- (bool)updateRules;

@end