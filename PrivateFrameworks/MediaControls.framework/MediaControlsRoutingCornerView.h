/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsRoutingCornerView : CCUICAPackageView <_UICursorInteractionDelegate> {
    long long  _deviceType;
    bool  _routesAvailable;
    bool  _routing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (getter=routesAreAvailable, nonatomic) bool routesAvailable;
@property (getter=isRouting, nonatomic) bool routing;
@property (readonly) Class superclass;

- (void)_updateGlyph;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint { double x1; double x2; })arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (long long)deviceType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRouting;
- (bool)routesAreAvailable;
- (void)setDeviceType:(long long)arg1;
- (void)setRoutesAvailable:(bool)arg1;
- (void)setRouting:(bool)arg1;

@end
