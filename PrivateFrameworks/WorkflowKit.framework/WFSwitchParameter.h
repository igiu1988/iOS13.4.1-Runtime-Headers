/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFSwitchParameter : WFParameter <WFModuleSummarySupporting> {
    NSString * _localizedOffDisplayName;
    NSString * _localizedOnDisplayName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedOffDisplayName;
@property (nonatomic, readonly) NSString *localizedOnDisplayName;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)defaultOffDisplayName;
+ (id)defaultOnDisplayName;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)arg1;
- (id)localizedOffDisplayName;
- (id)localizedOnDisplayName;
- (Class)singleStateClass;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)moduleSummarySlotForState:(id)arg1;

@end
