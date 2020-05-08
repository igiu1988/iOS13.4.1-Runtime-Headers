/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBackgroundJobDeferredPhotoProcessingWorker : PLBackgroundJobWorker {
    PLDeferredPhotoFinalizer * _deferredPhotoFinalizer;
}

+ (id)workerWithLibrary:(id)arg1;

- (void).cxx_destruct;
- (id)_predicateToFetchDeferredAssets;
- (id)deferredPhotoFinalizer;
- (bool)hasPendingJobs;
- (bool)isInterruptible;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(id /* block */)arg2;
- (void)stopWorkingOnManagedObjectID:(id)arg1;

@end
