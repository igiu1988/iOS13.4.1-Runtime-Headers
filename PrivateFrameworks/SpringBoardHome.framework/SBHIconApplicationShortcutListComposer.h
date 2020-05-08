/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHIconApplicationShortcutListComposer : NSObject

+ (id)composedShortcutsForApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 staticItems:(id)arg3 dynamicItems:(id)arg4 applicationItemID:(unsigned long long)arg5 numberOfDisplayItemsInSwitcher:(long long)arg6 supportsMultipleWindows:(bool)arg7 isSystemApplication:(bool)arg8 isInternalApplication:(bool)arg9 isApplicationInBeta:(bool)arg10 removeStyle:(long long)arg11;
+ (id)composedShortcutsForBookmarkIcon:(id)arg1 withDisplayName:(id)arg2 removeStyle:(long long)arg3;
+ (id)composedShortcutsForDownloadingApplicationWithBundleIdentifier:(id)arg1 iconDisplayName:(id)arg2 prioritizationIsAvailable:(bool)arg3 downloadingInformationAgent:(id)arg4 canShare:(bool)arg5;
+ (id)composedShortcutsForFolderIcon:(id)arg1 iconImageCache:(id)arg2 iconManagerAllowsEditing:(bool)arg3 badgeViewGenerator:(id /* block */)arg4;
+ (id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2;
+ (bool)supportsMultiwindowShortcut;

@end
