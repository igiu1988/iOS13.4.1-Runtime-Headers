/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshot : NSObject <BSDescriptionProviding, NSSecureCoding> {
    long long  _backgroundStyle;
    UIImage * _cachedImage;
    long long  _classicMode;
    long long  _compatibilityMode;
    XBSnapshotContainerIdentity * _containerIdentity;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    long long  _contentType;
    NSDate * _creationDate;
    XBDisplayEdgeInsetsWrapper * _customSafeAreaInsets;
    NSDate * _expirationDate;
    NSDictionary * _extendedData;
    long long  _fileFormat;
    long long  _fileLocation;
    NSString * _filename;
    bool  _fullScreen;
    XBApplicationSnapshotGenerationContext * _generationContext;
    NSString * _groupID;
    bool  _hasProtectedContent;
    NSString * _identifier;
    unsigned long long  _imageAccessCount;
    id /* block */  _imageGenerator;
    bool  _imageOpaque;
    long long  _imageOrientation;
    double  _imageScale;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _imageTransform;
    long long  _interfaceOrientation;
    bool  _invalidated;
    bool  _keepImageAccessForPreHeat;
    bool  _keepImageAccessUntilExpiration;
    NSDate * _lastUsedDate;
    NSString * _launchInterfaceIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadImageLock;
    NSString * _logIdentifier;
    NSString * _name;
    NSString * _path;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    NSString * _relativePath;
    NSString * _requiredOSVersion;
    NSString * _scheme;
    XBStatusBarSettings * _statusBarSettings;
    <XBSnapshotManifestStore> * _store;
    long long  _userInterfaceStyle;
    NSString * _variantID;
    NSMutableDictionary * _variantsByID;
}

@property (nonatomic, readonly) unsigned long long _contentTypeMask;
@property (nonatomic, readonly) unsigned long long _interfaceOrientationMask;
@property (nonatomic, readonly, copy) NSString *_sortableLaunchInterfaceIdentifier;
@property (nonatomic, readonly, copy) NSString *_sortableName;
@property (nonatomic, readonly, copy) NSString *_sortableRequiredOSVersion;
@property (nonatomic, readonly, copy) NSString *_sortableScheme;
@property (nonatomic, readonly, retain) XBStatusBarSettings *_sortableStatusBarSettings;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) long long classicMode;
@property (nonatomic) long long compatibilityMode;
@property (copy) XBSnapshotContainerIdentity *containerIdentity;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic) long long contentType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (copy) NSDictionary *extendedData;
@property (nonatomic, readonly) bool fileExists;
@property (nonatomic, readonly) long long fileFormat;
@property (nonatomic) long long fileLocation;
@property (getter=filename, setter=_setFilename:, nonatomic, copy) NSString *filename;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (nonatomic, readonly) XBApplicationSnapshotGenerationContext *generationContext;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (nonatomic, readonly) bool hasFullSizedContent;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ imageGenerator;
@property (getter=isImageOpaque, nonatomic) bool imageOpaque;
@property (nonatomic) long long imageOrientation;
@property (nonatomic) double imageScale;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } imageTransform;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, retain) NSDate *lastUsedDate;
@property (nonatomic, copy) NSString *launchInterfaceIdentifier;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (setter=_setPath:, nonatomic, copy) NSString *path;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceSize;
@property (getter=_relativePath, setter=_setRelativePath:, nonatomic, copy) NSString *relativePath;
@property (nonatomic, copy) NSString *requiredOSVersion;
@property (nonatomic, copy) NSString *scheme;
@property (nonatomic, copy) XBStatusBarSettings *statusBarSettings;
@property (getter=_store, nonatomic, readonly) <XBSnapshotManifestStore> *store;
@property (readonly) Class superclass;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic, copy) NSString *variantID;

+ (id)_allSecureCodingClassesIncludingDefaultAndClientSpecified;
+ (struct CGImage { }*)_createCGImageWithPreferredOptions:(id)arg1 fromCGImage:(struct CGImage { }*)arg2;
+ (id)dataForImage:(id)arg1 withFormat:(long long)arg2;
+ (bool)isValidImageFileExtension:(id)arg1;
+ (id)normalizeSnapshotName:(id)arg1;
+ (id)secureCodableCustomExtendedDataClasses;
+ (void)setSecureCodableCustomExtendedDataClasses:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_beginPreHeatImageAccess;
- (void)_cacheImage:(id)arg1;
- (id)_cachedImage;
- (void)_commonInitWithIdentifier:(id)arg1;
- (id)_configureDefaultPathWithinGroupForFormat:(long long)arg1;
- (void)_configureWithPath:(id)arg1;
- (unsigned long long)_contentTypeMask;
- (id)_createVariantWithIdentifier:(id)arg1;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 includeVariants:(bool)arg2;
- (id)_determineRelativePathForPath:(id)arg1 location:(long long*)arg2;
- (void)_endPreHeatImageAccess;
- (long long)_fileLocation;
- (bool)_hasGenerationContext;
- (id)_initWithContainerIdentity:(id)arg1 store:(id)arg2 groupID:(id)arg3 generationContext:(id)arg4;
- (unsigned long long)_interfaceOrientationMask;
- (void)_invalidate;
- (bool)_isInvalidated;
- (void)_manifestQueueDecode_setStore:(id)arg1;
- (bool)_path:(id)arg1 isRelativeToPath:(id)arg2 outRelativePath:(id*)arg3;
- (void)_purgeCachedImageIfAppropriate:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (id)_relativePath;
- (void)_setFileLocation:(long long)arg1;
- (void)_setFilename:(id)arg1;
- (void)_setHasProtectedContent:(bool)arg1;
- (void)_setPath:(id)arg1;
- (void)_setRelativePath:(id)arg1;
- (bool)_shouldDeleteFileOnPurge;
- (void)_snynchronized_evaluateImageAccessUntilExpirationEnablingIfNecessary:(bool)arg1;
- (id)_sortableLaunchInterfaceIdentifier;
- (id)_sortableName;
- (id)_sortableRequiredOSVersion;
- (id)_sortableScheme;
- (id)_sortableStatusBarSettings;
- (id)_store;
- (bool)_synchronized_isExpired;
- (bool)_validateWithContainerIdentity:(id)arg1;
- (long long)backgroundStyle;
- (void)beginImageAccess;
- (void)beginImageAccessUntilExpiration;
- (id)cachedImageForInterfaceOrientation:(long long)arg1;
- (long long)classicMode;
- (long long)compatibilityMode;
- (id)containerIdentity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (long long)contentType;
- (id)creationDate;
- (id)customSafeAreaInsets;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionWithoutVariants;
- (void)encodeWithCoder:(id)arg1;
- (void)endImageAccess;
- (id)expirationDate;
- (id)extendedData;
- (bool)fileExists;
- (long long)fileFormat;
- (long long)fileLocation;
- (id)filename;
- (id)generationContext;
- (id)groupID;
- (bool)hasCachedImage;
- (bool)hasFullSizedContent;
- (bool)hasProtectedContent;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageForInterfaceOrientation:(long long)arg1;
- (id /* block */)imageGenerator;
- (long long)imageOrientation;
- (double)imageScale;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })imageTransform;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (bool)isFullScreen;
- (bool)isImageOpaque;
- (bool)isValid;
- (id)lastUsedDate;
- (id)launchInterfaceIdentifier;
- (void)loadImage;
- (void)loadImageForPreHeat;
- (id)logIdentifier;
- (id)name;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)path;
- (void)purgeImage;
- (struct CGSize { double x1; double x2; })referenceSize;
- (id)requiredOSVersion;
- (id)scheme;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setClassicMode:(long long)arg1;
- (void)setCompatibilityMode:(long long)arg1;
- (void)setContainerIdentity:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentType:(long long)arg1;
- (void)setCustomSafeAreaInsets:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExtendedData:(id)arg1;
- (void)setFileLocation:(long long)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setImageGenerator:(id /* block */)arg1;
- (void)setImageOpaque:(bool)arg1;
- (void)setImageOrientation:(long long)arg1;
- (void)setImageScale:(double)arg1;
- (void)setImageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setLaunchInterfaceIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequiredOSVersion:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setStatusBarSettings:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)setVariantID:(id)arg1;
- (id)statusBarSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)userInterfaceStyle;
- (id)variantID;
- (id)variantWithIdentifier:(id)arg1;
- (id)variants;

@end
