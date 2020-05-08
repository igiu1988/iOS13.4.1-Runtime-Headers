/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUViewControllerCollectionViewCell : UICollectionViewCell <HUViewControllerCell> {
    bool  _allowSelfSizing;
    UIViewController * _parentViewController;
    UIViewController * _viewController;
}

@property (nonatomic) bool allowSelfSizing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_removeFromParentViewControllerAndClearProperty:(bool)arg1;
- (void)addToParentViewController:(id)arg1;
- (bool)allowSelfSizing;
- (id)parentViewController;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)removeFromParentViewController;
- (void)setAllowSelfSizing:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)viewController;

@end
