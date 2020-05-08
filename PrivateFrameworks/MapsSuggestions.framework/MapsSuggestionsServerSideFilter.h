/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsServerSideFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {
    bool  _enabledEntryTypeAppConnection;
    bool  _enabledEntryTypeCalendarEvent;
    bool  _enabledEntryTypeCarPlayLowEnergy;
    bool  _enabledEntryTypeCarRental;
    bool  _enabledEntryTypeFavoritePlace;
    bool  _enabledEntryTypeFrequentLocation;
    bool  _enabledEntryTypeHome;
    bool  _enabledEntryTypeHotel;
    bool  _enabledEntryTypeParkedCar;
    bool  _enabledEntryTypePortrait;
    bool  _enabledEntryTypeRecentHistory;
    bool  _enabledEntryTypeRestaurantReservation;
    bool  _enabledEntryTypeResumeRoute;
    bool  _enabledEntryTypeRidesharing;
    bool  _enabledEntryTypeTicketedEvent;
    bool  _enabledEntryTypeTravelFlight;
    bool  _enabledEntryTypeUnknown;
    bool  _enabledEntryTypeUserPlace;
    bool  _enabledEntryTypeWork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (id)init;
- (bool)shouldKeepEntry:(id)arg1;

@end
