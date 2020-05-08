/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFConfiguredTriggerRealmObject : RLMObject <WFRecordStorage> {
    bool  _enabled;
    bool  _shouldPrompt;
    NSData * _triggerData;
    NSString * _triggerID;
    NSString * _workflowID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldPrompt;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *triggerData;
@property (nonatomic, copy) NSString *triggerID;
@property (nonatomic, copy) NSString *workflowID;

+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)requiredProperties;

- (void).cxx_destruct;
- (void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(id /* block */)arg2;
- (id)descriptor;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setShouldPrompt:(bool)arg1;
- (void)setTriggerData:(id)arg1;
- (void)setTriggerID:(id)arg1;
- (void)setWorkflowID:(id)arg1;
- (bool)shouldPrompt;
- (id)trigger;
- (id)triggerData;
- (id)triggerID;
- (id)workflowID;

@end
