/* Generated by EzioChiu.
 */

@protocol WFLibraryWorkflowCellDelegate <WFBaseLibraryWorkflowCellDelegate>

@optional

- (void)workflowCellDidRequestComposeUI:(WFLibraryWorkflowCell *)arg1 forWorkflowReference:(WFWorkflowReference *)arg2;
- (void)workflowCellDidRequestDelete:(WFLibraryWorkflowCell *)arg1;
- (void)workflowCellDidRequestDuplicate:(WFLibraryWorkflowCell *)arg1;
- (void)workflowCellDidRequestRename:(WFLibraryWorkflowCell *)arg1;

@end