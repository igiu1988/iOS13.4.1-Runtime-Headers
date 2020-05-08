/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
 */

@interface DNNEspressoModel : NSObject {
    void * _ctx;
    int  _engine;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    void * _plan;
    int  _storage;
}

@property (nonatomic) void*ctx;
@property (nonatomic) int engine;
@property (nonatomic) struct { void *x1; int x2; } net;
@property (nonatomic) void*plan;
@property int storage;

- (void*)ctx;
- (void)dealloc;
- (int)engine;
- (bool)initializeInputOutputBlobs;
- (bool)loadNetworkWithName:(id)arg1 runningMode:(long long)arg2;
- (struct { void *x1; int x2; })net;
- (void*)plan;
- (void)setCtx:(void*)arg1;
- (void)setEngine:(int)arg1;
- (void)setNet:(struct { void *x1; int x2; })arg1;
- (void)setPlan:(void*)arg1;
- (void)setStorage:(int)arg1;
- (int)storage;

@end