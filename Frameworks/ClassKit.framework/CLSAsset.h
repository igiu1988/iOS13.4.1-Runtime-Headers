/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSAsset : CLSObject <CLSRelationable> {
    NSString * _brItemID;
    NSString * _brOwnerName;
    NSString * _brShareName;
    NSString * _brZoneName;
    long long  _completedUnitCount;
    double  _fractionUploaded;
    bool  _observingUploadProgress;
    bool  _original;
    NSString * _ownerPersonID;
    NSMetadataQuery * _query;
    NSString * _relativePathWithinContainer;
    NSError * _sharingError;
    long long  _totalUnitCount;
    NSString * _ubiquitousContainerName;
    NSError * _uploadError;
    NSMutableArray * _uploadObservers;
    unsigned long long  _uploadState;
    bool  _uploaded;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *brItemID;
@property (nonatomic, retain) NSString *brOwnerName;
@property (nonatomic, retain) NSString *brShareName;
@property (nonatomic, retain) NSString *brZoneName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) double fractionUploaded;
@property (readonly) unsigned long long hash;
@property (getter=isOriginal, nonatomic) bool original;
@property (nonatomic, retain) NSString *ownerPersonID;
@property (nonatomic, retain) NSString *relativePathWithinContainer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *ubiquitousContainerName;
@property (nonatomic, readonly) NSError *uploadError;
@property (getter=isUploaded, nonatomic) bool uploaded;
@property (nonatomic, retain) NSURL *url;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithFileURL:(id)arg1;
- (void)addUploadObserver:(id)arg1;
- (id)brItemID;
- (id)brOwnerName;
- (id)brShareName;
- (id)brZoneName;
- (void)createShareIfNeeded:(id /* block */)arg1;
- (void)createShareIfNeeded_Imp:(id /* block */)arg1;
- (bool)deleteFile:(id*)arg1;
- (bool)deleteFileAtURL:(id)arg1 error:(id*)arg2;
- (void)deleteFileWithCompletion:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchUsersAndAddToShare:(id)arg1 completion:(id /* block */)arg2;
- (id)fileURL;
- (double)fractionUploaded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 withOwnerPersonID:(id)arg2;
- (id)initWithURL:(id)arg1;
- (bool)isOriginal;
- (bool)isUploaded;
- (void)mergeWithObject:(id)arg1;
- (id)ownerPersonID;
- (void)processItems:(id)arg1;
- (void)queryGatheredData:(id)arg1;
- (void)queryUpdated:(id)arg1;
- (void)queued_notifyUploadCompletion;
- (void)queued_notifyUploadProgress;
- (void)queued_startObservingUploadProgress;
- (void)queued_stopObservingUploadProgress;
- (id)relativePathWithinContainer;
- (void)removeUploadObserver:(id)arg1;
- (void)setBrItemID:(id)arg1;
- (void)setBrOwnerName:(id)arg1;
- (void)setBrShareName:(id)arg1;
- (void)setBrZoneName:(id)arg1;
- (void)setOriginal:(bool)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setRelativePathWithinContainer:(id)arg1;
- (void)setUbiquitousContainerName:(id)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)ubiquitousContainerName;
- (id)uploadError;
- (id)uploadFileIfNeeded:(id*)arg1;
- (id)uploadObservers;
- (void)uploadStateChanged:(unsigned long long)arg1;
- (id)url;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)arg1;
- (bool)validateObject:(id*)arg1;
- (void)willSaveObject;

@end
