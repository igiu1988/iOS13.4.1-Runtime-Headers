/* Generated by EzioChiu.
 */

@protocol ICNoteContainer <ICNoteVisibilityTesting>

@required

- (NSString *)accountName;
- (bool)canBeSharedViaICloud;
- (NSString *)containerIdentifier;
- (ICFolderCustomNoteSortType *)customNoteSortType;
- (NSString *)detailForTableViewCell;
- (bool)isAllNotesContainer;
- (bool)isDeleted;
- (bool)isModernCustomFolder;
- (bool)isSharedViaICloud;
- (bool)isTrashFolder;
- (NSManagedObjectContext *)managedObjectContext;
- (bool)mergeWithSubFolderMergeableData:(NSData *)arg1;
- (ICAccount *)noteContainerAccount;
- (bool)noteIsVisible:(ICNote *)arg1;
- (<ICNoteVisibilityTesting> *)noteVisibilityTestingForSearchingAccount;
- (NSPredicate *)predicateForPinnedNotes;
- (NSPredicate *)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (void)setSubFolderOrderMergeableData:(NSData *)arg1;
- (NSData *)subFolderOrderMergeableData;
- (bool)supportsEditingNotes;
- (NSString *)titleForNavigationBar;
- (NSString *)titleForTableViewCell;
- (void)updateSubFolderMergeableDataChangeCount;
- (NSArray *)visibleNotes;
- (unsigned long long)visibleNotesCount;
- (NSArray *)visibleSubFolders;

@end
