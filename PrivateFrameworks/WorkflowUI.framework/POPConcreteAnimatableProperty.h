/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface POPConcreteAnimatableProperty : POPAnimatableProperty {
    NSString * name;
    id /* block */  readBlock;
    double  threshold;
    id /* block */  writeBlock;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 readBlock:(id /* block */)arg2 writeBlock:(id /* block */)arg3 threshold:(double)arg4;
- (id)name;
- (id /* block */)readBlock;
- (double)threshold;
- (id /* block */)writeBlock;

@end
