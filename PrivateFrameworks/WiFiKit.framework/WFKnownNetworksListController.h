/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFKnownNetworksListController : NSObject <WFKnownNetworksViewControllerDelegate> {
    WFKnownNetworkStore * _knownNetworkStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFKnownNetworkStore *knownNetworkStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getDateAddedForNetwork:(id)arg1;
- (id)getDateLastJoinedForNetwork:(id)arg1;
- (id)getGeoTagsForNetwork:(id)arg1;
- (id)getKnownNetworksList;
- (id)getPasswordForNetwork:(id)arg1;
- (id)getScoreForNetwork:(id)arg1;
- (id)getSecurityTypeStringForNetwork:(id)arg1;
- (id)initWithKnownNetworkStore:(id)arg1;
- (bool)isNetworkBlacklisted:(id)arg1;
- (bool)isNetworkHidden:(id)arg1;
- (id)knownNetworkStore;
- (void)pushKnownNetworksOnParentViewController:(id)arg1;
- (void)removeKnownNetworkWithSsid:(id)arg1;
- (void)setKnownNetworkStore:(id)arg1;

@end
