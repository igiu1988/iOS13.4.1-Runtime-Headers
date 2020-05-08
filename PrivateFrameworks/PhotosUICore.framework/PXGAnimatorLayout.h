/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXGAnimatorLayout : NSObject {
    PXGAnimator * _animator;
    PXGLayout * _inputLayout;
}

@property (nonatomic, readonly) PXGAnimator *animator;
@property (nonatomic, retain) PXGLayout *inputLayout;

- (void).cxx_destruct;
- (id)animator;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)enumerateDescendantsLayoutsUsingBlock:(id /* block */)arg1;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)fences;
- (id)init;
- (id)initWithAnimator:(id)arg1;
- (id)inputLayout;
- (bool)isSpriteIndex:(unsigned int)arg1 decoratingSpriteWithIndex:(out unsigned int*)arg2;
- (unsigned int)numberOfSprites;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)removeAllFences;
- (void)setInputLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
