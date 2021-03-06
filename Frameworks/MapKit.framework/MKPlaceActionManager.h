/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol> {
    MKPlaceCardActionItem * _brandStoreActionItem;
    MKPlaceCardActionItem * _callActionItem;
    TUCallProvider * _callProvider;
    MKPlaceCardActionItem * _collectionActionItem;
    MKPlaceCardActionItem * _favoriteActionItem;
    MKPlaceCardActionItem * _homeActionItem;
    bool  _isCurrentLocation;
    id  _placeCardDelegate;
    bool  _placeInBookmarks;
    bool  _placeInShortcuts;
    bool  _showContactActions;
    id  _transitCardDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCurrentLocation;
@property (nonatomic) id placeCardDelegate;
@property (nonatomic) bool placeInBookmarks;
@property (nonatomic) bool placeInShortcuts;
@property (nonatomic) bool showContactActions;
@property (readonly) Class superclass;
@property (nonatomic) id transitCardDelegate;

- (void).cxx_destruct;
- (void)_canMakeCalls:(id /* block */)arg1;
- (void)_enableStoreAction;
- (bool)_isCurrentLocationOrDroppedPin;
- (void)_launchMaps;
- (bool)_showAddPlaceEdit;
- (bool)_showCollectionItem;
- (bool)_showHomeShortcutItem;
- (bool)_showMapItemIdentifier;
- (bool)_showReportAProblem;
- (bool)_showSuggestAnEdit;
- (void)addLayoutInfoIfNeeded:(id)arg1;
- (id)addtoHomeItem;
- (id)collectionItemForFooter:(bool)arg1;
- (id)contact;
- (id)createFooterActions;
- (id)createRowActions;
- (id)delegate;
- (id)favoriteItemForFooter;
- (id)init;
- (bool)isCurrentLocation;
- (id)mapItem;
- (void)openURL:(id)arg1;
- (unsigned long long)options;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)placeCardDelegate;
- (bool)placeInBookmarks;
- (bool)placeInShortcuts;
- (id)placeItem;
- (id)reportAProblemAddPlaceFooterAction;
- (id)reportAProblemFooterAction;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setPlaceCardDelegate:(id)arg1;
- (void)setPlaceInBookmarks:(bool)arg1;
- (void)setPlaceInShortcuts:(bool)arg1;
- (void)setShowContactActions:(bool)arg1;
- (void)setTransitCardDelegate:(id)arg1;
- (id)shortPlacecardFooterActions;
- (bool)showContactActions;
- (id)transitCardDelegate;
- (id)transitDelegate;
- (id)transitLineItem;

@end
