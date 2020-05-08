/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (void)initialize;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)activeSectionInfo;
- (id)allEffectiveSectionInfo;
- (id)allSectionIDs;
- (id)allSectionInfo;
- (void)dealloc;
- (long long)effectiveGlobalContentPreviewsSetting;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)effectiveSectionInfoForSectionIDs:(id)arg1;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)arg1;
- (void)getEffectiveSectionInfoForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)arg1;
- (void)getSectionInfoForSectionID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getSectionInfoWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (id)sectionInfoForSectionID:(id)arg1;
- (id)sectionInfoForSectionIDs:(id)arg1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)updateSectionInfoForSectionID:(id)arg1 withHandler:(id /* block */)arg2;

@end
