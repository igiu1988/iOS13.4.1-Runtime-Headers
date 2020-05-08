/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIMultiChoiceView : UIView {
    UIColor * _backgroundColor;
    NSMutableArray * _buttonsWidthConstraint;
    NSMutableArray * _choiceButtons;
    NSMutableArray * _choices;
    UIStackView * _stackView;
    <RUIMultiChoiceActionHandler> * _target;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) <RUIMultiChoiceActionHandler> *target;

- (void).cxx_destruct;
- (void)addChoice:(id)arg1;
- (id)backgroundColor;
- (void)didTapChoice:(id)arg1;
- (double)estimatedHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setChoiceHidden:(bool)arg1 atIndex:(unsigned long long)arg2;
- (void)setTarget:(id)arg1;
- (void)setupStackView;
- (id)target;

@end
