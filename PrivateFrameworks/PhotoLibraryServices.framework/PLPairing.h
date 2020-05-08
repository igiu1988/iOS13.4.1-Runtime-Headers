/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPairing : NSObject {
    NSPredicate * _locatedInUsersPhotoLibrary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)getMetadataForAsset:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (bool)processPairingForEntireLibraryInContext:(id)arg1 error:(id*)arg2;
- (bool)processPairingForGroupIDs:(id)arg1 inContext:(id)arg2 duplicateDetection:(bool)arg3 error:(id*)arg4;

@end
