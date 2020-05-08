/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITargetedDragPreview : UITargetedPreview <_UIDragPreviewProvider> {
    NSDictionary * __springboardParameters;
    bool  _didSetLiftAnchorPoint;
    _DUIPreview * _duiPreview;
    _UIDraggingImageComponent * _imageComponent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftAnchorPoint;
    bool  _preventAfterScreenUpdatesSnapshot;
}

@property (nonatomic, readonly) <_UIDragPreviewProvider> *_dragPreviewProvider;
@property (nonatomic, readonly) _DUIPreview *_duiPreview;
@property (nonatomic, readonly) id /* block */ _duiPreviewProvider;
@property (nonatomic, copy) NSDictionary *_springboardParameters;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_isDefaultPreview, setter=_setDefaultPreview:, nonatomic) bool defaultPreview;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } liftAnchorPoint;
@property (getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:, nonatomic) bool preventAfterScreenUpdatesSnapshot;
@property (readonly) Class superclass;
@property (getter=_viewToSnapshot, setter=_setViewToSnapshot:, nonatomic) UIView *viewToSnapshot;

+ (id)previewForURL:(id)arg1 target:(id)arg2;
+ (id)previewForURL:(id)arg1 title:(id)arg2 target:(id)arg3;

- (void).cxx_destruct;
- (id)_dragPreviewProvider;
- (id)_duiPreview;
- (id /* block */)_duiPreviewProvider;
- (bool)_preventAfterScreenUpdatesSnapshot;
- (void)_setPreventAfterScreenUpdatesSnapshot:(bool)arg1;
- (void)_setPreviewMode:(long long)arg1;
- (id)_springboardParameters;
- (id)imageComponent;
- (id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3;
- (struct CGPoint { double x1; double x2; })liftAnchorPoint;
- (id)retargetedPreviewWithTarget:(id)arg1;
- (void)setLiftAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)set_springboardParameters:(id)arg1;
- (void)takeLiftAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;

@end
