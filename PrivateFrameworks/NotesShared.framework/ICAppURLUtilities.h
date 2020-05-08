/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAppURLUtilities : NSObject

+ (long long)appURLActionFromURL:(id)arg1;
+ (id)appURLForFolderList;
+ (id)appURLForHTMLNote:(id)arg1;
+ (id)appURLForNote:(id)arg1;
+ (id)attachmentIdentifierFromQuickNoteURL:(id)arg1;
+ (id)contentOffsetFromQuickNoteURL:(id)arg1;
+ (id)firstQueryItemInURL:(id)arg1 withURLScheme:(id)arg2 andHost:(id)arg3 andQueryItemName:(id)arg4;
+ (bool)isLaunchingQuickNoteViaPencil:(id)arg1;
+ (bool)isQuickNoteModeURL:(id)arg1;
+ (bool)isShowFolderListURL:(id)arg1;
+ (bool)isShowHTMLNoteURL:(id)arg1;
+ (bool)isShowLegacyNoteURL:(id)arg1;
+ (bool)isShowNoteURL:(id)arg1;
+ (id)noteIdentifierFromQuickNoteURL:(id)arg1;
+ (id)objectIDURIRepresentationForHTMLNoteMentionedInURL:(id)arg1;
+ (id)predicateForNoteMentionedInURL:(id)arg1;
+ (bool)quickNoteURLShouldShowList:(id)arg1;
+ (bool)quickNoteURLShouldShowShareSheet:(id)arg1;
+ (bool)quickNoteURLShouldShowiCloudShareSheet:(id)arg1;
+ (id)referralURLForSnapshotBackgroundTask;
+ (id)urlForAppURLAction:(long long)arg1;
+ (id)urlForQuickNoteWithOptions:(id)arg1;

@end
