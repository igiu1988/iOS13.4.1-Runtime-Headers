/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIcon : NSObject <BSDescriptionProviding, NSCopying, SBIconIndexNode, SBTreeNode> {
    id  _badgeNumberOrString;
    <SBIconDelegate> * _delegate;
    NSString * _iconFileSizeDescription;
    NSHashTable * _observers;
    <SBTreeNode> * _parent;
    bool  _uninstalled;
}

@property (nonatomic, readonly, copy) NSString *automationID;
@property (nonatomic, readonly) id badgeNumberOrString;
@property (nonatomic, readonly) long long badgeValue;
@property (nonatomic, readonly) bool canBeAddedToMultiItemDrag;
@property (nonatomic, readonly) bool canReceiveGrabbedIcon;
@property (nonatomic, readonly) bool canTightenLabel;
@property (nonatomic, readonly) bool canTruncateLabel;
@property (nonatomic, readonly) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBIconDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *folderFallbackTitle;
@property (nonatomic, readonly, copy) NSArray *folderTitleOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *iconCategoryDescription;
@property (nonatomic, readonly) NSString *iconFileSizeDescription;
@property (nonatomic, readonly) long long labelAccessoryType;
@property (getter=isLaunchDisabledForObscuredReason, nonatomic, readonly) bool launchDisabledForObscuredReason;
@property (getter=isLaunchEnabled, nonatomic, readonly) bool launchEnabled;
@property (nonatomic) <SBTreeNode> *parent;
@property (getter=isProgressPaused, nonatomic, readonly) bool progressPaused;
@property (nonatomic, readonly) double progressPercent;
@property (nonatomic, readonly) long long progressState;
@property (nonatomic, readonly) bool shouldAnimateProgress;
@property (nonatomic, readonly) bool shouldWarmUp;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *tags;
@property (getter=isTimedOut, nonatomic, readonly) bool timedOut;
@property (nonatomic, readonly, copy) NSString *uninstallAlertBody;
@property (nonatomic, readonly, copy) NSString *uninstallAlertCancelTitle;
@property (nonatomic, readonly, copy) NSString *uninstallAlertConfirmTitle;
@property (nonatomic, readonly, copy) NSString *uninstallAlertTitle;
@property (getter=isUninstallSupported, nonatomic, readonly) bool uninstallSupported;
@property (getter=isUninstalled, nonatomic, readonly) bool uninstalled;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (bool)canGenerateIconsInBackground;
+ (Class)downloadingIconClass;
+ (bool)forcesBackgroundIconGeneration;
+ (bool)hasIconImage;
+ (id)iconImageFromUnmaskedImage:(id)arg1 info:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;

- (void).cxx_destruct;
- (void)_notifyAccessoriesDidUpdate;
- (void)_notifyImageDidUpdate;
- (void)_notifyLaunchEnabledDidChange;
- (id)accessoryTextForLocation:(id)arg1;
- (long long)accessoryTypeForLocation:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)ancestryDidChange;
- (id)applicationBundleID;
- (bool)assumesAppInstallFinishedForFolderProgress;
- (id)automationID;
- (id)badgeNumberOrString;
- (long long)badgeValue;
- (bool)canBeAddedToMultiItemDrag;
- (bool)canReceiveGrabbedIcon;
- (bool)canTightenLabel;
- (bool)canTruncateLabel;
- (id)children;
- (void)completeUninstall;
- (id)containedNodeIdentifiers;
- (bool)containsNodeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionForLocation:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (id)displayNameForLocation:(id)arg1;
- (id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1;
- (id)downloadingIconDataSource;
- (void)enumerateObserversUsingBlock:(id /* block */)arg1;
- (id)folder;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (bool)hasObserver:(id)arg1;
- (id)iconCategoryDescription;
- (id)iconFileSizeDescription;
- (Class)iconImageViewClassForLocation:(id)arg1;
- (id)iconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)iconSizeDescription;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (bool)isDownloadingIcon;
- (bool)isFolderIcon;
- (bool)isGrabbedIconPlaceholder;
- (bool)isLaunchDisabledForObscuredReason;
- (bool)isLaunchEnabled;
- (bool)isLeafIcon;
- (bool)isPlaceholder;
- (bool)isProgressPaused;
- (bool)isTimedOut;
- (bool)isUninstallSupported;
- (bool)isUninstalled;
- (long long)labelAccessoryType;
- (void)launchFromLocation:(id)arg1 context:(id)arg2;
- (id)leafIdentifier;
- (void)localeChanged;
- (long long)localizedCompareDisplayNames:(id)arg1;
- (id)masqueradeIdentifier;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (void)noteBadgeDidChange;
- (id)parent;
- (id)parentFolderIcon;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)possibleUserTapDidCancel;
- (double)progressPercent;
- (long long)progressState;
- (void)reloadIconImage;
- (void)removeChild:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)representedSceneIdentifier;
- (void)setBadge:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setUninstalled;
- (bool)shouldAnimateProgress;
- (bool)shouldWarmUp;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)tags;
- (id)uninstallAlertBody;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertTitle;
- (id)uniqueIdentifier;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)application;
- (bool)isApplicationIcon;
- (bool)isBookmarkIcon;
- (id)masqueradeIdentifier;

@end
