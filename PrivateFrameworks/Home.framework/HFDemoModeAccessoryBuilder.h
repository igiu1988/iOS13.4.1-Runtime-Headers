/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDemoModeAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder> {
    HFNamingComponents * _namingComponent;
    bool  isFavorite;
    NSString * name;
    HFRoomBuilder * room;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) NSArray *availableIconDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) bool isFavorite;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HFNamingComponents *namingComponent;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, retain) HFRoomBuilder *room;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFavoriting;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_lazilyUpdateFavorite;
- (id)_lazilyUpdateName;
- (id)_lazilyUpdateRoom;
- (id)_performValidation;
- (id)accessories;
- (id)accessory;
- (id)commitItem;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isFavorite;
- (id)name;
- (id)namingComponent;
- (id)originalName;
- (id)removeItemFromHome;
- (id)room;
- (void)setIsFavorite:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNamingComponent:(id)arg1;
- (void)setRoom:(id)arg1;
- (bool)supportsFavoriting;

@end
