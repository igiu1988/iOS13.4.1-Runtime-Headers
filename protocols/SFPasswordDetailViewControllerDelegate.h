/* Generated by EzioChiu.
 */

@protocol SFPasswordDetailViewControllerDelegate <NSObject>

@optional

- (WBSSavedPasswordAuditor *)passwordAuditorForPasswordDetailViewController:(SFPasswordDetailViewController *)arg1;
- (void)passwordDetailViewControllerDidUpdate:(SFPasswordDetailViewController *)arg1;
- (WBSPasswordEvaluator *)passwordEvaluatorForPasswordDetailViewController:(SFPasswordDetailViewController *)arg1;

@end
