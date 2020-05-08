/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMessage : NSObject <NSCopying, NSSecureCoding, SGSpotlightIdentifiers> {
    NSArray * _accountHandles;
    NSString * _accountType;
    NSArray * _attachments;
    NSString * _bundleIdentifier;
    NSDate * _date;
    NSString * _domainIdentifier;
    bool  _isSent;
    bool  _isStoredEncrypted;
    NSString * _subject;
    NSString * _textContent;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSArray *accountHandles;
@property (nonatomic, copy) NSString *accountType;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSent;
@property (nonatomic) bool isStoredEncrypted;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContent;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)fromDictionary:(id)arg1;
+ (id)messageWithSearchableItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandles;
- (id)accountType;
- (id)asDictionary;
- (id)attachments;
- (id)bundleIdentifier;
- (unsigned long long)contentLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (bool)isEqualToMessage:(id)arg1;
- (bool)isSent;
- (bool)isStoredEncrypted;
- (void)setAccountHandles:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setIsSent:(bool)arg1;
- (void)setIsStoredEncrypted:(bool)arg1;
- (void)setSubject:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;
- (id)spotlightReference;
- (id)spotlightUniqueIdentifier;
- (id)subject;
- (id)textContent;
- (id)uniqueIdentifier;

@end
