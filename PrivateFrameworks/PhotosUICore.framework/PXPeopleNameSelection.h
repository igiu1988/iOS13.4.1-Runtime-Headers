/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleNameSelection : NSObject {
    CNContact * _contact;
    NSString * _name;
    <PXPerson> * _person;
    unsigned long long  _selectionType;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) <PXPerson> *person;
@property (nonatomic, readonly) unsigned long long selectionType;

- (void).cxx_destruct;
- (id)contact;
- (id)initWithContact:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 contact:(id)arg2 person:(id)arg3 type:(unsigned long long)arg4;
- (id)initWithSelectedPerson:(id)arg1;
- (id)localizedName;
- (id)name;
- (id)person;
- (unsigned long long)selectionType;
- (void)setLinkedPerson:(id)arg1;

@end
