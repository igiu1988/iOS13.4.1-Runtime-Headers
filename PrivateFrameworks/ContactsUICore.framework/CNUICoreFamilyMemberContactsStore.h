/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUICoreFamilyMemberContactsStore : NSObject <CNUICoreFamilyMemberContactsUpdating> {
    FAFamilyMember * _familyMember;
    <CNUICoreContactStoreFacade> * _familyMemberScopedContactStore;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) <CNScheduler> *backgroundOrImmediateScheduler;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) <CNUICoreContactStoreFacade> *familyMemberScopedContactStore;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;

- (void).cxx_destruct;
- (id)backgroundOrImmediateScheduler;
- (id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:(id)arg1;
- (id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:(id)arg1 preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:(bool)arg2;
- (id)familyMember;
- (id)familyMemberScopedContactStore;
- (id)init;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithFamilyMemberScopedContactStoreFacade:(id)arg1 familyMember:(id)arg2 schedulerProvider:(id)arg3;
- (id)schedulerProvider;
- (id)updateContactListByAddingContacts:(id)arg1;
- (id)updateContactListByRemovingContacts:(id)arg1;
- (id)updateContactListByUpdatingContacts:(id)arg1;
- (id)updateContactWhitelistByAddingContacts:(id)arg1;
- (id)updateContactWhitelistByRemovingContacts:(id)arg1;

@end
