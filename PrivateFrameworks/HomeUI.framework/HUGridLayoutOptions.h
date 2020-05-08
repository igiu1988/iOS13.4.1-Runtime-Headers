/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {
    HUGridCameraCellLayoutOptions * _cameraCellOptions;
    double  _columnSpacing;
    unsigned long long  _columnStyle;
    unsigned long long  _contentColorStyle;
    bool  _editing;
    double  _headlineBaselineToFirstStatusItemBaselineDistance;
    double  _headlineBaselineToSceneHeaderBaselineDistance;
    HUGridHeadlineCellLayoutOptions * _headlineCellOptions;
    UIFont * _headlineFont;
    bool  _headlineHidden;
    double  _lastStatusItemBaselineToStatusDetailsBaselineDistance;
    unsigned long long  _maxStatusItemCount;
    unsigned long long  _maxStatusItemNumberOfLines;
    double  _minimumMarginBelowHeadline;
    double  _minimumMarginBelowStatus;
    HUNavigationBarLayoutOptions * _navigationBarOptions;
    long long  _numberOfCameraCellsPerRow;
    NSNumber * _overrideNumberOfColumns;
    NSNumber * _overrideViewSizeSubclass;
    double  _rowSpacing;
    HUGridSceneCellLayoutOptions * _sceneCellOptions;
    long long  _scrollDirection;
    double  _sectionBottomMargin;
    double  _sectionBottomToNextSectionTitleBaselineDistance;
    UIFont * _sectionHeaderFont;
    double  _sectionLeadingMargin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionTitleMargin;
    double  _sectionTopMargin;
    double  _sectionTrailingMargin;
    HUGridServiceCellLayoutOptions * _serviceCellOptions;
    HUGridStatusBannerCellLayoutOptions * _statusBannerCellOptions;
    double  _statusDetailsBaselineToFirstSectionTitleBaselineDistance;
    UIFont * _statusDetailsFont;
    bool  _statusHidden;
    double  _statusItemBaselineToNextStatusItemBaselineDistance;
    UIFont * _statusItemFont;
    double  _topOfViewToFirstStatusItemBaselineDistance;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (nonatomic, readonly) double cameraCellHeight;
@property (nonatomic, copy) HUGridCameraCellLayoutOptions *cameraCellOptions;
@property (nonatomic, readonly) double cameraCellWidth;
@property (nonatomic, readonly) long long cellSizeSubclass;
@property (nonatomic) double columnSpacing;
@property (nonatomic) unsigned long long columnStyle;
@property (nonatomic) unsigned long long contentColorStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headlineBaselineToFirstStatusItemBaselineDistance;
@property (nonatomic) double headlineBaselineToSceneHeaderBaselineDistance;
@property (nonatomic, readonly) double headlineCellHeight;
@property (nonatomic, copy) HUGridHeadlineCellLayoutOptions *headlineCellOptions;
@property (nonatomic, retain) UIFont *headlineFont;
@property (nonatomic) bool headlineHidden;
@property (nonatomic, readonly) double largeTitleCellTopMargin;
@property (nonatomic) double lastStatusItemBaselineToStatusDetailsBaselineDistance;
@property (nonatomic) unsigned long long maxStatusItemCount;
@property (nonatomic) unsigned long long maxStatusItemNumberOfLines;
@property (nonatomic) double minimumMarginBelowHeadline;
@property (nonatomic) double minimumMarginBelowStatus;
@property (nonatomic, copy) HUNavigationBarLayoutOptions *navigationBarOptions;
@property (nonatomic, readonly) long long numberOfCameraCellsPerRow;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, retain) NSNumber *overrideNumberOfColumns;
@property (nonatomic, retain) NSNumber *overrideViewSizeSubclass;
@property (nonatomic, readonly) double pointWidthForCurrentViewSizeSubclass;
@property (nonatomic, readonly) double pointWidthForFullWidthCell;
@property (nonatomic) double rowSpacing;
@property (nonatomic, copy) HUGridSceneCellLayoutOptions *sceneCellOptions;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) double sectionBottomMargin;
@property (nonatomic) double sectionBottomToNextSectionTitleBaselineDistance;
@property (nonatomic, readonly) double sectionHeaderCellHeight;
@property (nonatomic, retain) UIFont *sectionHeaderFont;
@property (nonatomic) double sectionLeadingMargin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionTitleMargin;
@property (nonatomic) double sectionTopMargin;
@property (nonatomic) double sectionTrailingMargin;
@property (nonatomic, copy) HUGridServiceCellLayoutOptions *serviceCellOptions;
@property (nonatomic, copy) HUGridStatusBannerCellLayoutOptions *statusBannerCellOptions;
@property (nonatomic) double statusDetailsBaselineToFirstSectionTitleBaselineDistance;
@property (nonatomic, retain) UIFont *statusDetailsFont;
@property (nonatomic) bool statusHidden;
@property (nonatomic) double statusItemBaselineToNextStatusItemBaselineDistance;
@property (nonatomic, retain) UIFont *statusItemFont;
@property (nonatomic, readonly) double statusListCellBottomMargin;
@property (nonatomic, readonly) double statusListCellHeight;
@property (readonly) Class superclass;
@property (nonatomic) double topOfViewToFirstStatusItemBaselineDistance;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic, readonly) long long viewSizeSubclass;

+ (unsigned long long)_numberOfColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 columnStyle:(unsigned long long)arg2;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3;
+ (id)defaultOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 overrideSizeSubclass:(long long)arg2;

- (void).cxx_destruct;
- (id)_childDisplayOptions;
- (double)_pointWidthForFixedColumnStyleWithFractionalNumberOfColumns:(double)arg1;
- (double)_pointWidthForFlexibleColumnStyleWithFractionalNumberOfColumns:(double)arg1 totalNumberOfColumns:(long long)arg2 totalWidth:(double)arg3;
- (double)_pointWidthForFractionalNumberOfColumns:(double)arg1;
- (double)_preferredSectionHeightForNumberOfRows:(unsigned long long)arg1 withCellHeight:(double)arg2;
- (double)cameraCellHeight;
- (id)cameraCellOptions;
- (double)cameraCellWidth;
- (long long)cellSizeSubclass;
- (double)columnSpacing;
- (unsigned long long)columnStyle;
- (unsigned long long)contentColorStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)headlineBaselineToFirstStatusItemBaselineDistance;
- (double)headlineBaselineToSceneHeaderBaselineDistance;
- (double)headlineCellHeight;
- (id)headlineCellOptions;
- (id)headlineFont;
- (bool)headlineHidden;
- (id)initWithViewSize:(struct CGSize { double x1; double x2; })arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3;
- (bool)isEditing;
- (double)largeTitleCellTopMargin;
- (double)lastStatusItemBaselineToStatusDetailsBaselineDistance;
- (unsigned long long)maxStatusItemCount;
- (unsigned long long)maxStatusItemNumberOfLines;
- (double)minimumMarginBelowHeadline;
- (double)minimumMarginBelowStatus;
- (id)navigationBarOptions;
- (long long)numberOfCameraCellsPerRow;
- (long long)numberOfColumns;
- (id)overrideNumberOfColumns;
- (id)overrideViewSizeSubclass;
- (double)pointWidthForCurrentViewSizeSubclass;
- (double)pointWidthForFullWidthCell;
- (double)pointWidthForNumberOfColumns:(long long)arg1;
- (double)preferredSectionHeightForNumberOfSceneRows:(unsigned long long)arg1;
- (double)preferredSectionHeightForNumberOfServiceRows:(unsigned long long)arg1 spanningColumns:(unsigned long long)arg2;
- (double)rowSpacing;
- (id)sceneCellOptions;
- (long long)scrollDirection;
- (double)sectionBottomMargin;
- (double)sectionBottomToNextSectionTitleBaselineDistance;
- (double)sectionHeaderCellHeight;
- (id)sectionHeaderFont;
- (double)sectionLeadingMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionTitleMargin;
- (double)sectionTopMargin;
- (double)sectionTrailingMargin;
- (id)serviceCellOptions;
- (void)setCameraCellOptions:(id)arg1;
- (void)setColumnSpacing:(double)arg1;
- (void)setColumnStyle:(unsigned long long)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setEditing:(bool)arg1;
- (void)setHeadlineBaselineToFirstStatusItemBaselineDistance:(double)arg1;
- (void)setHeadlineBaselineToSceneHeaderBaselineDistance:(double)arg1;
- (void)setHeadlineCellOptions:(id)arg1;
- (void)setHeadlineFont:(id)arg1;
- (void)setHeadlineHidden:(bool)arg1;
- (void)setLastStatusItemBaselineToStatusDetailsBaselineDistance:(double)arg1;
- (void)setMaxStatusItemCount:(unsigned long long)arg1;
- (void)setMaxStatusItemNumberOfLines:(unsigned long long)arg1;
- (void)setMinimumMarginBelowHeadline:(double)arg1;
- (void)setMinimumMarginBelowStatus:(double)arg1;
- (void)setNavigationBarOptions:(id)arg1;
- (void)setOverrideNumberOfColumns:(id)arg1;
- (void)setOverrideViewSizeSubclass:(id)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setSceneCellOptions:(id)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setSectionBottomMargin:(double)arg1;
- (void)setSectionBottomToNextSectionTitleBaselineDistance:(double)arg1;
- (void)setSectionHeaderFont:(id)arg1;
- (void)setSectionLeadingMargin:(double)arg1;
- (void)setSectionTitleMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionTopMargin:(double)arg1;
- (void)setSectionTrailingMargin:(double)arg1;
- (void)setServiceCellOptions:(id)arg1;
- (void)setStatusBannerCellOptions:(id)arg1;
- (void)setStatusDetailsBaselineToFirstSectionTitleBaselineDistance:(double)arg1;
- (void)setStatusDetailsFont:(id)arg1;
- (void)setStatusHidden:(bool)arg1;
- (void)setStatusItemBaselineToNextStatusItemBaselineDistance:(double)arg1;
- (void)setStatusItemFont:(id)arg1;
- (void)setTopOfViewToFirstStatusItemBaselineDistance:(double)arg1;
- (id)statusBannerCellOptions;
- (double)statusDetailsBaselineToFirstSectionTitleBaselineDistance;
- (id)statusDetailsFont;
- (bool)statusHidden;
- (double)statusItemBaselineToNextStatusItemBaselineDistance;
- (id)statusItemFont;
- (double)statusListCellBottomMargin;
- (double)statusListCellHeight;
- (double)statusListCellTopMargin:(bool)arg1 forStatusBannerWidth:(double)arg2 havingTitleAndDescription:(id)arg3 contentSizeCategory:(id)arg4;
- (double)topOfViewToFirstStatusItemBaselineDistance;
- (struct CGSize { double x1; double x2; })viewSize;
- (long long)viewSizeSubclass;

@end
