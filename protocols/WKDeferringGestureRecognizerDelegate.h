/* Generated by EzioChiu.
 */

@protocol WKDeferringGestureRecognizerDelegate

@required

- (bool)deferringGestureRecognizer:(WKDeferringGestureRecognizer *)arg1 shouldDeferGesturesAfterBeginningTouchesWithEvent:(UIEvent *)arg2;
- (bool)deferringGestureRecognizer:(WKDeferringGestureRecognizer *)arg1 shouldDeferGesturesAfterEndingTouchesWithEvent:(UIEvent *)arg2;
- (bool)deferringGestureRecognizer:(WKDeferringGestureRecognizer *)arg1 shouldDeferOtherGestureRecognizer:(UIGestureRecognizer *)arg2;

@end
