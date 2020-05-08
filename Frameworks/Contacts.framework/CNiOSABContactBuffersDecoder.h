/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContactBuffersDecoder : NSObject {
    NSMutableArray * _contactsWaitingForUnification;
    CNContactBufferDecoder * _decoder;
    CNContactFetchRequest * _fetchRequest;
    NSMutableDictionary * _matchInfosWaitingForUnification;
}

@property (nonatomic, readonly) NSMutableArray *contactsWaitingForUnification;
@property (nonatomic, readonly) CNContactBufferDecoder *decoder;
@property (nonatomic, readonly) CNContactFetchRequest *fetchRequest;
@property (nonatomic, readonly) NSMutableDictionary *matchInfosWaitingForUnification;

- (void).cxx_destruct;
- (void)_addContactMatchInfoFromABMatchInfos:(id)arg1 forContact:(id)arg2 toDictionary:(id)arg3;
- (id)_contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;
- (id)contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;
- (id)contactsFromData:(id)arg1 moreComing:(bool)arg2 error:(id*)arg3;
- (id)contactsWaitingForUnification;
- (id)decoder;
- (id)fetchRequest;
- (id)init;
- (id)initWithFetchRequest:(id)arg1;
- (id)matchInfosWaitingForUnification;
- (id)unifyContacts:(id)arg1 moreComing:(bool)arg2;

@end
