/* Generated by EzioChiu.
 */

@protocol NSTextViewportElement <NSObject>

@required

- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 context:(struct CGContext { }*)arg2;
- (struct CGPoint { double x1; double x2; })layoutPoint;
- (struct CGSize { double x1; double x2; })layoutSize;
- (NSTextRange *)representedRange;
- (NSTextRange *)representedRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayoutPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
