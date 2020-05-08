/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactActionProvider : NSObject {
    CNContact * _contact;
    CNContactStore * _contactStore;
    CNContainer * _container;
    CNContactAction * _disableGuardianRestrictionsAction;
    CNContactAction * _enableGuardianRestrictionsAction;
    CNContactAction * _shareWithFamilyAction;
    CNContactAction * _stopSharingWithFamilyAction;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNContainer *container;
@property (nonatomic, readonly) CNContactAction *disableGuardianRestrictionsAction;
@property (nonatomic, readonly) CNContactAction *enableGuardianRestrictionsAction;
@property (nonatomic, readonly) CNContactAction *shareWithFamilyAction;
@property (nonatomic, readonly) CNContactAction *stopSharingWithFamilyAction;

- (void).cxx_destruct;
- (id)contact;
- (id)contactStore;
- (id)container;
- (id)disableGuardianRestrictionsAction;
- (id)enableGuardianRestrictionsAction;
- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3;
- (id)shareWithFamilyAction;
- (id)stopSharingWithFamilyAction;

@end