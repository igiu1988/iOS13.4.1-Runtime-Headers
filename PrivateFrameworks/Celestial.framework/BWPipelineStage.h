/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPipelineStage : NSObject {
    NSObject<OS_dispatch_group> * _executionGroup;
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSMutableArray * _inputsForQueuedMessages;
    NSString * _name;
    unsigned int  _priority;
    NSMutableArray * _queuedMessages;
    bool  _stillImagePipelineStage;
    NSString * _stillImagePipelineStageEntryNodeName;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int priority;
@property (nonatomic, readonly) bool stillImagePipelineStage;
@property (nonatomic, readonly) NSString *stillImagePipelineStageEntryNodeName;

+ (id)_currentPipelineStage;
+ (void)_setCurrentPipelineStage:(id)arg1;
+ (void)initialize;
+ (id)pipelineStageForStillImagesWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned int)arg3;
+ (id)pipelineStageForStillImagesWithName:(id)arg1 priority:(unsigned int)arg2;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2;
+ (id)pipelineStageWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(bool)arg3;

- (id)_initStillImagePipelineStageWithName:(id)arg1 entryNodeName:(id)arg2 priority:(unsigned int)arg3;
- (id)_initWithName:(id)arg1 priority:(unsigned int)arg2 discardsLateSampleData:(bool)arg3;
- (bool)_isCurrentPipelineStage;
- (void)_serviceQueuedMessages;
- (void)dealloc;
- (id)description;
- (id)name;
- (unsigned int)priority;
- (void)sendMessage:(id)arg1 toInput:(id)arg2;
- (bool)stillImagePipelineStage;
- (id)stillImagePipelineStageEntryNodeName;

@end
