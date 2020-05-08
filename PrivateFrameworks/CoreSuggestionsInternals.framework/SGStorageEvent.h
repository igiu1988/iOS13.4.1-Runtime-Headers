/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGStorageEvent : NSObject <SGEventForGeocode> {
    NSString * _content;
    struct SGUnixTimestamp_ { 
        double secondsFromUnixEpoch; 
    }  _creationTimestamp;
    bool  _curated;
    SGDuplicateKey * _duplicateKey;
    struct SGUnixTimestamp_ { 
        double secondsFromUnixEpoch; 
    }  _lastModifiedTimestamp;
    NSArray * _locations;
    SGRecordId * _recordId;
    NSString * _sourceKey;
    unsigned int  _state;
    NSData * _structuredData;
    NSSet * _tags;
    NSString * _title;
    SGSimpleTimeRange * _when;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) struct SGUnixTimestamp_ { double x1; } creationTimestamp;
@property (nonatomic, readonly) bool curated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SGDuplicateKey *duplicateKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct SGUnixTimestamp_ { double x1; } lastModifiedTimestamp;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSString *opaqueKey;
@property (nonatomic, readonly) SGRecordId *recordId;
@property (nonatomic, readonly) NSString *sourceKey;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) NSData *structuredData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tags;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) SGSimpleTimeRange *when;

+ (id)storageEventFromEntity:(id)arg1;

- (void).cxx_destruct;
- (id)content;
- (id)convertToEvent:(id)arg1;
- (id)convertToEventWithOrigin:(id)arg1;
- (struct SGUnixTimestamp_ { double x1; })creationTimestamp;
- (bool)curated;
- (id)description;
- (id)duplicateKey;
- (id)extraKeyTag;
- (id)fieldsToSaveOnConfirmation;
- (id)geocodeEndDate;
- (id)geocodeEndTimeZone;
- (id)geocodeLocations;
- (id)geocodeStartDate;
- (id)geocodeStartTimeZone;
- (id)geocodedEventWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 locations:(id)arg5;
- (unsigned long long)geocodingMode;
- (unsigned long long)hash;
- (id)initWithRecordId:(id)arg1 duplicateKey:(id)arg2 sourceKey:(id)arg3 content:(id)arg4 title:(id)arg5 creationTimestamp:(struct SGUnixTimestamp_ { double x1; })arg6 lastModifiedTimestamp:(struct SGUnixTimestamp_ { double x1; })arg7 tags:(id)arg8 when:(id)arg9 locations:(id)arg10 structuredData:(id)arg11 state:(unsigned int)arg12 curated:(bool)arg13;
- (bool)isAllDay;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStorageEvent:(id)arg1;
- (bool)isFromDataDetectors;
- (bool)isFromSuggestions;
- (struct SGUnixTimestamp_ { double x1; })lastModifiedTimestamp;
- (id)locations;
- (id)opaqueKey;
- (id)poiFilters;
- (id)recordId;
- (id)sourceKey;
- (unsigned int)state;
- (id)structuredData;
- (id)tags;
- (id)title;
- (id)urlFromTags;
- (id)when;

@end
