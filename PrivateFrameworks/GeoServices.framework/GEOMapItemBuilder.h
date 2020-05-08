/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemBuilder : NSObject {
    GEOAddress * _address;
    struct { 
        unsigned int referenceFrame : 1; 
    }  _has;
    GEOLatLng * _latlng;
    GEOLocation * _location;
    GEOMapRegion * _mapRegion;
    NSString * _name;
    int  _referenceFrame;
}

@property (nonatomic, retain) GEOAddress *address;
@property (nonatomic, retain) GEOLatLng *latlng;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int referenceFrame;

+ (id)buildWithSetterBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)address;
- (id)build;
- (id)init;
- (id)latlng;
- (id)location;
- (id)mapRegion;
- (id)name;
- (int)referenceFrame;
- (void)setAddress:(id)arg1;
- (void)setLatlng:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReferenceFrame:(int)arg1;

@end
