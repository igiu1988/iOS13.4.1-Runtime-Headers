/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharingSettings : PXSettings {
    bool  _allowFallbacksWhilePreparing;
    unsigned long long  _confidentialityWarningsVersion;
    double  _cornerRadius;
    bool  _debugRevealCMMShadowActivities;
    bool  _disableMailDrop;
    bool  _disableMetadataCorrections;
    bool  _enableNewActionShareSheet;
    bool  _enableNewShareSheet;
    bool  _enableOneUpAnimation;
    bool  _excludeLivenessByDefaultWhenSharing;
    bool  _excludeLocationByDefaultWhenSharing;
    unsigned long long  _firstRotationAngle;
    bool  _forceDateTimeMetadataBaking;
    bool  _forceLocationMetadataBaking;
    bool  _forceNonCMMActivitiesToBeVisibleForCMM;
    long long  _locationBakingComparisonStrategy;
    unsigned long long  _maxMailPhotoLimit;
    unsigned long long  _maxMessagesAssetLimit;
    double  _maxShadowOffset;
    unsigned long long  _maximumNumberOfItems;
    double  _minShadowOffset;
    bool  _performPreYukonColorSpaceConversions;
    unsigned long long  _rotationAngle;
    bool  _savePhotosBundlesToFilesWithoutExtractingMedia;
    bool  _sendAsOriginalsByDefaultWhenSharing;
    bool  _sendAssetURLsToMessages;
    double  _shadowOpacity;
    double  _shadowRadius;
    long long  _sharingHeaderLocationDisplayStyle;
    bool  _sharingSuggestionsWidgetAllStreamEnabled;
    bool  _sharingSuggestionsWidgetCoreDuetEnabled;
    bool  _sharingSuggestionsWidgetHeuristicsEnabled;
    bool  _sharingSuggestionsWidgetLearningEnabled;
    bool  _showConfidentialityWarnings;
    bool  _showGlobalLivenessExclusionSwitch;
    bool  _showGlobalLocationExclusionSwitch;
    bool  _showInternalGIFExport;
    bool  _showLivePhotoCountInShareSheetHeader;
    bool  _showSecondaryActionSheet;
    bool  _showSendAsOriginalsForCMM;
    bool  _showSendAsOriginalsForIndividualItems;
    bool  _showSingleVideoDurationInShareSheetHeader;
    bool  _simulateCPLNotReadyError;
    bool  _simulateDownloadFailure;
    bool  _simulateLivePhotoBundlingError;
    bool  _simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
    bool  _simulateMismatchedExportCounts;
    bool  _simulatePhotoRemakingError;
    unsigned long long  _verticalAdjustment;
}

@property (nonatomic) bool allowFallbacksWhilePreparing;
@property (nonatomic) unsigned long long confidentialityWarningsVersion;
@property (nonatomic) double cornerRadius;
@property (nonatomic) bool debugRevealCMMShadowActivities;
@property (nonatomic) bool disableMailDrop;
@property (nonatomic) bool disableMetadataCorrections;
@property (nonatomic) bool enableNewActionShareSheet;
@property (nonatomic) bool enableNewShareSheet;
@property (nonatomic) bool enableOneUpAnimation;
@property (nonatomic) bool excludeLivenessByDefaultWhenSharing;
@property (nonatomic) bool excludeLocationByDefaultWhenSharing;
@property (nonatomic) unsigned long long firstRotationAngle;
@property (nonatomic) bool forceDateTimeMetadataBaking;
@property (nonatomic) bool forceLocationMetadataBaking;
@property (nonatomic) bool forceNonCMMActivitiesToBeVisibleForCMM;
@property (nonatomic) long long locationBakingComparisonStrategy;
@property (nonatomic) unsigned long long maxMailPhotoLimit;
@property (nonatomic) unsigned long long maxMessagesAssetLimit;
@property (nonatomic) double maxShadowOffset;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (nonatomic) double minShadowOffset;
@property (nonatomic) bool performPreYukonColorSpaceConversions;
@property (nonatomic) unsigned long long rotationAngle;
@property (nonatomic) bool savePhotosBundlesToFilesWithoutExtractingMedia;
@property (nonatomic) bool sendAsOriginalsByDefaultWhenSharing;
@property (nonatomic) bool sendAssetURLsToMessages;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) long long sharingHeaderLocationDisplayStyle;
@property (nonatomic) bool sharingSuggestionsWidgetAllStreamEnabled;
@property (nonatomic) bool sharingSuggestionsWidgetCoreDuetEnabled;
@property (nonatomic) bool sharingSuggestionsWidgetHeuristicsEnabled;
@property (nonatomic) bool sharingSuggestionsWidgetLearningEnabled;
@property (nonatomic) bool showConfidentialityWarnings;
@property (nonatomic) bool showGlobalLivenessExclusionSwitch;
@property (nonatomic) bool showGlobalLocationExclusionSwitch;
@property (nonatomic) bool showInternalGIFExport;
@property (nonatomic) bool showLivePhotoCountInShareSheetHeader;
@property (nonatomic) bool showSecondaryActionSheet;
@property (nonatomic) bool showSendAsOriginalsForCMM;
@property (nonatomic) bool showSendAsOriginalsForIndividualItems;
@property (nonatomic) bool showSingleVideoDurationInShareSheetHeader;
@property (nonatomic) bool simulateCPLNotReadyError;
@property (nonatomic) bool simulateDownloadFailure;
@property (nonatomic) bool simulateLivePhotoBundlingError;
@property (nonatomic) bool simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
@property (nonatomic) bool simulateMismatchedExportCounts;
@property (nonatomic) bool simulatePhotoRemakingError;
@property (nonatomic) unsigned long long verticalAdjustment;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)allowFallbacksWhilePreparing;
- (unsigned long long)confidentialityWarningsVersion;
- (double)cornerRadius;
- (id)debugDescription;
- (bool)debugRevealCMMShadowActivities;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (bool)disableMailDrop;
- (bool)disableMetadataCorrections;
- (bool)enableNewActionShareSheet;
- (bool)enableNewShareSheet;
- (bool)enableOneUpAnimation;
- (bool)excludeLivenessByDefaultWhenSharing;
- (bool)excludeLocationByDefaultWhenSharing;
- (unsigned long long)firstRotationAngle;
- (bool)forceDateTimeMetadataBaking;
- (bool)forceLocationMetadataBaking;
- (bool)forceNonCMMActivitiesToBeVisibleForCMM;
- (long long)locationBakingComparisonStrategy;
- (unsigned long long)maxMailPhotoLimit;
- (unsigned long long)maxMessagesAssetLimit;
- (double)maxShadowOffset;
- (unsigned long long)maximumNumberOfItems;
- (double)minShadowOffset;
- (id)parentSettings;
- (bool)performPreYukonColorSpaceConversions;
- (unsigned long long)rotationAngle;
- (bool)savePhotosBundlesToFilesWithoutExtractingMedia;
- (bool)sendAsOriginalsByDefaultWhenSharing;
- (bool)sendAssetURLsToMessages;
- (void)setAllowFallbacksWhilePreparing:(bool)arg1;
- (void)setConfidentialityWarningsVersion:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDebugRevealCMMShadowActivities:(bool)arg1;
- (void)setDefaultValues;
- (void)setDisableMailDrop:(bool)arg1;
- (void)setDisableMetadataCorrections:(bool)arg1;
- (void)setEnableNewActionShareSheet:(bool)arg1;
- (void)setEnableNewShareSheet:(bool)arg1;
- (void)setEnableOneUpAnimation:(bool)arg1;
- (void)setExcludeLivenessByDefaultWhenSharing:(bool)arg1;
- (void)setExcludeLocationByDefaultWhenSharing:(bool)arg1;
- (void)setFirstRotationAngle:(unsigned long long)arg1;
- (void)setForceDateTimeMetadataBaking:(bool)arg1;
- (void)setForceLocationMetadataBaking:(bool)arg1;
- (void)setForceNonCMMActivitiesToBeVisibleForCMM:(bool)arg1;
- (void)setLocationBakingComparisonStrategy:(long long)arg1;
- (void)setMaxMailPhotoLimit:(unsigned long long)arg1;
- (void)setMaxMessagesAssetLimit:(unsigned long long)arg1;
- (void)setMaxShadowOffset:(double)arg1;
- (void)setMaximumNumberOfItems:(unsigned long long)arg1;
- (void)setMinShadowOffset:(double)arg1;
- (void)setPerformPreYukonColorSpaceConversions:(bool)arg1;
- (void)setRotationAngle:(unsigned long long)arg1;
- (void)setSavePhotosBundlesToFilesWithoutExtractingMedia:(bool)arg1;
- (void)setSendAsOriginalsByDefaultWhenSharing:(bool)arg1;
- (void)setSendAssetURLsToMessages:(bool)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setSharingHeaderLocationDisplayStyle:(long long)arg1;
- (void)setSharingSuggestionsWidgetAllStreamEnabled:(bool)arg1;
- (void)setSharingSuggestionsWidgetCoreDuetEnabled:(bool)arg1;
- (void)setSharingSuggestionsWidgetHeuristicsEnabled:(bool)arg1;
- (void)setSharingSuggestionsWidgetLearningEnabled:(bool)arg1;
- (void)setShowConfidentialityWarnings:(bool)arg1;
- (void)setShowGlobalLivenessExclusionSwitch:(bool)arg1;
- (void)setShowGlobalLocationExclusionSwitch:(bool)arg1;
- (void)setShowInternalGIFExport:(bool)arg1;
- (void)setShowLivePhotoCountInShareSheetHeader:(bool)arg1;
- (void)setShowSecondaryActionSheet:(bool)arg1;
- (void)setShowSendAsOriginalsForCMM:(bool)arg1;
- (void)setShowSendAsOriginalsForIndividualItems:(bool)arg1;
- (void)setShowSingleVideoDurationInShareSheetHeader:(bool)arg1;
- (void)setSimulateCPLNotReadyError:(bool)arg1;
- (void)setSimulateDownloadFailure:(bool)arg1;
- (void)setSimulateLivePhotoBundlingError:(bool)arg1;
- (void)setSimulateMaxFilesizeLimitForGIFsInSharedAlbumsError:(bool)arg1;
- (void)setSimulateMismatchedExportCounts:(bool)arg1;
- (void)setSimulatePhotoRemakingError:(bool)arg1;
- (void)setVerticalAdjustment:(unsigned long long)arg1;
- (double)shadowOpacity;
- (double)shadowRadius;
- (long long)sharingHeaderLocationDisplayStyle;
- (bool)sharingSuggestionsWidgetAllStreamEnabled;
- (bool)sharingSuggestionsWidgetCoreDuetEnabled;
- (bool)sharingSuggestionsWidgetHeuristicsEnabled;
- (bool)sharingSuggestionsWidgetLearningEnabled;
- (bool)showConfidentialityWarnings;
- (bool)showGlobalLivenessExclusionSwitch;
- (bool)showGlobalLocationExclusionSwitch;
- (bool)showInternalGIFExport;
- (bool)showLivePhotoCountInShareSheetHeader;
- (bool)showSecondaryActionSheet;
- (bool)showSendAsOriginalsForCMM;
- (bool)showSendAsOriginalsForIndividualItems;
- (bool)showSingleVideoDurationInShareSheetHeader;
- (bool)simulateCPLNotReadyError;
- (bool)simulateDownloadFailure;
- (bool)simulateLivePhotoBundlingError;
- (bool)simulateMaxFilesizeLimitForGIFsInSharedAlbumsError;
- (bool)simulateMismatchedExportCounts;
- (bool)simulatePhotoRemakingError;
- (unsigned long long)verticalAdjustment;

@end
