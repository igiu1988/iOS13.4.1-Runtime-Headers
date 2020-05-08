/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate> {
    NSMutableDictionary * _dataDictionary;
    bool  _hasFailedFetchingProfilesInfo;
    bool  _hasFetchedProfilesInfo;
    NSSManager * _nssManager;
    UIImage * _profileListIcon;
    int  _provisioningProfileInstalledToken;
    int  _provisioningProfileRemovedToken;
}

@property (nonatomic, retain) NSMutableDictionary *dataDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasFailedFetchingProfilesInfo;
@property (nonatomic) bool hasFetchedProfilesInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSManager *nssManager;
@property (nonatomic, retain) UIImage *profileListIcon;
@property (nonatomic) int provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken;
@property (readonly) Class superclass;

+ (id)specifiersForBlockedApps:(id)arg1;

- (void).cxx_destruct;
- (void)_appSignerApplicationsChanged:(id)arg1;
- (void)_blockedAppsChanged:(id)arg1;
- (id)_dataForIndexPath:(id)arg1;
- (void)_fetchPhoneProfileList;
- (void)_handleProfileCellSelectionAtIndexPath:(id)arg1;
- (void)_hideProgressIndicatorAndShowBackButton:(bool)arg1;
- (void)_installedApplicationsChanged:(id)arg1;
- (bool)_isSectionPopulated:(int)arg1;
- (bool)_isUIProfileInstallationRestricted;
- (void)_profileListChanged:(id)arg1;
- (long long)_profilesCount;
- (int)_resolveIndexPathForSection:(id)arg1;
- (bool)_showProfileDetailPageForUserEnrollmentProfile:(id)arg1;
- (void)_showProgressIndicator;
- (id)_specifiersForDataDictionary;
- (id)dataDictionary;
- (void)dealloc;
- (void)fetchRemoteProfileList;
- (void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2;
- (bool)hasFailedFetchingProfilesInfo;
- (bool)hasFetchedProfilesInfo;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)nssManager;
- (id)profileListIcon;
- (int)provisioningProfileInstalledToken;
- (int)provisioningProfileRemovedToken;
- (void)setDataDictionary:(id)arg1;
- (void)setHasFailedFetchingProfilesInfo:(bool)arg1;
- (void)setHasFetchedProfilesInfo:(bool)arg1;
- (void)setNssManager:(id)arg1;
- (void)setProfileListIcon:(id)arg1;
- (void)setProvisioningProfileInstalledToken:(int)arg1;
- (void)setProvisioningProfileRemovedToken:(int)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
