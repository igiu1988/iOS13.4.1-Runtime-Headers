/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPContactSearchEntity : SPSearchEntity {
    CNContact * _contact;
    NSString * _contactIdentifier;
}

@property (retain) NSString *contactIdentifier;

+ (id)contactStore;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4;
- (id)contact;
- (id)contactIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (bool)isPeopleSearch;
- (bool)isScopedAppSearch;
- (id)queryString;
- (void)setContactIdentifier:(id)arg1;
- (id)tokenText;

@end
