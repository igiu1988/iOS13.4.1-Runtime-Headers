/* Generated by EzioChiu.
 */

@protocol WFListEditorViewDelegate <NSObject>

@required

- (void)listEditorView:(WFListEditorView *)arg1 didUpdateWithItem:(WFListEditorUpdateItem *)arg2;

@optional

- (void)listEditorView:(WFListEditorView *)arg1 needsConfirmationForDeletion:(WFListEditorDeletionConfirmation *)arg2;

@end
