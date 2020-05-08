/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListView : UIScrollView {
    bool  _activeRevealTransitioning;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    bool  _cachedSizeValid;
    <NCNotificationListViewDataSource> * _dataSource;
    UIView * _footerView;
    bool  _grouped;
    double  _groupedTranslation;
    UIView * _headerView;
    NSMutableSet * _insertedViewIndices;
    bool  _leadingRevealView;
    bool  _performedFirstLayout;
    bool  _performingContentRevealAnimation;
    bool  _performingGroupingAnimation;
    bool  _performingHeaderReloadAnimation;
    bool  _performingRevealAnimation;
    bool  _performingVisibleRectAdjustment;
    NSMutableSet * _reloadedViewIndices;
    unsigned long long  _removedViewIndex;
    unsigned long long  _revealIndexOffset;
    double  _revealPercentage;
    bool  _revealed;
    bool  _subviewPerformingGroupingAnimation;
    UILabel * _titleLabel;
    NSMutableSet * _viewsPerformingAnimation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
    NSMutableDictionary * _visibleViews;
}

@property (getter=isActiveRevealTransitioning, nonatomic) bool activeRevealTransitioning;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedSize;
@property (getter=isCachedSizeValid, nonatomic) bool cachedSizeValid;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) <NCNotificationListViewDataSource> *dataSource;
@property (nonatomic, retain) UIView *footerView;
@property (getter=isGrouped, nonatomic) bool grouped;
@property (nonatomic) double groupedTranslation;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) NSMutableSet *insertedViewIndices;
@property (getter=isLeadingRevealView, nonatomic) bool leadingRevealView;
@property (getter=isNotificationListViewCurrentlyVisible, nonatomic, readonly) bool notificationListViewCurrentlyVisible;
@property (getter=hasPerformedFirstLayout, nonatomic) bool performedFirstLayout;
@property (getter=isPerformingContentRevealAnimation, nonatomic) bool performingContentRevealAnimation;
@property (getter=isPerformingGroupingAnimation, nonatomic) bool performingGroupingAnimation;
@property (getter=isPerformingHeaderReloadAnimation, nonatomic) bool performingHeaderReloadAnimation;
@property (getter=isPerformingRevealAnimation, nonatomic) bool performingRevealAnimation;
@property (getter=isPerformingVisibleRectAdjustment, nonatomic) bool performingVisibleRectAdjustment;
@property (nonatomic, retain) NSMutableSet *reloadedViewIndices;
@property (nonatomic) unsigned long long removedViewIndex;
@property (nonatomic) unsigned long long revealIndexOffset;
@property (nonatomic) double revealPercentage;
@property (getter=isRevealed, nonatomic) bool revealed;
@property (getter=isSubviewPerformingGroupingAnimation, nonatomic) bool subviewPerformingGroupingAnimation;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSMutableSet *viewsPerformingAnimation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic, retain) NSMutableDictionary *visibleViews;

- (void).cxx_destruct;
- (void)_adjustContentSizeIfNecessaryForUpdatedHeight:(double)arg1;
- (double)_adjustedFrictionForRevealAnimation;
- (double)_adjustedTensionForRevealAnimation;
- (void)_configureClippingIfNecessary;
- (void)_configureStackDimmingForGroupedView:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)_footerViewFromDataSource;
- (double)_footerViewHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForViewAtIndex:(unsigned long long)arg1;
- (id)_headerViewFromDataSource;
- (double)_headerViewHeight;
- (bool)_isGrouping;
- (bool)_isTopSubviewHeightLessThanVisibleRect;
- (bool)_isViewWithinVisibleRectForHeight:(double)arg1 layoutOffset:(double)arg2;
- (bool)_isVisibleView:(id)arg1;
- (void)_layoutFooterViewForGroupingIfNecessary;
- (void)_layoutFooterViewIfNecessaryAtLayoutOffset:(double)arg1;
- (void)_layoutForGrouping;
- (void)_layoutForList;
- (void)_layoutGroupedViewForGroupingLayout:(id)arg1 atIndex:(unsigned long long)arg2 isExistingView:(bool)arg3 leadingViewHeight:(double)arg4;
- (void)_layoutHeaderViewForGroupingIfNecessary;
- (void)_layoutHeaderViewIfNecessaryAtLayoutOffset:(double)arg1;
- (void)_layoutHiddenViewsForGroupingLayoutIfNecessaryWithLeadingViewHeight:(double)arg1;
- (void)_layoutLeadingViewForGroupingLayoutIfNecessary:(id)arg1 hasShadow:(bool)arg2;
- (double)_layoutViewIfNecessaryAtIndex:(unsigned long long)arg1 layoutOffset:(double)arg2;
- (id)_listViewForView:(id)arg1;
- (void)_performAnimationForView:(id)arg1 atIndex:(unsigned long long)arg2 animationBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)_performInsertionAnimationForView:(id)arg1;
- (void)_performRemovalAnimationForView:(id)arg1;
- (void)_performViewAnimationBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)_performViewAnimationBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 withTension:(double)arg3 friction:(double)arg4;
- (double)_positionOffsetForRevealHintingForHeaderView;
- (double)_positionOffsetForRevealHintingForItemAtIndex:(unsigned long long)arg1;
- (void)_recycleViewIfNecessary:(id)arg1;
- (void)_recycleViewIfNecessary:(id)arg1 withDataSource:(id)arg2;
- (void)_removeAllStoredVisibleViews;
- (void)_removeStoredVisibleViewAtIndex:(unsigned long long)arg1;
- (void)_resetClipping;
- (double)_revealAnimationDelayForObjectAtIndex:(unsigned long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_scaleTransformForGroupingAnimationForViewAtIndex:(unsigned long long)arg1 leadingViewHeight:(double)arg2;
- (void)_setContentHiddenForGroupedView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_setVisibleView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_setupClipping;
- (bool)_shouldPerformClipping;
- (void)_updateStoredVisibleViewsForViewInsertedAtIndex:(unsigned long long)arg1;
- (void)_updateStoredVisibleViewsForViewRemovedAtIndex:(unsigned long long)arg1;
- (void)_updateVisibleViewsForUpdatedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_verticalVelocityForSuperview;
- (id)_visibleViewAtIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })cachedSize;
- (unsigned long long)count;
- (id)dataSource;
- (void)didMoveToSuperview;
- (id)footerView;
- (double)groupedTranslation;
- (bool)hasPerformedFirstLayout;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertViewAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (id)insertedViewIndices;
- (void)invalidateData;
- (bool)isActiveRevealTransitioning;
- (bool)isCachedSizeValid;
- (bool)isGrouped;
- (bool)isLeadingRevealView;
- (bool)isNotificationListViewCurrentlyVisible;
- (bool)isPerformingContentRevealAnimation;
- (bool)isPerformingGroupingAnimation;
- (bool)isPerformingHeaderReloadAnimation;
- (bool)isPerformingRevealAnimation;
- (bool)isPerformingVisibleRectAdjustment;
- (bool)isRevealed;
- (bool)isSubviewPerformingGroupingAnimation;
- (bool)isVisibleForViewAtIndex:(unsigned long long)arg1;
- (double)layoutOffsetForViewAtIndex:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)recycleVisibleViews;
- (void)reloadHeaderView;
- (void)reloadViewAtIndex:(unsigned long long)arg1;
- (id)reloadedViewIndices;
- (void)removeViewAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (unsigned long long)removedViewIndex;
- (unsigned long long)revealIndexOffset;
- (void)revealNotificationContentBelowGroupedViewIfNecessary:(id)arg1;
- (double)revealPercentage;
- (void)setActiveRevealTransitioning:(bool)arg1;
- (void)setCachedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedSizeValid:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGrouped:(bool)arg1;
- (void)setGroupedTranslation:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInsertedViewIndices:(id)arg1;
- (void)setLeadingRevealView:(bool)arg1;
- (void)setPerformedFirstLayout:(bool)arg1;
- (void)setPerformingContentRevealAnimation:(bool)arg1;
- (void)setPerformingGroupingAnimation:(bool)arg1;
- (void)setPerformingHeaderReloadAnimation:(bool)arg1;
- (void)setPerformingRevealAnimation:(bool)arg1;
- (void)setPerformingVisibleRectAdjustment:(bool)arg1;
- (void)setReloadedViewIndices:(id)arg1;
- (void)setRemovedViewIndex:(unsigned long long)arg1;
- (void)setRevealIndexOffset:(unsigned long long)arg1;
- (void)setRevealPercentage:(double)arg1;
- (void)setRevealed:(bool)arg1;
- (void)setSubviewPerformingGroupingAnimation:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setViewsPerformingAnimation:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleViews:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)viewsPerformingAnimation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (id)visibleViews;

@end
