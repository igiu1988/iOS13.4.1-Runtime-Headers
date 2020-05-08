/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLibrarySyncContext : NSObject <PLSyncContext> {
    NSMutableDictionary * _assetAdjustmentStatesByCloudIdentifier;
    NSArray * _personUUIDsToDedupe;
    PLPhotoLibrary * _photoLibrary;
    PLCloudRecordOrganizer * _recordOrganizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *personUUIDsToDedupe;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLCloudRecordOrganizer *recordOrganizer;
@property (nonatomic, readonly) bool serverSupportsGraphHome;
@property (nonatomic, readonly) bool serverSupportsSuggestion;
@property (nonatomic, readonly) bool serverSupportsVision;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetAdjustmentStateForCloudIdentifier:(id)arg1;
- (void)deleteFaces:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)makeFace;
- (id)personForUUID:(id)arg1;
- (bool)personUUIDIsDeleted:(id)arg1;
- (id)personUUIDsToDedupe;
- (id)photoLibrary;
- (id)recordOrganizer;
- (bool)serverSupportsGraphHome;
- (bool)serverSupportsSuggestion;
- (bool)serverSupportsVision;
- (void)setAssetAdjustmentState:(id)arg1 forCloudIdentifer:(id)arg2;
- (void)setPersonUUIDsToDedupe:(id)arg1;

@end
