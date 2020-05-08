/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentShareParticipant : PHObject {
    NSString * _emailAddress;
    NSPersonNameComponents * _nameComponents;
    NSString * _phoneNumber;
    unsigned short  _type;
}

@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly) unsigned short type;

+ (id)entityKeyMap;
+ (id)fetchParticipantsInMomentShare:(id)arg1 options:(id)arg2;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (void)queryParticipantsWithEmails:(id)arg1 phoneNumbers:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)emailAddress;
- (unsigned long long)hash;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)nameComponents;
- (id)phoneNumber;
- (unsigned short)type;

@end
