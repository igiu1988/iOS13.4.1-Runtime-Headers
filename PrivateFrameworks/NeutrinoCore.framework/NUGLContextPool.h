/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLContextPool : NSObject {
    NSMutableArray * _contexts;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedContextPool;

- (void).cxx_destruct;
- (id)_newContext;
- (void)_returnContext:(id)arg1;
- (id)init;
- (id)newContext;
- (id)newContextForDevice:(id)arg1;
- (void)returnContext:(id)arg1;

@end