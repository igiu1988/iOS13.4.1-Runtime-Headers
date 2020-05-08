/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFVariableEditingContext : NSObject {
    bool  _editingVariable;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    WFVariable * _variable;
}

@property (nonatomic, readonly) bool editingVariable;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, readonly) WFVariable *variable;

+ (id)newWithVariable:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 editingVariable:(bool)arg3;

- (void).cxx_destruct;
- (bool)editingVariable;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)variable;

@end
