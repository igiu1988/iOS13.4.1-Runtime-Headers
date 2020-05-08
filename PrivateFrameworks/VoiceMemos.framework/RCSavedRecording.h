/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecording : NSManagedObject <RCMutableRecording, UIActivityItemSource> {
    AVAsset * _avAsset;
    bool  _hasPendingChangeAffectingEntityRevision;
    bool  _ignoreChangeForEntityRevision;
    bool  _pathWasInvalid;
    long long  revisionID;
}

@property (nonatomic, readonly, copy) NSURL *URIRepresentation;
@property (nonatomic, readonly) AVAsset *avAsset;
@property (nonatomic, readonly, copy) NSString *customLabel;
@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool downloading;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool editing;
@property (nonatomic, readonly) bool evicted;
@property (nonatomic, readonly, copy) NSDate *evictionDate;
@property (nonatomic, readonly) bool hasPendingChangeAffectingEntityRevision;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long iTunesPersistentID;
@property (nonatomic, readonly) bool isContentBeingModified;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly) bool manuallyRenamed;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) bool pendingRestore;
@property (nonatomic, readonly) bool playable;
@property (nonatomic) bool recordedOnWatch;
@property (nonatomic) long long recordingID;
@property (nonatomic) long long revisionID;
@property (nonatomic, readonly, copy) CSSearchableItem *searchableItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool synced;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *titleDisallowingEmptyString;
@property (nonatomic, readonly, copy) NSString *uniqueID;
@property (nonatomic, readonly) bool uploaded;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)localizedStringForRecordingLabel:(long long)arg1;
+ (id)propertiesAffectingEntityRevision;
+ (id)savedRecordingURIForSearchableItemIdentifier:(id)arg1;
+ (id)searchableItemIdentifierForSavedRecordingURI:(id)arg1;

- (void).cxx_destruct;
- (id)URIRepresentation;
- (id)_labelAllowingEmptyString:(bool)arg1;
- (void)_validatePath;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)avAsset;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)customLabel;
- (id)detailLabel;
- (bool)downloading;
- (double)duration;
- (bool)editing;
- (bool)evicted;
- (id)evictionDate;
- (bool)hasPendingChangeAffectingEntityRevision;
- (long long)iTunesPersistentID;
- (bool)isContentBeingModified;
- (id)label;
- (long long)labelPreset;
- (id)location;
- (bool)manuallyRenamed;
- (id)name;
- (id)path;
- (bool)playable;
- (bool)recordedOnWatch;
- (long long)recordingID;
- (long long)revisionID;
- (id)searchableItem;
- (void)setCustomLabel:(id)arg1;
- (void)setDownloading:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEvictionDate:(id)arg1;
- (void)setITunesPersistentID:(long long)arg1;
- (void)setLabelPreset:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setManuallyRenamed:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPlayable:(bool)arg1;
- (void)setRecordedOnWatch:(bool)arg1;
- (void)setRecordingID:(long long)arg1;
- (void)setRevisionID:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleDisallowingEmptyString;
- (bool)uploaded;
- (id)url;
- (void)willChangeValueForKey:(id)arg1;
- (void)willSave;

@end
