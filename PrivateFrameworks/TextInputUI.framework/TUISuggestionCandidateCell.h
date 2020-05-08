/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUISuggestionCandidateCell : TUICandidateBaseCell {
    TIKeyboardCandidateSuggestion * _candidate;
    UILabel * _textLabel;
}

@property (nonatomic, retain) TIKeyboardCandidateSuggestion *candidate;
@property (nonatomic, retain) UILabel *textLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)candidate;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCandidate:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;
- (void)updateLabel;

@end
