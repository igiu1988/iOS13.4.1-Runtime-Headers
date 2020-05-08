/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPreferences : NSObject <NSCoding> {
    struct WebPreferencesPrivate { struct RetainPtr<NSMutableDictionary> { void *x_1_1_1; } x1; bool x2; struct RetainPtr<NSString> { void *x_3_1_1; } x3; bool x4; bool x5; unsigned int x6; id x7; } * _private;
}

@property (nonatomic) bool CSSOMViewScrollingAPIEnabled;
@property (nonatomic) bool accessibilityObjectModelEnabled;
@property (nonatomic, retain) NSArray *additionalSupportedImageTypes;
@property (nonatomic) bool allowCrossOriginSubresourcesToAskForCredentials;
@property (nonatomic) bool allowMediaContentTypesRequiringHardwareSupportAsFallback;
@property (nonatomic) bool allowsAirPlayForMediaPlayback;
@property (nonatomic) bool allowsAnimatedImageLooping;
@property (nonatomic) bool allowsAnimatedImages;
@property (nonatomic) bool allowsInlineMediaPlaybackAfterFullscreen;
@property (nonatomic) bool animatedImageAsyncDecodingEnabled;
@property (nonatomic) bool ariaReflectionEnabled;
@property (nonatomic) bool asyncClipboardAPIEnabled;
@property (nonatomic) bool attachmentElementEnabled;
@property (nonatomic) bool autosaves;
@property (nonatomic) unsigned long long cacheModel;
@property (nonatomic) bool colorFilterEnabled;
@property (nonatomic) bool constantPropertiesEnabled;
@property (nonatomic) bool coreMathMLEnabled;
@property (nonatomic, copy) NSString *cursiveFontFamily;
@property (nonatomic) int defaultFixedFontSize;
@property (nonatomic) int defaultFontSize;
@property (nonatomic, copy) NSString *defaultTextEncodingName;
@property (nonatomic) bool encryptedMediaAPIEnabled;
@property (nonatomic, copy) NSString *fantasyFontFamily;
@property (nonatomic, copy) NSString *fixedFontFamily;
@property (nonatomic) bool genericCueAPIEnabled;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool inspectorAdditionsEnabled;
@property (nonatomic) bool intersectionObserverEnabled;
@property (nonatomic) bool isSecureContextAttributeEnabled;
@property (getter=isJavaEnabled, nonatomic) bool javaEnabled;
@property (nonatomic) bool javaScriptCanOpenWindowsAutomatically;
@property (getter=isJavaScriptEnabled, nonatomic) bool javaScriptEnabled;
@property (nonatomic) bool javaScriptMarkupEnabled;
@property (nonatomic) bool keygenElementEnabled;
@property (nonatomic) bool largeImageAsyncDecodingEnabled;
@property (nonatomic) bool legacyEncryptedMediaAPIEnabled;
@property (nonatomic) bool linkPreloadEnabled;
@property (nonatomic) bool linkPreloadResponsiveImagesEnabled;
@property (nonatomic) bool loadsImagesAutomatically;
@property (nonatomic) bool mediaCapabilitiesEnabled;
@property (nonatomic) NSString *mediaContentTypesRequiringHardwareSupport;
@property (nonatomic) bool mediaDataLoadsAutomatically;
@property (nonatomic) bool mediaRecorderEnabled;
@property (nonatomic) bool mediaUserGestureInheritsFromDocument;
@property (nonatomic) bool menuItemElementEnabled;
@property (nonatomic) int minimumFontSize;
@property (nonatomic) int minimumLogicalFontSize;
@property (nonatomic) bool pictureInPictureAPIEnabled;
@property (getter=arePlugInsEnabled, nonatomic) bool plugInsEnabled;
@property (nonatomic) bool privateBrowsingEnabled;
@property (nonatomic) bool punchOutWhiteBackgroundsInDarkMode;
@property (nonatomic) bool quickLookDocumentSavingEnabled;
@property (nonatomic) bool referrerPolicyAttributeEnabled;
@property (nonatomic) bool remotePlaybackEnabled;
@property (nonatomic) bool requestIdleCallbackEnabled;
@property (nonatomic) bool resizeObserverEnabled;
@property (nonatomic) bool resourceTimingEnabled;
@property (nonatomic, copy) NSString *sansSerifFontFamily;
@property (nonatomic, copy) NSString *serifFontFamily;
@property (nonatomic) bool sourceBufferChangeTypeEnabled;
@property (nonatomic, copy) NSString *standardFontFamily;
@property (nonatomic) bool suppressesIncrementalRendering;
@property (nonatomic) bool useGPUProcessForMedia;
@property (nonatomic) bool userStyleSheetEnabled;
@property (nonatomic, retain) NSURL *userStyleSheetLocation;
@property (nonatomic) bool userTimingEnabled;
@property (nonatomic) bool usesPageCache;
@property (nonatomic) bool viewportFitEnabled;
@property (nonatomic) bool visualViewportAPIEnabled;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_IBCreatorID;
+ (void)_checkLastReferenceForIdentifier:(id)arg1;
+ (void)_clearNetworkLoaderSession;
+ (id)_concatenateKeyWithIBCreatorID:(id)arg1;
+ (id)_getInstanceForIdentifier:(id)arg1;
+ (void)_removeReferenceForIdentifier:(id)arg1;
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned long long)arg1;
+ (void)_setIBCreatorID:(id)arg1;
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;
+ (void)_setInstance:(id)arg1 forIdentifier:(id)arg2;
+ (void)_switchNetworkLoaderToNewTestingSession;
+ (unsigned int)_systemCFStringEncoding;
+ (void)initialize;
+ (void)setWebKitLinkTimeVersion:(int)arg1;
+ (id)standardPreferences;

- (bool)CSSOMViewScrollingAPIEnabled;
- (bool)_allowMultiElementImplicitFormSubmission;
- (bool)_allowPasswordEcho;
- (bool)_alwaysRequestGeolocationPermission;
- (bool)_alwaysUseAcceleratedOverflowScroll;
- (double)_backForwardCacheExpirationInterval;
- (bool)_boolValueForKey:(id)arg1;
- (float)_floatValueForKey:(id)arg1;
- (bool)_forceFTPDirectoryListings;
- (id)_ftpDirectoryTemplatePath;
- (int)_integerValueForKey:(id)arg1;
- (int)_interpolationQuality;
- (void)_invalidateCachedPreferences;
- (int)_layoutInterval;
- (id)_localStorageDatabasePath;
- (long long)_longLongValueForKey:(id)arg1;
- (float)_maxParseDuration;
- (bool)_mediaRecorderEnabled;
- (float)_minimumZoomFontSize;
- (float)_passwordEchoDuration;
- (void)_postCacheModelChangedNotification;
- (void)_postPreferencesChangedAPINotification;
- (void)_postPreferencesChangedNotification;
- (void)_setAllowMultiElementImplicitFormSubmission:(bool)arg1;
- (void)_setAlwaysRequestGeolocationPermission:(bool)arg1;
- (void)_setAlwaysUseAcceleratedOverflowScroll:(bool)arg1;
- (void)_setBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)_setFTPDirectoryTemplatePath:(id)arg1;
- (void)_setFloatValue:(float)arg1 forKey:(id)arg2;
- (void)_setForceFTPDirectoryListings:(bool)arg1;
- (void)_setIntegerValue:(int)arg1 forKey:(id)arg2;
- (void)_setInterpolationQuality:(int)arg1;
- (void)_setLayoutInterval:(int)arg1;
- (void)_setLocalStorageDatabasePath:(id)arg1;
- (void)_setLongLongValue:(long long)arg1 forKey:(id)arg2;
- (void)_setMaxParseDuration:(float)arg1;
- (void)_setMediaRecorderEnabled:(bool)arg1;
- (void)_setMinimumZoomFontSize:(float)arg1;
- (void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2;
- (void)_setStandalone:(bool)arg1;
- (void)_setStringArrayValueForKey:(id)arg1 forKey:(id)arg2;
- (void)_setStringValue:(id)arg1 forKey:(id)arg2;
- (void)_setTelephoneNumberParsingEnabled:(bool)arg1;
- (void)_setTextAutosizingEnabled:(bool)arg1;
- (void)_setUnsignedIntValue:(unsigned int)arg1 forKey:(id)arg2;
- (void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_setUseSiteSpecificSpoofing:(bool)arg1;
- (bool)_standalone;
- (id)_stringArrayValueForKey:(id)arg1;
- (id)_stringValueForKey:(id)arg1;
- (void)_synchronizeWebStoragePolicyWithCookiePolicy;
- (bool)_telephoneNumberParsingEnabled;
- (bool)_textAutosizingEnabled;
- (unsigned int)_unsignedIntValueForKey:(id)arg1;
- (unsigned long long)_unsignedLongLongValueForKey:(id)arg1;
- (void)_updatePrivateBrowsingStateTo:(bool)arg1;
- (bool)_useSiteSpecificSpoofing;
- (id)_valueForKey:(id)arg1;
- (bool)accelerated2dCanvasEnabled;
- (bool)acceleratedCompositingEnabled;
- (bool)acceleratedDrawingEnabled;
- (bool)accessibilityObjectModelEnabled;
- (bool)adClickAttributionEnabled;
- (id)additionalSupportedImageTypes;
- (bool)allowCrossOriginSubresourcesToAskForCredentials;
- (bool)allowFileAccessFromFileURLs;
- (bool)allowMediaContentTypesRequiringHardwareSupportAsFallback;
- (bool)allowUniversalAccessFromFileURLs;
- (bool)allowsAirPlayForMediaPlayback;
- (bool)allowsAlternateFullscreen;
- (bool)allowsAnimatedImageLooping;
- (bool)allowsAnimatedImages;
- (bool)allowsInlineMediaPlaybackAfterFullscreen;
- (bool)allowsPictureInPictureMediaPlayback;
- (bool)animatedImageAsyncDecodingEnabled;
- (long long)applicationCacheDefaultOriginQuota;
- (long long)applicationCacheTotalQuota;
- (bool)applicationChromeModeEnabled;
- (bool)arePlugInsEnabled;
- (bool)ariaReflectionEnabled;
- (bool)asyncClipboardAPIEnabled;
- (bool)asyncFrameScrollingEnabled;
- (bool)asynchronousSpellCheckingEnabled;
- (bool)attachmentElementEnabled;
- (bool)audioPlaybackRequiresUserGesture;
- (unsigned int)audioSessionCategoryOverride;
- (bool)authorAndUserStylesEnabled;
- (bool)automaticallyDetectsCacheModel;
- (bool)autosaves;
- (bool)avKitEnabled;
- (bool)backspaceKeyNavigationEnabled;
- (bool)cacheAPIEnabled;
- (unsigned long long)cacheModel;
- (bool)canvasUsesAcceleratedDrawing;
- (bool)colorFilterEnabled;
- (bool)constantPropertiesEnabled;
- (bool)contentChangeObserverEnabled;
- (bool)coreMathMLEnabled;
- (bool)cssLogicalEnabled;
- (bool)cssShadowPartsEnabled;
- (id)cursiveFontFamily;
- (bool)customElementsEnabled;
- (bool)customPasteboardDataEnabled;
- (bool)dataTransferItemsEnabled;
- (bool)databasesEnabled;
- (void)dealloc;
- (int)defaultFixedFontSize;
- (int)defaultFontSize;
- (id)defaultTextEncodingName;
- (bool)developerExtrasEnabled;
- (bool)diagnosticLoggingEnabled;
- (bool)dialogElementEnabled;
- (void)didRemoveFromWebView;
- (bool)directoryUploadEnabled;
- (bool)displayListDrawingEnabled;
- (bool)domTimersThrottlingEnabled;
- (bool)downloadAttributeEnabled;
- (int)editableLinkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (bool)encryptedMediaAPIEnabled;
- (bool)enumeratingAllNetworkInterfacesEnabled;
- (bool)experimentalNotificationsEnabled;
- (id)fantasyFontFamily;
- (bool)fetchAPIEnabled;
- (bool)fetchAPIKeepAliveEnabled;
- (id)fixedFontFamily;
- (bool)forceLowPowerGPUForWebGL;
- (int)frameFlattening;
- (bool)fullScreenEnabled;
- (bool)gamepadsEnabled;
- (bool)genericCueAPIEnabled;
- (bool)hiddenPageCSSAnimationSuspensionEnabled;
- (bool)hiddenPageDOMTimerThrottlingEnabled;
- (bool)highlightAPIEnabled;
- (bool)httpEquivEnabled;
- (bool)hyperlinkAuditingEnabled;
- (bool)iceCandidateFilteringEnabled;
- (id)identifier;
- (bool)imageControlsEnabled;
- (double)incrementalRenderingSuppressionTimeoutInSeconds;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sendChangeNotification:(bool)arg2;
- (bool)inlineMediaPlaybackRequiresPlaysInlineAttribute;
- (bool)inspectorAdditionsEnabled;
- (bool)intersectionObserverEnabled;
- (bool)invisibleAutoplayNotPermitted;
- (bool)isAVFoundationEnabled;
- (bool)isAVFoundationNSURLSessionEnabled;
- (bool)isDNSPrefetchingEnabled;
- (bool)isDOMPasteAllowed;
- (bool)isFrameFlatteningEnabled;
- (bool)isHixie76WebSocketProtocolEnabled;
- (bool)isInAppBrowserPrivacyEnabled;
- (bool)isInheritURIQueryComponentEnabled;
- (bool)isJavaEnabled;
- (bool)isJavaScriptEnabled;
- (bool)isSecureContextAttributeEnabled;
- (bool)isSpatialNavigationEnabled;
- (bool)isVideoPluginProxyEnabled;
- (bool)isWebSecurityEnabled;
- (bool)isXSSAuditorEnabled;
- (bool)javaScriptCanAccessClipboard;
- (bool)javaScriptCanOpenWindowsAutomatically;
- (bool)javaScriptMarkupEnabled;
- (int)javaScriptRuntimeFlags;
- (bool)keygenElementEnabled;
- (bool)largeImageAsyncDecodingEnabled;
- (bool)legacyEncryptedMediaAPIEnabled;
- (bool)linkPreloadEnabled;
- (bool)linkPreloadResponsiveImagesEnabled;
- (bool)loadsImagesAutomatically;
- (bool)loadsSiteIconsIgnoringImageLoadingPreference;
- (bool)localFileContentSniffingEnabled;
- (bool)localStorageEnabled;
- (bool)lowPowerVideoAudioBufferSizeEnabled;
- (bool)mediaCapabilitiesEnabled;
- (bool)mediaCaptureRequiresSecureConnection;
- (id)mediaContentTypesRequiringHardwareSupport;
- (bool)mediaControlsScaleWithPageZoom;
- (bool)mediaDataLoadsAutomatically;
- (bool)mediaDevicesEnabled;
- (id)mediaKeysStorageDirectory;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)mediaPlaybackAllowsInline;
- (bool)mediaPlaybackRequiresUserGesture;
- (bool)mediaPreloadingEnabled;
- (bool)mediaRecorderEnabled;
- (bool)mediaSourceEnabled;
- (bool)mediaStreamEnabled;
- (bool)mediaUserGestureInheritsFromDocument;
- (bool)menuItemElementEnabled;
- (bool)metaRefreshEnabled;
- (int)minimumFontSize;
- (int)minimumLogicalFontSize;
- (bool)mockCaptureDevicesEnabled;
- (bool)mockCaptureDevicesPromptEnabled;
- (bool)mockScrollbarsEnabled;
- (bool)modernMediaControlsEnabled;
- (bool)needsStorageAccessFromFileURLsQuirk;
- (bool)networkDataUsageTrackingEnabled;
- (id)networkInterfaceName;
- (bool)notificationsEnabled;
- (bool)offlineWebApplicationCacheEnabled;
- (bool)overrideUserGestureRequirementForMainContent;
- (bool)pageCacheSupportsPlugins;
- (bool)paginateDuringLayoutEnabled;
- (bool)peerConnectionEnabled;
- (id)pictographFontFamily;
- (bool)pictureInPictureAPIEnabled;
- (bool)plugInSnapshottingEnabled;
- (bool)pointerEventsEnabled;
- (bool)privateBrowsingEnabled;
- (bool)punchOutWhiteBackgroundsInDarkMode;
- (bool)quickLookDocumentSavingEnabled;
- (bool)readableByteStreamAPIEnabled;
- (bool)referrerPolicyAttributeEnabled;
- (bool)remotePlaybackEnabled;
- (bool)renderingUpdateThrottlingEnabled;
- (bool)requestAnimationFrameEnabled;
- (bool)requestIdleCallbackEnabled;
- (bool)resizeObserverEnabled;
- (bool)resourceLoadStatisticsEnabled;
- (bool)resourceTimingEnabled;
- (id)sansSerifFontFamily;
- (bool)selectionAcrossShadowBoundariesEnabled;
- (id)serifFontFamily;
- (bool)serverTimingEnabled;
- (bool)serviceControlsEnabled;
- (void)setAVFoundationEnabled:(bool)arg1;
- (void)setAVFoundationNSURLSessionEnabled:(bool)arg1;
- (void)setAVKitEnabled:(bool)arg1;
- (void)setAccelerated2dCanvasEnabled:(bool)arg1;
- (void)setAcceleratedCompositingEnabled:(bool)arg1;
- (void)setAcceleratedDrawingEnabled:(bool)arg1;
- (void)setAccessibilityObjectModelEnabled:(bool)arg1;
- (void)setAdClickAttributionEnabled:(bool)arg1;
- (void)setAdditionalSupportedImageTypes:(id)arg1;
- (void)setAllowCrossOriginSubresourcesToAskForCredentials:(bool)arg1;
- (void)setAllowFileAccessFromFileURLs:(bool)arg1;
- (void)setAllowMediaContentTypesRequiringHardwareSupportAsFallback:(bool)arg1;
- (void)setAllowUniversalAccessFromFileURLs:(bool)arg1;
- (void)setAllowsAirPlayForMediaPlayback:(bool)arg1;
- (void)setAllowsAlternateFullscreen:(bool)arg1;
- (void)setAllowsAnimatedImageLooping:(bool)arg1;
- (void)setAllowsAnimatedImages:(bool)arg1;
- (void)setAllowsInlineMediaPlaybackAfterFullscreen:(bool)arg1;
- (void)setAllowsPictureInPictureMediaPlayback:(bool)arg1;
- (void)setAnimatedImageAsyncDecodingEnabled:(bool)arg1;
- (void)setApplicationCacheDefaultOriginQuota:(long long)arg1;
- (void)setApplicationCacheTotalQuota:(long long)arg1;
- (void)setApplicationChromeModeEnabled:(bool)arg1;
- (void)setAriaReflectionEnabled:(bool)arg1;
- (void)setAsyncClipboardAPIEnabled:(bool)arg1;
- (void)setAsyncFrameScrollingEnabled:(bool)arg1;
- (void)setAsynchronousSpellCheckingEnabled:(bool)arg1;
- (void)setAttachmentElementEnabled:(bool)arg1;
- (void)setAudioPlaybackRequiresUserGesture:(bool)arg1;
- (void)setAudioSessionCategoryOverride:(unsigned int)arg1;
- (void)setAuthorAndUserStylesEnabled:(bool)arg1;
- (void)setAutomaticallyDetectsCacheModel:(bool)arg1;
- (void)setAutosaves:(bool)arg1;
- (void)setBackspaceKeyNavigationEnabled:(bool)arg1;
- (void)setCSSLogicalEnabled:(bool)arg1;
- (void)setCSSOMViewScrollingAPIEnabled:(bool)arg1;
- (void)setCSSShadowPartsEnabled:(bool)arg1;
- (void)setCacheAPIEnabled:(bool)arg1;
- (void)setCacheModel:(unsigned long long)arg1;
- (void)setCanvasUsesAcceleratedDrawing:(bool)arg1;
- (void)setColorFilterEnabled:(bool)arg1;
- (void)setConstantPropertiesEnabled:(bool)arg1;
- (void)setContentChangeObserverEnabled:(bool)arg1;
- (void)setCoreMathMLEnabled:(bool)arg1;
- (void)setCursiveFontFamily:(id)arg1;
- (void)setCustomElementsEnabled:(bool)arg1;
- (void)setCustomPasteboardDataEnabled:(bool)arg1;
- (void)setDNSPrefetchingEnabled:(bool)arg1;
- (void)setDOMPasteAllowed:(bool)arg1;
- (void)setDOMTimersThrottlingEnabled:(bool)arg1;
- (void)setDataTransferItemsEnabled:(bool)arg1;
- (void)setDatabasesEnabled:(bool)arg1;
- (void)setDefaultFixedFontSize:(int)arg1;
- (void)setDefaultFontSize:(int)arg1;
- (void)setDefaultTextEncodingName:(id)arg1;
- (void)setDeveloperExtrasEnabled:(bool)arg1;
- (void)setDiagnosticLoggingEnabled:(bool)arg1;
- (void)setDialogElementEnabled:(bool)arg1;
- (void)setDirectoryUploadEnabled:(bool)arg1;
- (void)setDiskImageCacheEnabled:(bool)arg1;
- (void)setDisplayListDrawingEnabled:(bool)arg1;
- (void)setDownloadAttributeEnabled:(bool)arg1;
- (void)setEditableLinkBehavior:(int)arg1;
- (void)setEnableInheritURIQueryComponent:(bool)arg1;
- (void)setEncryptedMediaAPIEnabled:(bool)arg1;
- (void)setEnumeratingAllNetworkInterfacesEnabled:(bool)arg1;
- (void)setExperimentalNotificationsEnabled:(bool)arg1;
- (void)setFantasyFontFamily:(id)arg1;
- (void)setFetchAPIEnabled:(bool)arg1;
- (void)setFetchAPIKeepAliveEnabled:(bool)arg1;
- (void)setFixedFontFamily:(id)arg1;
- (void)setForceWebGLUsesLowPower:(bool)arg1;
- (void)setFrameFlattening:(int)arg1;
- (void)setFrameFlatteningEnabled:(bool)arg1;
- (void)setFullScreenEnabled:(bool)arg1;
- (void)setGamepadsEnabled:(bool)arg1;
- (void)setGenericCueAPIEnabled:(bool)arg1;
- (void)setHTTPEquivEnabled:(bool)arg1;
- (void)setHiddenPageCSSAnimationSuspensionEnabled:(bool)arg1;
- (void)setHiddenPageDOMTimerThrottlingEnabled:(bool)arg1;
- (void)setHighlightAPIEnabled:(bool)arg1;
- (void)setHixie76WebSocketProtocolEnabled:(bool)arg1;
- (void)setHyperlinkAuditingEnabled:(bool)arg1;
- (void)setIceCandidateFilteringEnabled:(bool)arg1;
- (void)setImageControlsEnabled:(bool)arg1;
- (void)setInAppBrowserPrivacyEnabled:(bool)arg1;
- (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1;
- (void)setInlineMediaPlaybackRequiresPlaysInlineAttribute:(bool)arg1;
- (void)setInspectorAdditionsEnabled:(bool)arg1;
- (void)setIntersectionObserverEnabled:(bool)arg1;
- (void)setInvisibleAutoplayNotPermitted:(bool)arg1;
- (void)setIsSecureContextAttributeEnabled:(bool)arg1;
- (void)setJavaEnabled:(bool)arg1;
- (void)setJavaScriptCanAccessClipboard:(bool)arg1;
- (void)setJavaScriptCanOpenWindowsAutomatically:(bool)arg1;
- (void)setJavaScriptEnabled:(bool)arg1;
- (void)setJavaScriptMarkupEnabled:(bool)arg1;
- (void)setJavaScriptRuntimeFlags:(int)arg1;
- (void)setKeygenElementEnabled:(bool)arg1;
- (void)setLargeImageAsyncDecodingEnabled:(bool)arg1;
- (void)setLegacyEncryptedMediaAPIEnabled:(bool)arg1;
- (void)setLinkPreloadEnabled:(bool)arg1;
- (void)setLinkPreloadResponsiveImagesEnabled:(bool)arg1;
- (void)setLoadsImagesAutomatically:(bool)arg1;
- (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(bool)arg1;
- (void)setLocalFileContentSniffingEnabled:(bool)arg1;
- (void)setLocalStorageEnabled:(bool)arg1;
- (void)setLowPowerVideoAudioBufferSizeEnabled:(bool)arg1;
- (void)setMediaCapabilitiesEnabled:(bool)arg1;
- (void)setMediaCaptureRequiresSecureConnection:(bool)arg1;
- (void)setMediaContentTypesRequiringHardwareSupport:(id)arg1;
- (void)setMediaControlsScaleWithPageZoom:(bool)arg1;
- (void)setMediaDataLoadsAutomatically:(bool)arg1;
- (void)setMediaDevicesEnabled:(bool)arg1;
- (void)setMediaKeysStorageDirectory:(id)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setMediaPlaybackAllowsInline:(bool)arg1;
- (void)setMediaPlaybackRequiresUserGesture:(bool)arg1;
- (void)setMediaPreloadingEnabled:(bool)arg1;
- (void)setMediaRecorderEnabled:(bool)arg1;
- (void)setMediaSourceEnabled:(bool)arg1;
- (void)setMediaStreamEnabled:(bool)arg1;
- (void)setMediaUserGestureInheritsFromDocument:(bool)arg1;
- (void)setMenuItemElementEnabled:(bool)arg1;
- (void)setMetaRefreshEnabled:(bool)arg1;
- (void)setMinimumFontSize:(int)arg1;
- (void)setMinimumLogicalFontSize:(int)arg1;
- (void)setMockCaptureDevicesEnabled:(bool)arg1;
- (void)setMockCaptureDevicesPromptEnabled:(bool)arg1;
- (void)setMockScrollbarsEnabled:(bool)arg1;
- (void)setModernMediaControlsEnabled:(bool)arg1;
- (void)setNeedsStorageAccessFromFileURLsQuirk:(bool)arg1;
- (void)setNetworkDataUsageTrackingEnabled:(bool)arg1;
- (void)setNetworkInterfaceName:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setOfflineWebApplicationCacheEnabled:(bool)arg1;
- (void)setOverrideUserGestureRequirementForMainContent:(bool)arg1;
- (void)setPageCacheSupportsPlugins:(bool)arg1;
- (void)setPaginateDuringLayoutEnabled:(bool)arg1;
- (void)setPeerConnectionEnabled:(bool)arg1;
- (void)setPictographFontFamily:(id)arg1;
- (void)setPictureInPictureAPIEnabled:(bool)arg1;
- (void)setPlugInSnapshottingEnabled:(bool)arg1;
- (void)setPlugInsEnabled:(bool)arg1;
- (void)setPointerEventsEnabled:(bool)arg1;
- (void)setPrivateBrowsingEnabled:(bool)arg1;
- (void)setPunchOutWhiteBackgroundsInDarkMode:(bool)arg1;
- (void)setQuickLookDocumentSavingEnabled:(bool)arg1;
- (void)setReadableByteStreamAPIEnabled:(bool)arg1;
- (void)setReferrerPolicyAttributeEnabled:(bool)arg1;
- (void)setRemotePlaybackEnabled:(bool)arg1;
- (void)setRenderingUpdateThrottlingEnabled:(bool)arg1;
- (void)setRequestAnimationFrameEnabled:(bool)arg1;
- (void)setRequestIdleCallbackEnabled:(bool)arg1;
- (void)setResizeObserverEnabled:(bool)arg1;
- (void)setResourceLoadStatisticsEnabled:(bool)arg1;
- (void)setResourceTimingEnabled:(bool)arg1;
- (void)setSansSerifFontFamily:(id)arg1;
- (void)setSelectionAcrossShadowBoundariesEnabled:(bool)arg1;
- (void)setSerifFontFamily:(id)arg1;
- (void)setServerTimingEnabled:(bool)arg1;
- (void)setServiceControlsEnabled:(bool)arg1;
- (void)setShadowDOMEnabled:(bool)arg1;
- (void)setShouldConvertPositionStyleOnCopy:(bool)arg1;
- (void)setShouldDisplayCaptions:(bool)arg1;
- (void)setShouldDisplaySubtitles:(bool)arg1;
- (void)setShouldDisplayTextDescriptions:(bool)arg1;
- (void)setShouldRespectImageOrientation:(bool)arg1;
- (void)setShowDebugBorders:(bool)arg1;
- (void)setShowRepaintCounter:(bool)arg1;
- (void)setShrinksStandaloneImagesToFit:(bool)arg1;
- (void)setSimpleLineLayoutDebugBordersEnabled:(bool)arg1;
- (void)setSimpleLineLayoutEnabled:(bool)arg1;
- (void)setSourceBufferChangeTypeEnabled:(bool)arg1;
- (void)setSpatialNavigationEnabled:(bool)arg1;
- (void)setStandardFontFamily:(id)arg1;
- (void)setStorageBlockingPolicy:(int)arg1;
- (void)setStorageTrackerEnabled:(bool)arg1;
- (void)setSubpixelAntialiasedLayerTextEnabled:(bool)arg1;
- (void)setSubpixelCSSOMElementMetricsEnabled:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (void)setSyntheticEditingCommandsEnabled:(bool)arg1;
- (void)setTextDirectionSubmenuInclusionBehavior:(int)arg1;
- (void)setUseGPUProcessForMedia:(bool)arg1;
- (void)setUseLegacyTextAlignPositionedElementBehavior:(bool)arg1;
- (void)setUsePreHTML5ParserQuirks:(bool)arg1;
- (void)setUserStyleSheetEnabled:(bool)arg1;
- (void)setUserStyleSheetLocation:(id)arg1;
- (void)setUserTimingEnabled:(bool)arg1;
- (void)setUsesEncodingDetector:(bool)arg1;
- (void)setUsesPageCache:(bool)arg1;
- (void)setVideoPlaybackRequiresUserGesture:(bool)arg1;
- (void)setVideoPluginProxyEnabled:(bool)arg1;
- (void)setViewportFitEnabled:(bool)arg1;
- (void)setVisualViewportAPIEnabled:(bool)arg1;
- (void)setWantsBalancedSetDefersLoadingBehavior:(bool)arg1;
- (void)setWebAnimationsCSSIntegrationEnabled:(bool)arg1;
- (void)setWebAnimationsCompositeOperationsEnabled:(bool)arg1;
- (void)setWebAnimationsEnabled:(bool)arg1;
- (void)setWebAnimationsMutableTimelinesEnabled:(bool)arg1;
- (void)setWebArchiveDebugModeEnabled:(bool)arg1;
- (void)setWebAudioEnabled:(bool)arg1;
- (void)setWebGL2Enabled:(bool)arg1;
- (void)setWebGLEnabled:(bool)arg1;
- (void)setWebGPUEnabled:(bool)arg1;
- (void)setWebSecurityEnabled:(bool)arg1;
- (void)setWritableStreamAPIEnabled:(bool)arg1;
- (void)setXSSAuditorEnabled:(bool)arg1;
- (void)setZoomsTextOnly:(bool)arg1;
- (bool)shadowDOMEnabled;
- (bool)shouldConvertPositionStyleOnCopy;
- (bool)shouldDisplayCaptions;
- (bool)shouldDisplaySubtitles;
- (bool)shouldDisplayTextDescriptions;
- (bool)shouldRespectImageOrientation;
- (bool)showDebugBorders;
- (bool)showRepaintCounter;
- (bool)shrinksStandaloneImagesToFit;
- (bool)simpleLineLayoutDebugBordersEnabled;
- (bool)simpleLineLayoutEnabled;
- (bool)sourceBufferChangeTypeEnabled;
- (id)standardFontFamily;
- (int)storageBlockingPolicy;
- (bool)storageTrackerEnabled;
- (bool)subpixelAntialiasedLayerTextEnabled;
- (bool)subpixelCSSOMElementMetricsEnabled;
- (bool)suppressesIncrementalRendering;
- (bool)syntheticEditingCommandsEnabled;
- (int)textDirectionSubmenuInclusionBehavior;
- (bool)useGPUProcessForMedia;
- (bool)useLegacyTextAlignPositionedElementBehavior;
- (bool)usePreHTML5ParserQuirks;
- (bool)userStyleSheetEnabled;
- (id)userStyleSheetLocation;
- (bool)userTimingEnabled;
- (bool)usesEncodingDetector;
- (bool)usesPageCache;
- (bool)videoPlaybackRequiresUserGesture;
- (bool)viewportFitEnabled;
- (bool)visualViewportAPIEnabled;
- (bool)wantsBalancedSetDefersLoadingBehavior;
- (bool)webAnimationsCSSIntegrationEnabled;
- (bool)webAnimationsCompositeOperationsEnabled;
- (bool)webAnimationsEnabled;
- (bool)webAnimationsMutableTimelinesEnabled;
- (bool)webArchiveDebugModeEnabled;
- (bool)webAudioEnabled;
- (bool)webGL2Enabled;
- (bool)webGLEnabled;
- (bool)webGPUEnabled;
- (void)willAddToWebView;
- (bool)writableStreamAPIEnabled;
- (bool)zoomsTextOnly;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)standardMailWebPreferences;

@end
