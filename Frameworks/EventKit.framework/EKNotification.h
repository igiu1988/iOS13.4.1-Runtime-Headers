/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKNotification : EKObject

@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, copy) NSURL *hostURL;
@property (nonatomic, readonly) EKObjectID *objectID;

+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;

- (id)UUID;
- (id)calendar;
- (bool)commit:(id*)arg1;
- (id)externalID;
- (id)externalModificationTag;
- (id)hostURL;
- (id)objectID;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setHostURL:(id)arg1;
- (void)setUUID:(id)arg1;

@end