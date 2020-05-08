/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchEntity : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _hasWords;
}

@property (retain) NSString *bundleIdentifier;
@property bool hasWords;
@property (readonly) bool isPeopleSearch;
@property (readonly) bool isScopedAppSearch;
@property (readonly) NSString *queryString;
@property (readonly) NSString *tokenText;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasWords;
- (id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;
- (bool)isPeopleSearch;
- (bool)isScopedAppSearch;
- (id)queryString;
- (void)setBundleIdentifier:(id)arg1;
- (void)setHasWords:(bool)arg1;
- (id)tokenText;

@end
