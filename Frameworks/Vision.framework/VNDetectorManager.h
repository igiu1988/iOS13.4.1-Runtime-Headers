/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectorManager : NSObject {
    NSMutableDictionary * _activeDetectorsCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeDetectorsCacheLock;
    NSMutableDictionary * _detectorTypeToSynchronizationQueueLookup;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _detectorTypeToSynchronizationQueueLookupLock;
}

+ (id)manager;

- (void).cxx_destruct;
- (id)_cachedMetalDeviceWisdomParameters;
- (Class)_detectorClassForDetectorType:(id)arg1 error:(id*)arg2;
- (Class)_detectorClassForDetectorType:(id)arg1 options:(id)arg2 detectorCreationOptions:(id*)arg3 error:(id*)arg4;
- (id)_detectorOfClass:(Class)arg1 type:(id)arg2 configuredWithOptions:(id)arg3 error:(id*)arg4;
- (void)_flushMetalDeviceWisdomParametersCache;
- (void)_forcedCleanupFacePipelineWithLevel:(id)arg1;
- (void)_forcedCleanupJunkPipelineWithLevel:(id)arg1;
- (void)_forcedCleanupScenePipelineWithLevel:(id)arg1;
- (void)_forcedCleanupSmartCamPipelineWithLevel:(id)arg1;
- (void)_removeAllCachedDetectors;
- (void)_removeCachedDetectorClasses:(id)arg1;
- (void)_removeCachedDetectorTypes:(id)arg1;
- (bool)_specialCaseLookUpOfExistingDetector:(id*)arg1 forType:(id)arg2 configuredWithOptions:(id)arg3 error:(id*)arg4;
- (id)_synchronizationQueueForDetectorType:(id)arg1;
- (Class)detectorClassForDetectorType:(id)arg1 options:(id)arg2;
- (id)detectorOfType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)forcedCleanup;
- (void)forcedCleanupWithOptions:(id)arg1;
- (id)init;
- (id)loadedDetectors;
- (id)saliencyHeatmapBoundingBoxGeneratorForDetector:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (id)wisdomParametersForMetalDeviceWithName:(id)arg1;

@end
