/* Generated by EzioChiu.
 */

@protocol WFLibraryRunCoordinatorObserver <NSObject>

@optional

- (void)runCoordinator:(WFLibraryRunCoordinator *)arg1 didChangeRunningStateWithProgress:(double)arg2 forWorkflow:(WFWorkflowReference *)arg3;
- (void)runCoordinator:(WFLibraryRunCoordinator *)arg1 didFinishRunningWorkflow:(WFWorkflowReference *)arg2 withError:(NSError *)arg3;

@end
