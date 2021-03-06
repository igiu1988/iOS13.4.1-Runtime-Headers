/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIActivityUserDefaults : NSObject {
    NSString * _activityDefaultsKey;
    NSUserDefaults * _underlyingUserDefaults;
}

@property (nonatomic, copy) NSString *activityDefaultsKey;
@property (nonatomic, retain) NSUserDefaults *underlyingUserDefaults;

+ (id)builtinActivityOrder;
+ (void)migrateUserDefaultKeyIfNecessary:(id)arg1 hasMigratedKey:(id)arg2 fromUserDefaults:(id)arg3 toUserDefaults:(id)arg4;
+ (void)migrateUserDefaultKeysIfNecessary:(id)arg1 fromUIKitDefaultsToUserDefaults:(id)arg2;
+ (id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg1 someSortedActivityIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (void)_setUserDefaultsDictionary:(id)arg1;
- (id)_userDefaultsDictionary;
- (id)activitiesBySortingActivities:(id)arg1 byIdentifierWithDefaultActivityIdentifierOrdering:(id)arg2;
- (id)activitiesOrderedByUserActivityOrderForActivities:(id)arg1;
- (id)activityDefaultsKey;
- (id)activityIdentifiersInUserOrder;
- (bool)activityIsHidden:(id)arg1;
- (id)applicationExtensionForActivity:(id)arg1;
- (bool)canHideActivity:(id)arg1;
- (id)defaultsValueForKey:(id)arg1 activity:(id)arg2;
- (id)identifierForActivity:(id)arg1;
- (id)initWithUnderlyingUserDefaults:(id)arg1 activityDefaultsKey:(id)arg2;
- (id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg1 activityIdentifierOrdering:(id)arg2;
- (id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg1;
- (void)postActivityUserDefaultsDidChangeNotification;
- (void)removeActivityTypeFromDefaults:(id)arg1;
- (void)replaceUserActivityOrderIfNecessaryWithSystemDefaultOrder:(id)arg1;
- (void)setActivity:(id)arg1 asHidden:(bool)arg2;
- (void)setActivityDefaultsKey:(id)arg1;
- (void)setActivityIdentifiersInUserOrder:(id)arg1;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3;
- (void)setUnderlyingUserDefaults:(id)arg1;
- (id)underlyingUserDefaults;
- (void)updateUserActivityOrderWithOrderedPartialActivities:(id)arg1;

@end
