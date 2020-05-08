/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagSettings : NSObject {
    <FCTagSettingsDelegate> * _delegate;
    FCKeyValueStore * _localStore;
    NSMutableDictionary * _tagSettingsEntriesByTagID;
}

@property (nonatomic) <FCTagSettingsDelegate> *delegate;
@property (nonatomic, retain) FCKeyValueStore *localStore;
@property (nonatomic, retain) NSMutableDictionary *tagSettingsEntriesByTagID;

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;

- (void).cxx_destruct;
- (id)accessTokenForTagID:(id)arg1;
- (id)allTagSettingsRecordNames;
- (id)allTagSettingsRecords;
- (id)authenticatedAccessTokensByTagID;
- (id)contentScaleForTagID:(id)arg1;
- (id)delegate;
- (id)fontSizeForTagID:(id)arg1;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)arg1;
- (void)handleSyncWithTagSettingsRecord:(id)arg1;
- (id)initWithStore:(id)arg1 tagSettingsDelegate:(id)arg2;
- (void)loadLocalCachesFromStore;
- (id)localStore;
- (void)setAccessTokenForTagID:(id)arg1 accessToken:(id)arg2 userInitiated:(bool)arg3;
- (void)setContentScaleForTagID:(id)arg1 contentScale:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFontSizeForTagID:(id)arg1 fontSize:(id)arg2;
- (void)setLocalStore:(id)arg1;
- (void)setTagSettingsEntriesByTagID:(id)arg1;
- (void)setWebAccessOptInForTagID:(id)arg1 webAccessOptIn:(bool)arg2;
- (void)syncForTagID:(id)arg1;
- (id)tagSettingsEntriesByTagID;
- (id)webAccessOptedInTagIDs;

@end
