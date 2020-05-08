/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIReviewItemCell : SiriUIContentCollectionViewCell {
    UILabel * _authorLabel;
    long long  _characterLimit;
    UILabel * _commentLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _ratingOffset;
    UIView * _ratingView;
}

@property (nonatomic) long long characterLimit;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;

+ (id)_authorDateFontAttribute;
+ (id)_authorFontAttribute;
+ (id)_commentLabelFont;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultEdgeInsets;
+ (id)_displayTextForComment:(id)arg1 characterLimit:(long long)arg2;
+ (long long)defaultCharacterLimit;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withReview:(id)arg2 characterLimit:(long long)arg3;

- (void).cxx_destruct;
- (id)_relativeStringFromDate:(id)arg1;
- (void)_setAuthor:(id)arg1 andDate:(id)arg2 timeZoneId:(id)arg3 hasRatingView:(bool)arg4;
- (void)_setComment:(id)arg1;
- (void)_setRatingView:(id)arg1;
- (long long)characterLimit;
- (void)configureWithReview:(id)arg1 ratingView:(id)arg2 offset:(struct UIOffset { double x1; double x2; })arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCharacterLimit:(long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
