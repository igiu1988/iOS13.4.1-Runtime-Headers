/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIDraggingContacts : NSObject <NSItemProviderReading, NSItemProviderWriting> {
    CNContactStore * _contactStore;
    NSArray * _draggingContacts;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *draggingContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (bool)canAcceptDropForDropSession:(id)arg1;
+ (id)contactsWithIdentifiers:(id)arg1 store:(id)arg2 keysToFetch:(id)arg3 unifyResults:(bool)arg4 error:(id*)arg5;
+ (id)dragItemForContact:(id)arg1 withContactStore:(id)arg2;
+ (id)draggingContactsForContacts:(id)arg1 contactStore:(id)arg2;
+ (id)draggingContactsWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 contactStore:(id)arg3 error:(id*)arg4;
+ (id)imageForDragging;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (void)provideContactsForDropSession:(id)arg1 withKeys:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)provideVCardURLForDropSession:(id)arg1 completionBlock:(id /* block */)arg2;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)contactStore;
- (id)draggingContacts;
- (id)initWithDraggingContacts:(id)arg1 contactStore:(id)arg2;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)setDraggingContacts:(id)arg1;

@end
