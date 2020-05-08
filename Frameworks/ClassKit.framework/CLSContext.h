/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSContext : CLSObject <CLSRelationable> {
    bool  _active;
    long long  _authorizationStatus;
    NSString * _contentStoreIdentifier;
    NSString * _currentActivityID;
    NSString * _customTypeName;
    long long  _displayOrder;
    NSString * _identifier;
    NSArray * _path;
    NSString * _stableObjectID;
    NSString * _storeIdentifier;
    NSString * _storeTeamID;
    NSString * _summary;
    NSString * _title;
    NSString * _topic;
    long long  _type;
    NSURL * _universalLinkURL;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic, copy) NSString *contentStoreIdentifier;
@property (nonatomic, readonly) CLSActivity *currentActivity;
@property (nonatomic, copy) NSString *currentActivityID;
@property (nonatomic, copy) NSString *customTypeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *identifierPath;
@property (nonatomic, copy) NSArray *path;
@property (nonatomic, copy) NSString *stableObjectID;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (nonatomic, copy) NSString *storeTeamID;
@property (nonatomic, copy) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic) struct CGImage { }*thumbnail;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSURL *universalLinkURL;

+ (id)allowedTopics;
+ (id)arrayOfStringClasses;
+ (bool)conformsToProtocol:(id)arg1;
+ (id)objectIDForIdentifierPath:(id)arg1;
+ (id)objectIDPathFromIdentifierPath:(id)arg1;
+ (id)relations;
+ (id)reservedContextTypes;
+ (id)stableObjectIDForIdentifierPath:(id)arg1;
+ (id)stableObjectIDPathFromIdentifierPath:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)validatedContextIdentifierPathFromPath:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (void)_setType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)addChildContext:(id)arg1;
- (long long)authorizationStatus;
- (void)becomeActive;
- (id)childContextWithIdentifier:(id)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (id)contentStoreIdentifier;
- (id)createNewActivity;
- (id)currentActivity;
- (id)currentActivityID;
- (id)customTypeName;
- (void)descendantMatchingIdentifierPath:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)displayOrder;
- (long long)effectiveAuthorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)identifierPath;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (bool)isActive;
- (void)mergeWithObject:(id)arg1;
- (id)newItemProvider;
- (id)path;
- (void)removeFromParent;
- (void)resignActive;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setContentStoreIdentifier:(id)arg1;
- (void)setCurrentActivityID:(id)arg1;
- (void)setCustomTypeName:(id)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifierPathAndGenerateObjectID:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStableObjectID:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStoreTeamID:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setThumbnail:(struct CGImage { }*)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUniversalLinkURL:(id)arg1;
- (id)stableObjectID;
- (id)storeIdentifier;
- (id)storeTeamID;
- (id)summary;
- (struct CGImage { }*)thumbnail;
- (id)thumbnailBlob;
- (id)title;
- (id)topic;
- (long long)type;
- (id)universalLinkURL;
- (bool)validateObject:(id*)arg1;

@end
