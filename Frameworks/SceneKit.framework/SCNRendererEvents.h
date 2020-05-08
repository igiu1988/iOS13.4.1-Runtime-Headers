/* Generated by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNRendererEvents : NSObject {
    <MTLEvent> * _signalEvent;
    unsigned long long  _signalFrame;
    <MTLEvent> * _waitEvent;
    unsigned long long  _waitFrame;
}

@property (nonatomic, retain) <MTLEvent> *signalEvent;
@property (nonatomic) unsigned long long signalFrame;
@property (nonatomic, retain) <MTLEvent> *waitEvent;
@property (nonatomic) unsigned long long waitFrame;

- (void)dealloc;
- (void)setSignalEvent:(id)arg1;
- (void)setSignalFrame:(unsigned long long)arg1;
- (void)setWaitEvent:(id)arg1;
- (void)setWaitFrame:(unsigned long long)arg1;
- (void)signalAfterSubmittingRender:(id)arg1;
- (id)signalEvent;
- (unsigned long long)signalFrame;
- (void)waitBeforeSubmittingRender:(id)arg1;
- (id)waitEvent;
- (unsigned long long)waitFrame;

@end
