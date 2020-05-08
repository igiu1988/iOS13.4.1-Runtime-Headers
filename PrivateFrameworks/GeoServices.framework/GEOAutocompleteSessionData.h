/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAutocompleteSessionData : NSObject {
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _analyticsShortSessionId;
    GEOPDAutocompleteSessionData * _autocompleteSessionData;
}

@property (nonatomic, readonly) GEOPDAutocompleteSessionData *autocompleteSessionData;

- (void).cxx_destruct;
- (id)autocompleteSessionData;
- (id)init;
- (id)initWithAutoCompleteSessionData:(id)arg1;
- (id)updateWithAutoCompleteSessionData:(id)arg1;

@end
