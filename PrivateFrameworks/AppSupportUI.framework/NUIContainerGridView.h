/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer> {
    struct _NUIGridArrangement { 
        <_NUIGridArrangementContainer> *container; 
        unsigned int horzDist : 8; 
        unsigned int vertDist : 8; 
        bool baselineRelative; 
        bool hasValidMeasurement; 
        struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { 
            struct _NUIGridArrangementCell {} *__begin_; 
            struct _NUIGridArrangementCell {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { 
                struct _NUIGridArrangementCell {} *__value_; 
            } __end_cap_; 
        } cells; 
        struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { 
                struct _NUIGridArrangementDimension {} *__value_; 
            } __end_cap_; 
        } columns; 
        struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { 
                struct _NUIGridArrangementDimension {} *__value_; 
            } __end_cap_; 
        } rows; 
        struct vector<CGRect, std::__1::allocator<CGRect> > { 
            struct CGRect {} *__begin_; 
            struct CGRect {} *__end_; 
            struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { 
                struct CGRect {} *__value_; 
            } __end_cap_; 
        } viewFrames; 
    }  _arrangement;
    double  _columnWidth;
    NSMutableArray * _columns;
    struct { 
        unsigned int horzAlign : 8; 
        unsigned int vertAlign : 8; 
        unsigned int inInsertOrRemove : 1; 
        unsigned int hasMutations : 1; 
    }  _gridViewFlags;
    double  _rowHeight;
    NSMutableArray * _rows;
    struct CGSize { 
        double width; 
        double height; 
    }  _spacing;
    struct map<UIView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, const std::__1::pair<_NSRange, _NSRange> > > > { 
        struct __tree<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::less<UIView *>, true>, std::__1::allocator<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<UIView *, std::__1::__value_type<UIView *, const std::__1::pair<_NSRange, _NSRange> >, std::__1::less<UIView *>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _viewRanges;
    NSMutableArray * _viewRows;
    struct { 
        unsigned short width; 
        unsigned short height; 
    }  _visibleCount;
}

@property (nonatomic, copy) NSArray *arrangedSubviewRows;
@property (nonatomic) double columnSpacing;
@property (nonatomic) double columnWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long horizontalDistribution;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic) double rowHeight;
@property (nonatomic) double rowSpacing;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long verticalDistribution;

+ (id)containerGridViewWithArrangedSubviewRows:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_baselineViewVendForFirstBaseline:(bool)arg1 fromViews:(id)arg2;
- (struct CGSize { double x1; double x2; })_calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forLayout:(bool)arg2;
- (double)_heightOfRowAtIndex:(long long)arg1;
- (long long)_horizontalAlignmentOfView:(id)arg1 inColumn:(long long)arg2;
- (void)_setupViewRangesIfNeeded;
- (bool)_verifyInternalGridConsistencyWarningOnly:(bool)arg1;
- (long long)_verticalAlignmentOfView:(id)arg1 row:(long long)arg2;
- (double)_widthOfColumnAtIndex:(long long)arg1;
- (id)addColumnWithArrangedSubviews:(id)arg1;
- (id)addRowWithArrangedSubviews:(id)arg1;
- (id)arrangedDescription;
- (id)arrangedSubviewInColumnAtIndex:(long long)arg1 rowAtIndex:(long long)arg2;
- (id)arrangedSubviewRows;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (id)columnAtIndex:(long long)arg1;
- (long long)columnIndexForArrangedSubview:(id)arg1;
- (double)columnSpacing;
- (double)columnWidth;
- (void)dealloc;
- (id)debugArrayForDimension:(id)arg1;
- (id)debugDictionary;
- (id)debugDictionaryForDimensionConfiguration:(id)arg1;
- (id)debugDictionaryForVisibleArrangedSubview:(id)arg1;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)ensureArrangedSubviewsAreValid;
- (void)getColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 rowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 forArrangedSubview:(id)arg3;
- (long long)horizontalAlignment;
- (long long)horizontalDistribution;
- (id)initWithArrangedSubviewRows:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)insertColumnAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (id)insertRowAtIndex:(long long)arg1 withArrangedSubviews:(id)arg2;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)moveColumnAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)moveRowAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;
- (long long)numberOfColumns;
- (long long)numberOfRows;
- (void)populateGridArrangementCells:(struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg1;
- (void)populateGridArrangementDimension:(struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x1; struct _NUIGridArrangementDimension {} *x2; struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension> > { struct _NUIGridArrangementDimension {} *x_3_1_1; } x3; }*)arg1 withCells:(const struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x1; struct _NUIGridArrangementCell {} *x2; struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell> > { struct _NUIGridArrangementCell {} *x_3_1_1; } x3; }*)arg2 axis:(long long)arg3;
- (void)removeColumnAtIndex:(long long)arg1;
- (void)removeRowAtIndex:(long long)arg1;
- (void)replaceArrangedSubview:(id)arg1 inColumnAtIndex:(long long)arg2 rowAtIndex:(long long)arg3;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2;
- (id)rowAtIndex:(long long)arg1;
- (double)rowHeight;
- (long long)rowIndexForArrangedSubview:(id)arg1;
- (double)rowSpacing;
- (void)setArrangedSubviewRows:(id)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setColumnSpacing:(double)arg1;
- (void)setColumnWidth:(double)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setHorizontalDistribution:(long long)arg1;
- (bool)setNeedsInvalidation:(long long)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setVerticalDistribution:(long long)arg1;
- (long long)verticalAlignment;
- (long long)verticalDistribution;
- (id)viewForFirstBaselineLayoutInRowAtIndex:(long long)arg1;
- (id)viewForLastBaselineLayoutInRowAtIndex:(long long)arg1;

@end
