/* Generated by EzioChiu.
 */

@protocol FCForYouMagazineFeedManaging <FCForYouBridgedFeedGroupStore>

@required

- (<FCForYouMagazineFeedCursor> *)cursorForTopOfFeed;
- (void)fetchNextGroupFromCursor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: <FCForYouMagazineFeedCursor> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCForYouBridgedFeedGroup> *, <FCForYouMagazineFeedCursor> *, NSError *, void*
- (void)fetchNextGroupFromCursor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: <FCForYouMagazineFeedCursor> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCForYouBridgedFeedGroup> *, <FCForYouMagazineFeedCursor> *, NSError *, void*
- (<FCForYouMagazineFeedCursor> *)knownCursorForIdentifier:(NSString *)arg1;
- (<FCForYouMagazineFeedCursor> *)knownCursorForIdentifier:(NSString *)arg1;

@end
