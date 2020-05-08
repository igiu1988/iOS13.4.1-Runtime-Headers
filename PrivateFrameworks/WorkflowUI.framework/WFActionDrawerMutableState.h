/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerMutableState : WFActionDrawerState

@property (nonatomic, retain) WFAction *action;
@property (nonatomic) long long activePane;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *categoryName;
@property (getter=isFocusedOnSearchBar, nonatomic) bool focusedOnSearchBar;
@property (nonatomic, retain) NSIndexPath *listPosition;
@property (nonatomic, retain) WFActionDrawerResults *listResults;
@property (nonatomic, retain) WFActionDrawerState *precedingState;
@property (nonatomic, copy) NSString *searchQuery;

@end
