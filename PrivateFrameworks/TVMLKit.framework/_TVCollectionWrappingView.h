/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVCollectionWrappingView : UIView <TVRowHosting> {
    bool  _centered;
    long long  _collectionGradientMask;
    _TVCollectionView * _collectionView;
    struct { 
        bool respondsToAugmentedSelectionFrameForFrame; 
    }  _collectionViewFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _footerFrame;
    UIView * _footerView;
    CAGradientLayer * _gradientLayer;
    bool  _headerAuxiliarySelecting;
    bool  _headerCanBecomeFocused;
    bool  _headerFloating;
    bool  _headerFocused;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerFrame;
    bool  _headerHidden;
    double  _headerSelectionMargin;
    UIView * _headerView;
    IKColor * _ikBackgroundColor;
    UIView * _selectingView;
    struct TVShowcaseConfig { 
        long long flavor; 
        long long transition; 
        double inset; 
    }  _showcaseConfig;
    double  _showcaseFactor;
}

@property (getter=isCentered, nonatomic) bool centered;
@property (nonatomic) long long collectionGradientMask;
@property (nonatomic, retain) _TVCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (getter=isHeaderAuxiliarySelecting, nonatomic) bool headerAuxiliarySelecting;
@property (nonatomic) bool headerCanBecomeFocused;
@property (getter=isHeaderFloating, nonatomic) bool headerFloating;
@property (getter=isHeaderFocused, nonatomic) bool headerFocused;
@property (getter=isHeaderHidden, nonatomic) bool headerHidden;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) IKColor *ikBackgroundColor;
@property (nonatomic, readonly) bool shouldBindRowsTogether;
@property (nonatomic) struct TVShowcaseConfig { long long x1; long long x2; double x3; } showcaseConfig;
@property (readonly) Class superclass;

+ (void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 gradientLengths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 gradientInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg4 gradientBoundsInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedHeaderFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_adjustedPadding;
- (double)_adjustedShowcaseFactor;
- (id)_collectionRowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 forShowcase:(bool)arg3;
- (id)_currentFooterView;
- (id)_currentHeaderView;
- (double)_showcaseContentScaleForExpectedWidth:(double)arg1;
- (void)_updateGradientLayer;
- (void)_updateSubviews;
- (long long)collectionGradientMask;
- (id)collectionView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)footerView;
- (bool)headerCanBecomeFocused;
- (double)headerSelectionMargin;
- (id)headerView;
- (id)ikBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCentered;
- (bool)isHeaderAuxiliarySelecting;
- (bool)isHeaderFloating;
- (bool)isHeaderFocused;
- (bool)isHeaderHidden;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)reevaluateFooterFrame;
- (void)reevaluateHeaderFrame;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;
- (void)setCentered:(bool)arg1;
- (void)setCollectionGradientMask:(long long)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderAuxiliarySelecting:(bool)arg1;
- (void)setHeaderCanBecomeFocused:(bool)arg1;
- (void)setHeaderFloating:(bool)arg1;
- (void)setHeaderFocused:(bool)arg1;
- (void)setHeaderHidden:(bool)arg1;
- (void)setHeaderSelectionMargin:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setIkBackgroundColor:(id)arg1;
- (void)setShowcaseConfig:(struct TVShowcaseConfig { long long x1; long long x2; double x3; })arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (bool)shouldBindRowsTogether;
- (struct TVShowcaseConfig { long long x1; long long x2; double x3; })showcaseConfig;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tv_setShowcaseFactor:(double)arg1;

@end
