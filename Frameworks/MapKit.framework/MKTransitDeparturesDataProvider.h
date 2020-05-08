/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDeparturesDataProvider : NSObject <MKTransitMapItemUpdaterDelegate> {
    bool  _active;
    NSMapTable * _cachedDirectionsForSystem;
    NSMutableDictionary * _cachedSequencesForSection;
    NSMapTable * _cachedSystemHasInactiveLines;
    <MKTransitDeparturesDataProviderDelegate> * _delegate;
    NSDate * _departureCutoffDate;
    NSSet * _disabledSections;
    NSMutableSet * _hiddenSections;
    MKTransitItemIncidentsController * _incidentsController;
    NSDate * _lastCutoffDateWithValidSchedule;
    long long  _lastFailureDiagnosis;
    NSDate * _lastInfoRefreshDate;
    NSString * _lastInfoRefreshErrorDescription;
    MKMapItem * _mapItem;
    MKTransitMapItemUpdater * _mapItemUpdater;
    NSMutableSet * _pagedSectionIdentifiers;
    bool  _refreshing;
    NSMutableDictionary * _sectionControllers;
    NSMutableArray * _sections;
    bool  _supportSystemSectionCollapsing;
    bool  _wantsSystemSectionCollapsing;
}

@property (getter=isActive, nonatomic) bool active;
@property (getter=allowsSystemSectionCollapsing, nonatomic, readonly) bool allowsSystemSectionCollapsing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKTransitDeparturesDataProviderDelegate> *delegate;
@property (nonatomic, retain) NSDate *departureCutoffDate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *disabledSections;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) bool isStuckWithExpiredInfo;
@property (nonatomic, retain) NSDate *lastCutoffDateWithValidSchedule;
@property (nonatomic, readonly) NSDate *lastInfoRefreshDate;
@property (nonatomic, readonly, copy) NSString *lastInfoRefreshErrorDescription;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (getter=isRefreshing, nonatomic, readonly) bool refreshing;
@property (nonatomic, readonly) NSArray *sectionControllers;
@property (readonly) Class superclass;
@property (getter=supportsSystemSectionCollapsing, nonatomic) bool supportSystemSectionCollapsing;
@property (nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;

- (void).cxx_destruct;
- (id)_blockedIncidentEntities;
- (id)_controllerForSection:(long long)arg1;
- (id)_departureCutoffDateForLine:(id)arg1;
- (id)_departureCutoffDateForSequence:(id)arg1;
- (id)_departureSequencesForSection:(long long)arg1;
- (id)_directionsForSystem:(id)arg1 hasSequencesWithNoDirection:(out bool*)arg2;
- (bool)_hasConnectionsSection;
- (bool)_hasIncidentsSection;
- (bool)_hasPlaceCardMessageSection;
- (id)_identifierForSection:(long long)arg1;
- (id)_identifierForSequence:(id)arg1;
- (id)_identifierForSystem:(id)arg1;
- (id)_inactiveLinesControllerForSection:(long long)arg1;
- (id)_inactiveLinesForSystem:(id)arg1;
- (id)_indexSetForHidingShowingSystem:(id)arg1;
- (bool)_isSectionTypeEnabled:(long long)arg1;
- (long long)_numberOfDeparturesSectionsForSystem:(id)arg1;
- (long long)_sectionForIdentifier:(id)arg1;
- (id)_systemForSection:(long long)arg1 directionIndex:(out long long*)arg2;
- (bool)_systemHasInactiveLines:(id)arg1;
- (bool)_systemHasIncidents:(id)arg1;
- (void)_updateRefreshFailureErrorDescription;
- (bool)allowsSystemSectionCollapsing;
- (id)delegate;
- (id)departureCutoffDate;
- (long long)departureSequenceFrequencyTypeForSection:(long long)arg1;
- (id)departuresControllerForSection:(long long)arg1;
- (id)directionForSection:(long long)arg1;
- (id)disabledSections;
- (id)dominantIncidentForDepartureSequence:(id)arg1;
- (void)hideDeparturesForSystem:(id)arg1 removedIndices:(out id*)arg2;
- (id)identifierForSection:(long long)arg1;
- (id)inactiveLinesForSection:(long long)arg1;
- (id)incidents;
- (id)incidentsForIncidentsSection;
- (id)incidentsForSystem:(id)arg1;
- (long long)indexOfFirstSectionWithType:(long long)arg1;
- (id)initWithMapItem:(id)arg1;
- (bool)isActive;
- (bool)isHidingDeparturesForSystem:(id)arg1;
- (bool)isLastSectionForSystem:(id)arg1;
- (bool)isRefreshing;
- (bool)isStuckWithExpiredInfo;
- (id)lastCutoffDateWithValidSchedule;
- (id)lastInfoRefreshDate;
- (id)lastInfoRefreshErrorDescription;
- (id)mapItem;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)possibleActions;
- (void)refreshSections;
- (void)reloadData;
- (id)sectionControllerForSection:(long long)arg1;
- (id)sectionControllers;
- (long long)sectionForIdentifier:(id)arg1;
- (long long)sectionTypeAtIndex:(long long)arg1;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepartureCutoffDate:(id)arg1;
- (void)setDisabledSections:(id)arg1;
- (void)setLastCutoffDateWithValidSchedule:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setSupportSystemSectionCollapsing:(bool)arg1;
- (void)showDeparturesForSystem:(id)arg1 insertedIndices:(out id*)arg2;
- (void)showNextPageInSection:(long long)arg1;
- (bool)supportsSystemSectionCollapsing;
- (id)systemForSection:(long long)arg1;
- (id)ticketForTransitMapItemUpdater:(id)arg1;
- (id)transitInfo;
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;
- (void)transitMapItemUpdater:(id)arg1 updatedMapItem:(id)arg2 error:(id)arg3;
- (void)transitMapItemUpdater:(id)arg1 willUpdateMapItem:(id)arg2;

@end
