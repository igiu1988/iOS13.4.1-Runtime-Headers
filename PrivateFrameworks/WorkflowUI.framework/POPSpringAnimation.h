/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface POPSpringAnimation : POPPropertyAnimation

@property (nonatomic) double dynamicsFriction;
@property (nonatomic) double dynamicsMass;
@property (nonatomic) double dynamicsTension;
@property (nonatomic) double springBounciness;
@property (nonatomic) double springSpeed;
@property (nonatomic, copy) id velocity;

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
+ (void)convertBounciness:(double)arg1 speed:(double)arg2 toTension:(double*)arg3 friction:(double*)arg4 mass:(double*)arg5;
+ (void)convertTension:(double)arg1 friction:(double)arg2 toBounciness:(double*)arg3 speed:(double*)arg4;

- (void)_appendDescription:(id)arg1 debug:(bool)arg2;
- (void)_initState;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsMass;
- (void)_updatedDynamicsTension;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)dynamicsFriction;
- (double)dynamicsMass;
- (double)dynamicsTension;
- (id)init;
- (void)setDynamicsFriction:(double)arg1;
- (void)setDynamicsMass:(double)arg1;
- (void)setDynamicsTension:(double)arg1;
- (void)setSolver:(struct SpringSolver<POP::Vector4<double> > { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct SSState<POP::Vector4<double> > { struct Vector4<double> { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_8_1_1; struct Vector4<double> { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_8_1_2; } x8; struct Vector4<double> { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; } x9; bool x10; }*)arg1;
- (void)setSpringBounciness:(double)arg1;
- (void)setSpringSpeed:(double)arg1;
- (void)setVelocity:(id)arg1;
- (struct SpringSolver<POP::Vector4<double> > { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct SSState<POP::Vector4<double> > { struct Vector4<double> { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_8_1_1; struct Vector4<double> { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_8_1_2; } x8; struct Vector4<double> { double x_9_1_1; double x_9_1_2; double x_9_1_3; double x_9_1_4; } x9; bool x10; }*)solver;
- (double)springBounciness;
- (double)springSpeed;
- (id)velocity;

@end
