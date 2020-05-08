/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.PaginationTemplateController : UIViewController {
    void $__lazy_storage_$_animator;
    void $__lazy_storage_$_imageProxyQueue;
    void $__lazy_storage_$_leftSwipeGestureRecognizer;
    void $__lazy_storage_$_pageControl;
    void $__lazy_storage_$_reusableViews;
    void $__lazy_storage_$_rightSwipeGestureRecognizer;
    void bottomMarginForPageControl;
    void currentPage;
    void currentPageView;
    void lastContentOffset;
    void lastScrollDirection;
    void playbackEventSubscriber;
    void templateModel;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)leftSwipped:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)rightSwipped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
