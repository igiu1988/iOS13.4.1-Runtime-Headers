/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserItem : HFItem <HFHomeKitItemProtocol, HFHomeKitSettingsVendor, NSCopying> {
    HMHome * _hf_home;
    HMHome * _home;
    bool  _isContainedWithinItemGroup;
    bool  _isItemGroup;
    unsigned long long  _numberOfItemsContainedWithinGroup;
    NSUUID * _uniqueIdentifier;
    HMUser * _user;
    HFUserNameFormatter * _userNameFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasValidSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property (nonatomic, retain) HMHome *hf_home;
@property (nonatomic, readonly) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property (nonatomic, readonly) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) bool isContainedWithinItemGroup;
@property (nonatomic, readonly) bool isItemGroup;
@property (nonatomic, readonly) unsigned long long nameStyle;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly) HMSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, readonly) HFUserNameFormatter *userNameFormatter;

+ (id)_fakeHMSettings;
+ (void)set_fakeHMSettings:(id)arg1;

- (void).cxx_destruct;
- (bool)_getBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(bool)arg2 settingsType:(unsigned long long)arg3;
- (bool)_getFakeBoolSettingsValueForKeyPath:(id)arg1 defaultValue:(bool)arg2;
- (bool)_hasValidPrivateSettings;
- (id)_privateSettings;
- (id)_privateSettingsValueManager;
- (id)_setBoolSettingsValueForKeyPath:(id)arg1 newValue:(bool)arg2 settingsType:(unsigned long long)arg3;
- (void)_setFakeBoolSettingsValueForKeyPath:(id)arg1 newValue:(bool)arg2;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasDismissedCameraRecordingOnboarding;
- (bool)hasDismissedCameraRecordingReminderBanner;
- (bool)hasDismissedIdentifyVoiceReminderBanner;
- (bool)hasDismissedTVViewingProfilesOnboarding;
- (bool)hasDismissedTVViewingProfilesReminderBanner;
- (bool)hasDismissedUserSplitMediaAccountWarning;
- (bool)hasDismissedVoiceProfileOnboarding;
- (bool)hasValidSettings;
- (id)hf_dependentHomeKitObjectsForDownstreamItems;
- (id)hf_home;
- (id)hf_settingsAdapterManager;
- (id)hf_settingsValueManager;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 user:(id)arg2 nameStyle:(unsigned long long)arg3;
- (bool)isContainedWithinItemGroup;
- (bool)isIdentifyVoiceEnabled;
- (bool)isItemGroup;
- (bool)isPlaybackInfluencesForYouEnabled;
- (unsigned long long)nameStyle;
- (unsigned long long)numberOfItemsContainedWithinGroup;
- (id)setDismissCameraRecordingOnboarding:(bool)arg1;
- (id)setDismissCameraRecordingReminderBanner:(bool)arg1;
- (id)setDismissIdentifyVoiceOnboarding:(bool)arg1;
- (id)setDismissIdentifyVoiceReminderBanner:(bool)arg1;
- (id)setDismissTVViewingProfilesOnboarding:(bool)arg1;
- (id)setDismissTVViewingProfilesReminderBanner:(bool)arg1;
- (id)setDismissUserSplitMediaAccountWarning:(bool)arg1;
- (id)setEnableIdentifyVoice:(bool)arg1;
- (void)setHf_home:(id)arg1;
- (id)setPlaybackInfluencesForYou:(bool)arg1;
- (id)settings;
- (id)uniqueIdentifier;
- (id)user;
- (id)userNameFormatter;

@end
