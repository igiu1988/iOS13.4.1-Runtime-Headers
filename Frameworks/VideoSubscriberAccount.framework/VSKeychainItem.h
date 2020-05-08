/* Generated by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSKeychainItem : NSObject {
    NSMutableDictionary * _committedValues;
    bool  _deleted;
    VSKeychainEditingContext * _editingContext;
    bool  _hasFaultForData;
    bool  _inserted;
    VSKeychainItemKind * _itemKind;
    NSMutableDictionary * _primitiveValues;
    bool  _updated;
}

@property (nonatomic, retain) NSMutableDictionary *committedValues;
@property (nonatomic, copy) NSData *data;
@property (getter=isDeleted, nonatomic) bool deleted;
@property (nonatomic) VSKeychainEditingContext *editingContext;
@property (nonatomic, readonly) bool hasChanges;
@property (nonatomic) bool hasFaultForData;
@property (nonatomic, readonly) bool hasPersistentChangedValues;
@property (getter=isInserted, nonatomic) bool inserted;
@property (nonatomic, readonly, copy) VSKeychainItemKind *itemKind;
@property (nonatomic, retain) NSMutableDictionary *primitiveValues;
@property (getter=isUpdated, nonatomic) bool updated;

- (void).cxx_destruct;
- (void)_setCommittedValues:(id)arg1 registeringUndo:(bool)arg2;
- (id)changedValues;
- (id)committedValueForKey:(id)arg1;
- (id)committedValues;
- (id)committedValuesForKeys:(id)arg1;
- (id)data;
- (id)description;
- (void)didAccessValueForKey:(id)arg1;
- (id)editingContext;
- (bool)hasChanges;
- (bool)hasFaultForData;
- (bool)hasPersistentChangedValues;
- (id)init;
- (id)initWithItemKind:(id)arg1 insertIntoEditingContext:(id)arg2;
- (bool)isDeleted;
- (bool)isInserted;
- (bool)isUpdated;
- (id)itemKind;
- (id)primitiveValueForKey:(id)arg1;
- (id)primitiveValues;
- (void)setCommittedValues:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setEditingContext:(id)arg1;
- (void)setHasFaultForData:(bool)arg1;
- (void)setInserted:(bool)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)setPrimitiveValues:(id)arg1;
- (void)setUpdated:(bool)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;

@end
