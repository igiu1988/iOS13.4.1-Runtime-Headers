/* Generated by EzioChiu.
 */

@protocol CSModalHomeAffordanceControlling <NSObject>

@required

- (UIScreenEdgePanGestureRecognizer *)homeGestureRecognizer;
- (void)registerHomeGestureParticipant:(id <CSModalHomeGestureParticipating>)arg1;
- (void)setHomeGestureRecognizer:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)unregisterHomeGestureParticipant;

@end
