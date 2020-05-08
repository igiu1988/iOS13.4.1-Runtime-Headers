/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISLayer : NSObject {
    ISColor * _backgroundColor;
    <ISCompositorResource> * _content;
    <ISEffect> * _effect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSMutableArray * _internalSublayers;
    ISLayer * _internalSuperlayer;
    ISLayer * _mask;
    NSString * _name;
}

@property (nonatomic, retain) ISColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, retain) <ISCompositorResource> *content;
@property (nonatomic, retain) <ISEffect> *effect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) NSMutableArray *internalSublayers;
@property (nonatomic) ISLayer *internalSuperlayer;
@property (nonatomic, retain) ISLayer *mask;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly, copy) NSArray *sublayers;
@property (nonatomic, readonly) ISLayer *superlayer;

- (void).cxx_destruct;
- (void)addSublayer:(id)arg1;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)content;
- (id)debugDescription;
- (id)effect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (id)internalSublayers;
- (id)internalSuperlayer;
- (id)mask;
- (id)name;
- (struct CGPoint { double x1; double x2; })position;
- (void)removeFromSuperlayer;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContent:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInternalSuperlayer:(id)arg1;
- (void)setMask:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)sublayers;
- (id)superlayer;

@end
