/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleExcerptTraits : NSObject <NSCopying> {
    NUTrait * _bottomMaringTrait;
    NUTrait * _contentMarginTrait;
    NUTrait * _excerptMarginTrait;
    double  _hairlineSeparatorHeight;
    NUTrait * _headlineImageMarginTrait;
    NUTrait * _headlineImageRatioTrait;
    NUTrait * _readMoreMinTopMarginTrait;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _topMarginAboveExcerpt;
    double  _topMarginAboveHairlineSeparator;
    double  _topMarginAboveHeadlineDate;
    double  _topMarginAboveHeadlineTitle;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) double bottomMargin;
@property (nonatomic, retain) NUTrait *bottomMaringTrait;
@property (nonatomic, readonly) double contentMargin;
@property (nonatomic, retain) NUTrait *contentMarginTrait;
@property (nonatomic, readonly) double excerptMargin;
@property (nonatomic, retain) NUTrait *excerptMarginTrait;
@property (nonatomic, readonly) double hairlineSeparatorHeight;
@property (nonatomic, readonly) double headlineImageHeight;
@property (nonatomic, readonly) double headlineImageMargin;
@property (nonatomic, retain) NUTrait *headlineImageMarginTrait;
@property (nonatomic, retain) NUTrait *headlineImageRatioTrait;
@property (nonatomic, readonly) double minTopMaginAboveReadMoreButton;
@property (nonatomic, retain) NUTrait *readMoreMinTopMarginTrait;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double topMarginAboveExcerpt;
@property (nonatomic, readonly) double topMarginAboveHairlineSeparator;
@property (nonatomic, readonly) double topMarginAboveHeadlineDate;
@property (nonatomic, readonly) double topMarginAboveHeadlineTitle;
@property (nonatomic, readonly, copy) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (double)bottomMargin;
- (id)bottomMaringTrait;
- (double)contentMargin;
- (id)contentMarginTrait;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)excerptMargin;
- (id)excerptMarginTrait;
- (double)hairlineSeparatorHeight;
- (double)headlineImageHeight;
- (double)headlineImageMargin;
- (id)headlineImageMarginTrait;
- (id)headlineImageRatioTrait;
- (id)initWithTraitCollection:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (double)minTopMaginAboveReadMoreButton;
- (id)readMoreMinTopMarginTrait;
- (double)scale;
- (void)setBottomMaringTrait:(id)arg1;
- (void)setContentMarginTrait:(id)arg1;
- (void)setExcerptMarginTrait:(id)arg1;
- (void)setHeadlineImageMarginTrait:(id)arg1;
- (void)setHeadlineImageRatioTrait:(id)arg1;
- (void)setReadMoreMinTopMarginTrait:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (double)topMarginAboveExcerpt;
- (double)topMarginAboveHairlineSeparator;
- (double)topMarginAboveHeadlineDate;
- (double)topMarginAboveHeadlineTitle;
- (id)traitCollection;

@end
