/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKTextField : UITextField <GKTextStyleReplay> {
    GKTextStyle * _appliedStyle;
    GKTextStyle * _baseStyle;
}

@property (nonatomic, retain) GKTextStyle *appliedStyle;
@property (nonatomic, retain) GKTextStyle *baseStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (id)baseStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)replayAndApplyStyleWithSystemContentChange:(bool)arg1;
- (void)setAppliedStyle:(id)arg1;
- (void)setBaseStyle:(id)arg1;

@end
