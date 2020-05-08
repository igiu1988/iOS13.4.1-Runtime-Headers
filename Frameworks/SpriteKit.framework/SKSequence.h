/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKSequence : SKAction {
    NSArray * _actions;
    unsigned long long  _animIndex;
    struct SKCSequence { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; bool x6; double x7; double x8; float x9; float x10; double x11; bool x12; bool x13; id /* block */ x14; long long x15; float x16; float x17; float x18; float x19; struct vector<SKCAction *, std::__1::allocator<SKCAction *> > { struct SKCAction {} **x_20_1_1; struct SKCAction {} **x_20_1_2; struct __compressed_pair<SKCAction **, std::__1::allocator<SKCAction *> > { struct SKCAction {} **x_3_2_1; } x_20_1_3; } x20; unsigned long long x21; } * _mycaction;
}

+ (id)sequenceWithActions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (id)subactions;

@end
