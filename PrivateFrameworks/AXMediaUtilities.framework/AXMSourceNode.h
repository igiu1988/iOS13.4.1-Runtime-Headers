/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMSourceNode : AXMVisionEngineNode <NSSecureCoding> {
    NSMutableArray * _nodeQueue_resultHandlers;
    bool  _shouldProcessRemotely;
}

@property (nonatomic) bool shouldProcessRemotely;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_nodeQueue_addResultHandler:(id /* block */)arg1;
- (void)_nodeQueue_removeAllResultHandlers;
- (void)_nodeQueue_removeResultHandler:(id /* block */)arg1;
- (void)addResultHandler:(id /* block */)arg1;
- (void)nodeInitialize;
- (void)produceImage:(id)arg1;
- (void)removeAllResultHandlers;
- (void)removeResultHandler:(id /* block */)arg1;
- (id)resultHandlers;
- (void)setShouldProcessRemotely:(bool)arg1;
- (bool)shouldProcessRemotely;
- (void)triggerWithContext:(id)arg1 cacheKey:(id)arg2 resultHandler:(id /* block */)arg3;

@end
