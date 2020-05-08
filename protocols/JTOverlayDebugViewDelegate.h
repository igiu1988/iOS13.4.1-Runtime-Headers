/* Generated by EzioChiu.
 */

@protocol JTOverlayDebugViewDelegate <NSObject>

@optional

- (NSArray *)overlayDebugViewAdditionalNonTrackedRectsToDraw;
- (NSArray *)overlayDebugViewAdditionalTrackedRectsToDraw;
- (UIColor *)overlayDebugViewNonTrackedCornerPoint0Color;
- (UIColor *)overlayDebugViewNonTrackedCornerPoint1Color;
- (UIColor *)overlayDebugViewNonTrackedCornerPoint2Color;
- (UIColor *)overlayDebugViewNonTrackedCornerPoint3Color;
- (UIColor *)overlayDebugViewNonTrackedDocumentBoundingBoxColor;
- (UIColor *)overlayDebugViewNonTrackedMidpointColor;
- (UIColor *)overlayDebugViewNonTrackedObjectAlignedBoundingBoxColor;
- (NSNumber *)overlayDebugViewShowCornerPoints;
- (NSNumber *)overlayDebugViewShowDocumentBoundingBox;
- (NSNumber *)overlayDebugViewShowMidpoint;
- (NSNumber *)overlayDebugViewShowNonTrackedWhenTracking;
- (NSNumber *)overlayDebugViewShowObjectAlignedBoundingBox;
- (UIColor *)overlayDebugViewTrackedCornerPoint0Color;
- (UIColor *)overlayDebugViewTrackedCornerPoint1Color;
- (UIColor *)overlayDebugViewTrackedCornerPoint2Color;
- (UIColor *)overlayDebugViewTrackedCornerPoint3Color;
- (UIColor *)overlayDebugViewTrackedDocumentBoundingBoxColor;
- (UIColor *)overlayDebugViewTrackedMidpointColor;
- (UIColor *)overlayDebugViewTrackedObjectAlignedBoundingBoxColor;

@end
