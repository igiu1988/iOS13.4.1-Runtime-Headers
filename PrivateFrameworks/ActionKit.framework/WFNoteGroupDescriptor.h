/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFNoteGroupDescriptor : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    unsigned long long  _managedLevel;
    INSpeakableString * _speakableString;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) unsigned long long managedLevel;
@property (nonatomic, readonly) INSpeakableString *speakableString;
@property (nonatomic, readonly) WFDataInfo *targetDataInfo;

+ (unsigned long long)managedLevelForNotesAccounts;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)descriptorWithTargetAccountIdentifier:(id)arg1 targetManagedLevel:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNoteGroupSpeakableString:(id)arg1;
- (id)initWithNoteGroupSpeakableString:(id)arg1 accountIdentifier:(id)arg2 managedLavel:(unsigned long long)arg3;
- (unsigned long long)managedLevel;
- (id)speakableString;
- (id)targetDataInfo;

@end
