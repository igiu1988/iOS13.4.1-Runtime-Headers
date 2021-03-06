/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)homeAccessoryActionWithHome:(id)arg1;
+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1;

- (void)dealloc;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeName;
- (void)initializeParameters;
- (id)localizedAttribution;
- (id)localizedDescriptionSummary;
- (id)localizedName;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)triggerActionSetsBuilder;

// Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI

- (id)localizedFooter;

@end
