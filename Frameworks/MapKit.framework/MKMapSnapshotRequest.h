/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotRequest : NSObject {
    NSString * _attributionString;
    id  _context;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    MKMapSnapshotCreator * _delegate;
    UIImage * _image;
    id  _requester;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    VKMapSnapshotCreator * _snapshotCreator;
    unsigned long long  _zoomLevel;
}

@property (nonatomic, retain) NSString *attributionString;
@property (nonatomic, retain) id context;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic) MKMapSnapshotCreator *delegate;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) id requester;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) unsigned long long zoomLevel;

- (void).cxx_destruct;
- (id)attributionString;
- (void)cancel;
- (id)context;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)delegate;
- (id)description;
- (id)image;
- (id)requester;
- (void)setAttributionString:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setZoomLevel:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)start;
- (unsigned long long)zoomLevel;

@end
