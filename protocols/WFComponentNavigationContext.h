/* Generated by EzioChiu.
 */

@protocol WFComponentNavigationContext <NSObject>

@required

- (UIViewController *)componentHostingViewController;

@optional

- (void)componentDidEndEditingSession:(id <WFComponentEditingSession>)arg1;
- (void)componentPresentDocumentationForAction:(WFAction *)arg1 withSourceView:(UIView *)arg2;
- (void)componentPresentWorkflowSettings;
- (void)componentWillBeginEditingSession:(id <WFComponentEditingSession>)arg1;

@end
