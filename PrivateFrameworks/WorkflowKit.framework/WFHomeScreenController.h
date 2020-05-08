/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFHomeScreenController : NSObject

+ (bool)addWorkflowToHomeScreen:(id)arg1 withName:(id)arg2 icon:(id)arg3 error:(id*)arg4;
+ (void)drawIcon:(id)arg1 maxSize:(double)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)iconImageForIcon:(id)arg1;
+ (id)launchImageForIcon:(id)arg1 inLandscape:(bool)arg2;
+ (void)migrateWebClipsIfNeeded;

@end
