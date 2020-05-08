/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand> {
    NSMutableArray * _commands;
    NSMutableDictionary * _seen;
}

@property (nonatomic, retain) NSMutableArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *seen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCommand:(id)arg1;
- (bool)addSeenRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1;
- (bool)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (void)closeGroup;
- (id)commands;
- (id)description;
- (bool)hasTopoIDsThatCanChange;
- (id)init;
- (id)seen;
- (void)setCommands:(id)arg1;
- (void)setSeen:(id)arg1;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;

@end
