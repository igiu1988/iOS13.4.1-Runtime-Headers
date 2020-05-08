/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextLayoutFragment : NSObject <NSSecureCoding, NSTextViewportElement> {
    unsigned long long  _animationType;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _destinationBoundingRect;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _destinationGlyphRange;
    NSLayoutManager * _destinationLayoutManager;
    NSTextStorage * _destinationTextStorage;
    double  _destinationVerticalDelta;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutFragmentFrame;
    NSLayoutManager * _layoutManager;
    struct CGPoint { 
        double x; 
        double y; 
    }  _layoutPoint;
    NSOperationQueue * _layoutQueue;
    NSTextRange * _rangeInElement;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceBoundingRect;
    unsigned long long  _sourceRangeDelta;
    unsigned long long  _sourceVerticalDelta;
    unsigned long long  _state;
    NSTextElement * _textElement;
    NSTextLayoutManager * _textLayoutManager;
    NSArray * _textLineFragments;
}

@property (readonly) unsigned long long animationType;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } destinationBoundingRect;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } destinationBoundingRect;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } destinationGlyphRange;
@property NSLayoutManager *destinationLayoutManager;
@property (retain) NSTextStorage *destinationTextStorage;
@property double destinationVerticalDelta;
@property (readonly) unsigned long long hash;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutFragmentFrame;
@property struct CGPoint { double x1; double x2; } layoutFragmentFrameOrigin;
@property (readonly) NSLayoutManager *layoutManager;
@property struct CGPoint { double x1; double x2; } layoutPoint;
@property (retain) NSOperationQueue *layoutQueue;
@property (readonly) struct CGSize { double x1; double x2; } layoutSize;
@property (readonly) NSTextRange *rangeInElement;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } renderingSurfaceBounds;
@property (readonly) NSTextRange *representedRange;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceBoundingRect;
@property unsigned long long state;
@property (readonly) Class superclass;
@property NSTextElement *textElement;
@property NSTextLayoutManager *textLayoutManager;
@property (readonly) NSTextLayoutManager *textLayoutManager;
@property (copy) NSArray *textLineFragments;

+ (id)layoutFragmentQueue;
+ (bool)supportsSecureCoding;

- (void)_layout;
- (void)_setup;
- (unsigned long long)animationType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })destinationBoundingRect;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })destinationGlyphRange;
- (id)destinationLayoutManager;
- (id)destinationTextStorage;
- (double)destinationVerticalDelta;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 contentType:(unsigned long long)arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)estimateSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayoutManager:(id)arg1 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 animationType:(unsigned long long)arg3 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)initWithTextElement:(id)arg1 range:(id)arg2;
- (void)invalidateLayout;
- (void)layout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFragmentFrame;
- (struct CGPoint { double x1; double x2; })layoutFragmentFrameOrigin;
- (id)layoutManager;
- (struct CGPoint { double x1; double x2; })layoutPoint;
- (id)layoutQueue;
- (struct CGSize { double x1; double x2; })layoutSize;
- (id)rangeInElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderingSurfaceBounds;
- (id)representedRange;
- (id)representedRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDestinationBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDestinationGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDestinationLayoutManager:(id)arg1;
- (void)setDestinationTextStorage:(id)arg1;
- (void)setDestinationVerticalDelta:(double)arg1;
- (void)setLayoutFragmentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutFragmentFrameOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayoutPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayoutQueue:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTextElement:(id)arg1;
- (void)setTextLayoutManager:(id)arg1;
- (void)setTextLineFragments:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceBoundingRect;
- (unsigned long long)state;
- (id)textElement;
- (id)textLayoutManager;
- (id)textLineFragments;

@end
