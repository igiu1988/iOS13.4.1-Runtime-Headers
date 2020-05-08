/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGFlightData : NSObject {
    SGOffsetDictionary * _airportDataOffsets;
    SGOffsetDictionary * _airportUpdateDataOffsets;
    <SGSeekable> * _airportsFh;
    <SGSeekable> * _airportsUpdateFh;
    _PASNotificationToken * _assetUpdateToken;
    NSDictionary * _carrierCodesByName;
    NSDictionary * _carrierNames;
    NSDictionary * _carrierUpdateCodesByName;
    NSDictionary * _carrierUpdateNames;
    SGOffsetDictionary * _flightDataOffsets;
    SGOffsetDictionary * _flightUpdateDataOffsets;
    <SGSeekable> * _flightsFh;
    <SGSeekable> * _flightsUpdateFh;
}

+ (id)airportNameNoiseKeywords;
+ (id)sanitizeAirportName:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)airportCodeForAirportName:(id)arg1 flightCarrier:(id)arg2 flightNumber:(unsigned short)arg3 otherKnownFlightsToAirport:(id)arg4 outputInfos:(id)arg5;
- (id)airportCodeForAirportName:(id)arg1 flightCarrier:(id)arg2 flightNumber:(unsigned short)arg3 outputInfos:(id)arg4;
- (id)airportIataCodes;
- (id)airportIataCodesForDataOffset:(id)arg1;
- (id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2;
- (id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2 withDataOffset:(id)arg3 andFileHandle:(id)arg4;
- (id)bestLocalizedNameForAirport:(id)arg1;
- (id)carrierIataCodeForCarrierName:(id)arg1;
- (id)carrierIataCodes;
- (void)dealloc;
- (id)init;
- (id)latitudeAndLongitudeForAirport:(id)arg1;
- (id)latitudeAndLongitudeForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (id)nameForCarrier:(id)arg1;
- (id)namesForAirport:(id)arg1;
- (id)namesForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (id)timezoneOlsonCodeForAirport:(id)arg1;
- (id)timezoneOlsonCodeForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (void)updateAirports;
- (void)updateCarriers;
- (void)updateFlights;

@end
