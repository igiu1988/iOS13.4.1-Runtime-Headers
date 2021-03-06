/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFMDMVerifier : NSObject {
    NSString * _actionName;
    NSArray * _contentSources;
}

@property (nonatomic, readonly, copy) NSString *actionName;
@property (nonatomic, readonly, copy) NSArray *contentSources;

+ (id)dataInfosFromContentSources:(id)arg1 withManagedLevel:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)actionName;
- (bool)canSendDataToTargetDataInfo:(id)arg1 error:(id*)arg2;
- (id)contentSources;
- (id)errorFromFailedVerificationContentSources:(id)arg1 targetDataInfo:(id)arg2 destinationManagedLevel:(unsigned long long)arg3;
- (id)initWithAction:(id)arg1;
- (id)initWithContentSources:(id)arg1 actionName:(id)arg2;

@end
