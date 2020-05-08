/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFGalleryCollection : NSObject <NSMutableCopying, WFCloudKitItem, WFSortableGalleryObject> {
    CKRecordID * _base;
    NSString * _collectionDescription;
    CKRecordID * _identifier;
    NSString * _language;
    NSDate * _modifiedAt;
    NSString * _name;
    NSString * _persistentIdentifier;
    NSArray * _workflows;
}

@property (nonatomic, readonly) CKRecordID *base;
@property (nonatomic, readonly) NSString *collectionDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSDate *modifiedAt;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *workflows;

+ (id)properties;
+ (id)recordType;

- (void).cxx_destruct;
- (id)base;
- (id)collectionDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)modifiedAt;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)persistentIdentifier;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (id)workflows;

@end
