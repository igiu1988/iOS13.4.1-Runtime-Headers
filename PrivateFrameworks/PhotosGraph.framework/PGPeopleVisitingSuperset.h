/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPeopleVisitingSuperset : NSObject {
    PGGraphAddressNode * _addressNode;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinates;
    PGPeopleVisitingVisit * _currentVisit;
    NSDateInterval * _localDateInterval;
    unsigned long long  _numberOfMatchingMoments;
    NSCountedSet * _numberOfMomentsByDistance;
    unsigned long long  _totalNumberOfMoments;
    NSMutableArray * _visits;
}

@property (readonly) PGGraphAddressNode *addressNode;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinates;
@property (readonly) NSDateInterval *localDateInterval;
@property (readonly) double lowerCloseRatio;
@property (readonly) double lowerFarRatio;
@property (readonly) double lowerVeryFarRatio;
@property (readonly) unsigned long long numberOfMatchingMoments;
@property (readonly) unsigned long long totalNumberOfMoments;
@property (readonly) double upperCloseRatio;
@property (readonly) double upperFarRatio;
@property (readonly) double upperVeryFarRatio;
@property (readonly) NSArray *visits;

- (void).cxx_destruct;
- (id)addressNode;
- (void)closeVisitFindingSession;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinates;
- (id)description;
- (id)initWithAddressNode:(id)arg1 localDateInterval:(id)arg2;
- (id)localDateInterval;
- (double)lowerCloseRatio;
- (double)lowerFarRatio;
- (double)lowerVeryFarRatio;
- (unsigned long long)numberOfMatchingMoments;
- (void)registerMomentNode:(id)arg1 distance:(unsigned long long)arg2;
- (void)resetVisitFindingSession;
- (unsigned long long)totalNumberOfMoments;
- (double)upperCloseRatio;
- (double)upperFarRatio;
- (double)upperVeryFarRatio;
- (id)visits;

@end
