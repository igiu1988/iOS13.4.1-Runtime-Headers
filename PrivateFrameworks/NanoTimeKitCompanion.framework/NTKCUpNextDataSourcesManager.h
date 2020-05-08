/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCUpNextDataSourcesManager : NSObject {
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSArray * _firstPartyDataSourceEntries;
    <NTKCUpNextDataSourcesManagerIdentifiersDelegate> * _firstPartyIdentifiersDelegate;
    RERelevanceEngine * _relevanceEngine;
    NSArray * _sportsDataSourceEntries;
    <NTKCUpNextDataSourcesManagerIdentifiersDelegate> * _sportsIdentifiersDelegate;
    NSArray * _thirdPartyDataSourceEntries;
    <NTKCUpNextDataSourcesManagerIdentifiersDelegate> * _thirdPartyIdentifiersDelegate;
    unsigned int  _watchVersion;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *fetchQueue;
@property (copy) NSArray *firstPartyDataSourceEntries;
@property (nonatomic) <NTKCUpNextDataSourcesManagerIdentifiersDelegate> *firstPartyIdentifiersDelegate;
@property (copy) NSArray *sportsDataSourceEntries;
@property (nonatomic) <NTKCUpNextDataSourcesManagerIdentifiersDelegate> *sportsIdentifiersDelegate;
@property (copy) NSArray *thirdPartyDataSourceEntries;
@property (nonatomic) <NTKCUpNextDataSourcesManagerIdentifiersDelegate> *thirdPartyIdentifiersDelegate;
@property (nonatomic, readonly) unsigned int watchVersion;

- (void).cxx_destruct;
- (void)_appsChangedNotification:(id)arg1;
- (void)_buildRows;
- (void)_dataSourcesChangedNotification:(id)arg1;
- (id)_dedupeAndSortFirstPartyDataSourcesFromIdentifiers:(id)arg1;
- (void)_dedupeAndSortThirdPartyDataSourcesFromIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchThirdPartyBundleIdentifiersWithCompletion:(id /* block */)arg1;
- (id)_firstPartyDataSourceEntries;
- (bool)_isNanoWeatherAppID:(id)arg1;
- (void)_phoneDedupeFromIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)_preGraceThirdPartyBundleIdentifiers;
- (void)dealloc;
- (void)fetchIdentifiers;
- (id)fetchQueue;
- (id)firstPartyDataSourceEntries;
- (id)firstPartyIdentifiersDelegate;
- (id)initWatchVersion:(unsigned int)arg1;
- (void)setFirstPartyDataSourceEntries:(id)arg1;
- (void)setFirstPartyIdentifiersDelegate:(id)arg1;
- (void)setSportsDataSourceEntries:(id)arg1;
- (void)setSportsIdentifiersDelegate:(id)arg1;
- (void)setThirdPartyDataSourceEntries:(id)arg1;
- (void)setThirdPartyIdentifiersDelegate:(id)arg1;
- (id)sportsDataSourceEntries;
- (id)sportsIdentifiersDelegate;
- (id)thirdPartyDataSourceEntries;
- (id)thirdPartyIdentifiersDelegate;
- (unsigned int)watchVersion;

@end
