/* Generated by EzioChiu.
 */

@protocol WFVariableDataSource

@required

- (WFContentCollection *)contentForVariableWithName:(NSString *)arg1;
- (bool)setContent:(WFContentCollection *)arg1 forVariableWithName:(NSString *)arg2;
- (WFContentCollection *)workflowInput;

@end