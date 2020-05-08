/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFGlyphView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _glyphInsets;
    WFWorkflowIconDrawer * _iconDrawer;
}

@property (nonatomic) unsigned short glyphCharacter;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } glyphInsets;
@property (nonatomic, readonly) WFWorkflowIconDrawer *iconDrawer;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned short)glyphCharacter;
- (id)glyphColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })glyphInsets;
- (id)iconDrawer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGlyphCharacter:(unsigned short)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setGlyphInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
