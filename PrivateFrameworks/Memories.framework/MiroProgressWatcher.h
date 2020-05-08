/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroProgressWatcher : NSObject {
    id  _observedObject;
    float  _progress;
    id /* block */  _progressHandler;
}

@property (nonatomic, retain) id observedObject;
@property (nonatomic) float progress;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedObject;
- (float)progress;
- (id /* block */)progressHandler;
- (void)setObservedObject:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
