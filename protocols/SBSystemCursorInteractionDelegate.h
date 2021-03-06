/* Generated by EzioChiu.
 */

@protocol SBSystemCursorInteractionDelegate <NSObject>

@required

- (bool)shouldBeginCursorInteractionAtLocation:(struct CGPoint { double x1; double x2; })arg1 forView:(UIView *)arg2;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cursorInteractionHitTestInsetsForView:(UIView *)arg1;
- (_UICursorRegion *)regionAtLocation:(struct CGPoint { double x1; double x2; })arg1 forView:(UIView *)arg2;
- (_UICursorStyle *)styleForRegion:(_UICursorRegion *)arg1 forView:(UIView *)arg2;

@end
