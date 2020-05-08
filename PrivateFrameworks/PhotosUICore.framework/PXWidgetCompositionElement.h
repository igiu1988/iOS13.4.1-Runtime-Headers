/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXWidgetCompositionElement : NSObject <PXWidgetBarDelegate, PXWidgetDelegate> {
    PXWidgetBar * __footer;
    PXWidgetBar * __header;
    bool  __isNotifyingWidget;
    NSHashTable * __observers;
    PXTilingController * _animationOptionsOriginatingTilingController;
    <PXWidgetCompositionElementDelegate> * _delegate;
    struct { 
        bool respondsToTransitionToViewControllerPreferredTransitionType; 
        bool respondsToRequestViewControllerDismissalAnimated; 
    }  _delegateFlags;
    bool  _isPerformingChanges;
    PXScrollViewController * _scrollViewController;
    bool  _shouldLoadWidgetContent;
    PXWidgetCompositionSpec * _spec;
    <PXWidget> * _widget;
    struct CGSize { 
        double width; 
        double height; 
    }  _widgetContentSize;
}

@property (nonatomic, readonly) PXWidgetBar *_footer;
@property (nonatomic, readonly) PXWidgetBar *_header;
@property (setter=_setNotifyingWidget:, nonatomic) bool _isNotifyingWidget;
@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) PXTilingController *animationOptionsOriginatingTilingController;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXWidgetCompositionElementDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXTilingController *footerTilingController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXTilingController *headerTilingController;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic) bool shouldLoadWidgetContent;
@property (nonatomic, retain) PXWidgetCompositionSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXWidget> *widget;
@property (nonatomic) struct CGSize { double x1; double x2; } widgetContentSize;

+ (id)elementWithWidget:(id)arg1 scrollViewController:(id)arg2;
+ (Class)footerBarClass;
+ (Class)headerBarClass;

- (void).cxx_destruct;
- (id)_footer;
- (id)_header;
- (void)_invalidateFooter;
- (void)_invalidateHeader;
- (bool)_isNotifyingWidget;
- (void)_notifyWidgetUsingBlock:(id /* block */)arg1;
- (id)_observers;
- (void)_performChanges:(id /* block */)arg1 withAnimationOptions:(id)arg2;
- (void)_performContentChangeWhenSafe:(id /* block */)arg1;
- (void)_setNotifyingWidget:(bool)arg1;
- (void)_updateFooter;
- (void)_updateHeader;
- (id)animationOptionsOriginatingTilingController;
- (id)contentTilingController;
- (id)delegate;
- (id)extendedTraitCollection;
- (id)footerTilingController;
- (id)headerTilingController;
- (id)init;
- (id)initWithWidget:(id)arg1 scrollViewController:(id)arg2;
- (void)prepare;
- (void)registerObserver:(id)arg1;
- (void)saveAnchoring;
- (id)scrollViewController;
- (void)setDelegate:(id)arg1;
- (void)setShouldLoadWidgetContent:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetContentSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldLoadWidgetContent;
- (id)spec;
- (void)unregisterObserver:(id)arg1;
- (id)widget;
- (void)widget:(id)arg1 animateChanges:(id /* block */)arg2 withAnimationOptions:(id)arg3;
- (bool)widget:(id)arg1 requestViewControllerDismissalAnimated:(bool)arg2;
- (bool)widget:(id)arg1 transitionToViewController:(id)arg2 withTransitionType:(long long)arg3;
- (void)widgetBarDidSelectDisclosureAffordance:(id)arg1;
- (void)widgetBarDidSelectSubtitle:(id)arg1;
- (struct CGSize { double x1; double x2; })widgetContentSize;
- (long long)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id)arg1;
- (id)widgetExtendedTraitCollection:(id)arg1;
- (void)widgetHasLoadedContentDataDidChange:(id)arg1;
- (void)widgetInvalidateContentLayoutStyle:(id)arg1;
- (void)widgetInvalidateContentViewAnchoringType:(id)arg1;
- (void)widgetLocalizedCaptionDidChange:(id)arg1;
- (void)widgetLocalizedDisclosureTitleDidChange:(id)arg1;
- (void)widgetLocalizedSubtitleDidChange:(id)arg1;
- (void)widgetLocalizedTitleDidChange:(id)arg1;
- (void)widgetPreferredContentHeightForWidthDidChange:(id)arg1;
- (void)widgetRequestFocus:(id)arg1;
- (id)widgetScrollViewControllerHostingWidget:(id)arg1;
- (id)widgetViewControllerHostingWidget:(id)arg1;
- (id)widgetViewHostingGestureRecognizers:(id)arg1;

@end
