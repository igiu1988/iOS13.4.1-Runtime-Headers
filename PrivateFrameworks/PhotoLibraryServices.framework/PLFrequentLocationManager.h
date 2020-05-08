/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFrequentLocationManager : NSObject {
    NSSet * _currentFrequentLocations;
    PLRoutineService * _routineManager;
}

@property (nonatomic, retain) NSSet *currentFrequentLocations;
@property (nonatomic, retain) PLRoutineService *routineManager;

- (void).cxx_destruct;
- (id)_createFrequentLocationsWithAllMoments:(id)arg1;
- (id)currentFrequentLocations;
- (bool)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1;
- (id)init;
- (id)routineManager;
- (void)setCurrentFrequentLocations:(id)arg1;
- (void)setRoutineManager:(id)arg1;

@end
