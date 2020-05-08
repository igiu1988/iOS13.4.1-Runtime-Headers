/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextLineFragment : NSObject <NSSecureCoding> {
    struct CGSize { double x1; double x2; } * _advances;
    NSAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    UIFont * _font;
    long long  _glyphCount;
    unsigned short * _glyphs;
    struct __CTLine { } * _lineRef;
    struct CGPoint { 
        double x; 
        double y; 
    }  glyphOrigin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  typographicBounds;
}

@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property struct CGPoint { double x1; double x2; } glyphOrigin;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } typographicBounds;

+ (bool)supportsSecureCoding;

- (id)attributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsWithType:(long long)arg1 options:(unsigned long long)arg2;
- (long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 fractionOfDistanceThroughGlyph:(double*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 graphicsContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })glyphOrigin;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct CGPoint { double x1; double x2; })locationForCharacterAtIndex:(long long)arg1;
- (unsigned long long)numberOfGlyphs;
- (void)setGlyphOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGlyphs:(const unsigned short*)arg1 advances:(const struct CGSize { double x1; double x2; }*)arg2 count:(long long)arg3 font:(id)arg4;
- (void)setLineRef:(struct __CTLine { }*)arg1;
- (void)setTypographicBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicUsedBounds;

@end
