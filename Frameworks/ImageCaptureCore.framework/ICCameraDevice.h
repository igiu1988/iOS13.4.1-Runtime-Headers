/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface ICCameraDevice : ICDevice {
    bool  _accessRestrictedAppleDevice;
    bool  _allowsSyncingClock;
    unsigned long long  _appleRelatedUUIDSupport;
    bool  _basicMediaModel;
    unsigned long long  _batteryLevel;
    bool  _batteryLevelAvailable;
    bool  _beingEjected;
    NSString * _buildVersion;
    unsigned long long  _contentCatalogPercentCompleted;
    bool  _contentReceived;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contentsLock;
    NSMutableArray * _convertedMediaFiles;
    NSMutableSet * _devCapabilities;
    NSObject<OS_dispatch_queue> * _devCommandQueue;
    NSXPCConnection * _devConnection;
    id /* block */  _devConnectionFailureBlock;
    NSMutableArray * _devContents;
    NSXPCListenerEndpoint * _devEndpoint;
    unsigned long long  _devFailureCount;
    NSMutableArray * _devMediaFiles;
    unsigned long long  _devMediaPresentation;
    NSObject<OS_dispatch_queue> * _devNotificationQueue;
    NSString * _devProductType;
    unsigned long long  _deviceAccessRestriction;
    NSString * _deviceClass;
    NSString * _deviceColor;
    NSString * _deviceEnclosureColor;
    NSNumber * _devicePairedState;
    double  _downloadCancelTimestamp;
    bool  _ejectable;
    NSMutableIndexSet * _enumeratedObjectIndexes;
    long long  _enumerationOrder;
    unsigned long long  _estMediaObjectCount;
    unsigned long long  _estimatedCountOfMediafiles;
    bool  _iCloudPhotosEnabled;
    NSMutableOrderedSet * _indexedCameraFiles;
    NSMutableOrderedSet * _indexedCameraFolders;
    bool  _isEnumeratingContent;
    bool  _locked;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mediaFilesLock;
    unsigned long long  _mediaObjectCount;
    NSString * _mountPoint;
    NSMutableArray * _originalMediaFiles;
    long long  _preflightCountOfObjects;
    bool  _preheatMetadata;
    NSString * _productVersion;
    NSProgress * _progress;
    id /* block */  _ptpEventHandler;
    bool  _ready;
    NSArray * _supportedSidecarFiles;
    bool  _tetheredCaptureEnabled;
    double  _timeOffset;
    NSMutableArray * _universalMediaFiles;
}

@property (getter=isAccessRestrictedAppleDevice, nonatomic) bool accessRestrictedAppleDevice;
@property (nonatomic) bool allowsSyncingClock;
@property (nonatomic) unsigned long long appleRelatedUUIDSupport;
@property (nonatomic) bool basicMediaModel;
@property (nonatomic) unsigned long long batteryLevel;
@property (nonatomic) bool batteryLevelAvailable;
@property (nonatomic) bool beingEjected;
@property (readonly) NSString *buildVersion;
@property (nonatomic, readonly) unsigned long long contentCatalogPercentCompleted;
@property (nonatomic) bool contentReceived;
@property (nonatomic, readonly) NSArray *contents;
@property (nonatomic, retain) NSMutableArray *convertedMediaFiles;
@property (nonatomic, retain) NSMutableSet *devCapabilities;
@property (nonatomic, retain) NSXPCConnection *devConnection;
@property (nonatomic, copy) id /* block */ devConnectionFailureBlock;
@property (nonatomic, retain) NSMutableArray *devContents;
@property (nonatomic, retain) NSXPCListenerEndpoint *devEndpoint;
@property unsigned long long devFailureCount;
@property (nonatomic, retain) NSMutableArray *devMediaFiles;
@property unsigned long long devMediaPresentation;
@property (nonatomic, copy) NSString *devProductType;
@property unsigned long long deviceAccessRestriction;
@property (readonly) NSString *deviceClass;
@property (readonly) NSString *deviceColor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *deviceCommandQueue;
@property (readonly) NSString *deviceEnclosureColor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *deviceNotificationQueue;
@property (readonly) NSNumber *devicePairedState;
@property (nonatomic) double downloadCancelTimestamp;
@property (getter=isEjectable, nonatomic) bool ejectable;
@property (nonatomic, retain) NSMutableIndexSet *enumeratedObjectIndexes;
@property (nonatomic) long long enumerationOrder;
@property (nonatomic) unsigned long long estMediaObjectCount;
@property unsigned long long estimatedCountOfMediafiles;
@property (nonatomic) bool iCloudPhotosEnabled;
@property (nonatomic, retain) NSMutableOrderedSet *indexedCameraFiles;
@property (nonatomic, retain) NSMutableOrderedSet *indexedCameraFolders;
@property (readonly) bool isEnumeratingContent;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, readonly) NSArray *mediaFiles;
@property (nonatomic) unsigned long long mediaObjectCount;
@property unsigned long long mediaPresentation;
@property (nonatomic, readonly) NSString *mountPoint;
@property (nonatomic, readonly) unsigned long long numberOfDownloadableItems;
@property (nonatomic, retain) NSMutableArray *originalMediaFiles;
@property long long preflightCountOfObjects;
@property (nonatomic) bool preheatMetadata;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) id /* block */ ptpEventHandler;
@property (nonatomic) bool ready;
@property (readonly) NSArray *supportedSidecarFiles;
@property (nonatomic, readonly) bool tetheredCaptureEnabled;
@property (readonly) double timeOffset;
@property (nonatomic, retain) NSMutableArray *universalMediaFiles;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)addCameraFileToIndex:(id)arg1;
- (id)addCameraFiles:(id)arg1;
- (void)addCameraFolderToIndex:(id)arg1;
- (void)addEstimatedNumberOfDownloadableItems:(long long)arg1;
- (void)addFolder:(id)arg1;
- (bool)addMediaFile:(id)arg1;
- (bool)addMediaFiles:(id)arg1;
- (void)addNumberOfDownloadableItems:(long long)arg1;
- (bool)allowsSyncingClock;
- (unsigned long long)appleRelatedUUIDSupport;
- (bool)basicMediaModel;
- (unsigned long long)batteryLevel;
- (bool)batteryLevelAvailable;
- (bool)beingEjected;
- (void)blendMedia:(id)arg1 ofLength:(int)arg2 withMedia:(id)arg3 ofLength:(int)arg4;
- (id)buildVersion;
- (id)cameraFileWithObjectID:(unsigned long long)arg1;
- (id)cameraFolderWithObjectID:(unsigned long long)arg1;
- (void)cancelDownload;
- (bool)containsRestrictedStorage;
- (unsigned long long)contentCatalogPercentCompleted;
- (bool)contentReceived;
- (id)contents;
- (id)convertedMediaFiles;
- (unsigned long long)countOfObjects;
- (void)dealloc;
- (id)description;
- (id)devCapabilities;
- (id)devConnection;
- (id /* block */)devConnectionFailureBlock;
- (id)devContents;
- (id)devEndpoint;
- (unsigned long long)devFailureCount;
- (id)devMediaFiles;
- (unsigned long long)devMediaPresentation;
- (id)devProductType;
- (unsigned long long)deviceAccessRestriction;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceCommandQueue;
- (id)deviceEnclosureColor;
- (id)deviceNotificationQueue;
- (id)devicePairedState;
- (void)discardCameraFiles:(id)arg1;
- (void)dispatchAsyncForOperationType:(long long)arg1 block:(id /* block */)arg2;
- (double)downloadCancelTimestamp;
- (id)enumeratedObjectIndexes;
- (long long)enumerationOrder;
- (unsigned long long)estMediaObjectCount;
- (unsigned long long)estimatedCountOfMediafiles;
- (unsigned long long)estimatedNumberOfDownloadableItems;
- (void)executeConnectionFailureBlock;
- (id)filesOfType:(id)arg1;
- (void)grindMedia:(id)arg1 index:(int*)arg2 file:(id)arg3;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handlePTPEvent:(id)arg1;
- (bool)iCloudPhotosEnabled;
- (id)indexedCameraFiles;
- (id)indexedCameraFolders;
- (id)init;
- (bool)isAccessRestrictedAppleDevice;
- (bool)isEjectable;
- (bool)isEnumeratingContent;
- (bool)isLocked;
- (bool)legacyDevice;
- (void)lockContents;
- (void)lockMediaFiles;
- (id)mediaFiles;
- (unsigned long long)mediaObjectCount;
- (unsigned long long)mediaPresentation;
- (id)mountPoint;
- (void)notifyDelegateOfAddedItem:(id)arg1;
- (void)notifyDelegateOfAddedItems:(id)arg1 progress:(id)arg2;
- (unsigned long long)numberOfDownloadableItems;
- (id)originalMediaFiles;
- (id)ownerMedia:(id)arg1 withMedia:(id)arg2;
- (void)popMediaFiles:(id)arg1;
- (long long)preflightCountOfObjects;
- (bool)preheatMetadata;
- (id)productType;
- (id)productVersion;
- (id)progress;
- (id /* block */)ptpEventHandler;
- (void)pushMediaFiles:(id)arg1;
- (bool)ready;
- (id)relateGroupedMedia:(id)arg1;
- (id)relateLegacyMedia:(id)arg1;
- (id)relateMedia:(id)arg1;
- (id)remoteCamera;
- (id)remoteCameraWithFailureBlock:(id /* block */)arg1;
- (void)removeCameraFileFromIndex:(id)arg1;
- (void)removeCameraFolderFromIndex:(id)arg1;
- (void)removeFolder:(id)arg1;
- (void)removeMediaFile:(id)arg1;
- (void)removeObjects:(id)arg1;
- (void)requestCloseSession;
- (void)requestCloseSessionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDeleteFiles:(id)arg1;
- (id)requestDeleteFiles:(id)arg1 deleteFailed:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)requestEject;
- (void)requestOpenSession;
- (void)requestOpenSessionWithOptions:(id)arg1;
- (void)requestOpenSessionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)requestSendPTPCommand:(id)arg1 outData:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSyncClock;
- (void)resetAccessRestriction;
- (void)setAccessRestrictedAppleDevice:(bool)arg1;
- (void)setAccessRestriction:(unsigned long long)arg1;
- (void)setAllowsSyncingClock:(bool)arg1;
- (void)setAppleRelatedUUIDSupport:(unsigned long long)arg1;
- (void)setBasicMediaModel:(bool)arg1;
- (void)setBatteryLevel:(unsigned long long)arg1;
- (void)setBatteryLevelAvailable:(bool)arg1;
- (void)setBeingEjected:(bool)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned long long)arg1;
- (void)setContentReceived:(bool)arg1;
- (void)setConvertedMediaFiles:(id)arg1;
- (void)setDevCapabilities:(id)arg1;
- (void)setDevConnection:(id)arg1;
- (void)setDevConnectionFailureBlock:(id /* block */)arg1;
- (void)setDevContents:(id)arg1;
- (void)setDevEndpoint:(id)arg1;
- (void)setDevFailureCount:(unsigned long long)arg1;
- (void)setDevMediaFiles:(id)arg1;
- (void)setDevMediaPresentation:(unsigned long long)arg1;
- (void)setDevProductType:(id)arg1;
- (void)setDeviceAccessRestriction:(unsigned long long)arg1;
- (void)setDownloadCancelTimestamp:(double)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setEnumeratedObjectIndexes:(id)arg1;
- (void)setEnumerationOrder:(long long)arg1;
- (void)setEstMediaObjectCount:(unsigned long long)arg1;
- (void)setEstimatedCountOfMediafiles:(unsigned long long)arg1;
- (void)setICloudPhotosEnabled:(bool)arg1;
- (void)setIndexedCameraFiles:(id)arg1;
- (void)setIndexedCameraFolders:(id)arg1;
- (void)setIsAccessRestrictedAppleDevice:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setMediaObjectCount:(unsigned long long)arg1;
- (void)setMediaPresentation:(unsigned long long)arg1;
- (void)setOriginalMediaFiles:(id)arg1;
- (void)setPreflightCountOfObjects:(long long)arg1;
- (void)setPreheatMetadata:(bool)arg1;
- (void)setProductType:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setPtpEventForwarding:(bool)arg1;
- (void)setPtpEventHandler:(id /* block */)arg1;
- (void)setReady:(bool)arg1;
- (void)setUniversalMediaFiles:(id)arg1;
- (long long)stitchMedia:(id)arg1 withMedia:(id)arg2;
- (void)storageAvailable;
- (id)supportedSidecarFiles;
- (bool)supportsMediaFormatCatalog;
- (bool)tetheredCaptureEnabled;
- (double)timeOffset;
- (id)universalMediaFiles;
- (void)unlockContents;
- (void)unlockMediaFiles;
- (void)updateAccessRestriction;
- (void)updateContentCatalogPercentCompleted;
- (void)updateMediaFilesCount:(id)arg1;
- (bool)updateMediaPresentation;

@end
