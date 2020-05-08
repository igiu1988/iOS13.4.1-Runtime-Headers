/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStreamStartStopState : NSObject {
    BWStreamStartStopState * _blockingMasterState;
    NSArray * _blockingSlaveStates;
    NSObject<OS_dispatch_group> * _dependentsHaveStoppedGroup;
    bool  _hasEnteredStartedGroup;
    NSObject<OS_dispatch_group> * _hasStartedGroup;
    BWFigVideoCaptureStream * _stream;
    float  _timeoutInSeconds;
    bool  _waitForMasterAEToSettle;
}

@property (nonatomic, retain) NSArray *blockingSlaveStates;
@property (nonatomic, readonly) BWFigVideoCaptureStream *stream;
@property (nonatomic) bool waitForMasterAEToSettle;

- (id)blockingSlaveStates;
- (void)dealloc;
- (void)dependentDidStop;
- (bool)dependentWillStart;
- (id)description;
- (id)initWithStream:(id)arg1 masterState:(id)arg2 timeoutInSeconds:(float)arg3;
- (void)setBlockingSlaveStates:(id)arg1;
- (void)setWaitForMasterAEToSettle:(bool)arg1;
- (id)stream;
- (void)streamDidStart;
- (void)streamDidStop;
- (bool)streamWillStart;
- (bool)streamWillStop;
- (bool)waitForMasterAEToSettle;

@end
