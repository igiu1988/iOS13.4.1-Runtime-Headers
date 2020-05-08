/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIClickHighlightInteractionEffect : NSObject <UIInteractionEffect> {
    id /* block */  _completionBlock;
    _UIAnchoredClickHighlightPlatterView * _highlightPlatter;
    long long  _inflightAnimationCount;
    bool  _isActive;
    long long  _phase;
    UITargetedPreview * _targetedPreview;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIAnchoredClickHighlightPlatterView *highlightPlatter;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITargetedPreview *targetedPreview;
@property (nonatomic, readonly) UITargetedPreview *targetedPreviewForEffectContinuation;

- (void).cxx_destruct;
- (void)_completeHighlightEffect;
- (void)_createHighlightPlatter;
- (id /* block */)completionBlock;
- (id)highlightPlatter;
- (id)initWithTargetedPreview:(id)arg1 completion:(id /* block */)arg2;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setHighlightPlatter:(id)arg1;
- (void)setTargetedPreview:(id)arg1;
- (id)targetedPreview;
- (id)targetedPreviewForEffectContinuation;

@end
