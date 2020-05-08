/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBViewSnapshotProvider : NSObject {
    id /* block */  _completionBlock;
    long long  _orientation;
    UIView * _view;
}

@property (nonatomic, copy) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)initWithView:(id)arg1 orientation:(long long)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)snapshot;
- (void)snapshotAsynchronously:(bool)arg1 withImageBlock:(id /* block */)arg2;
- (void)snapshotWithImageBlock:(id /* block */)arg1;

@end
