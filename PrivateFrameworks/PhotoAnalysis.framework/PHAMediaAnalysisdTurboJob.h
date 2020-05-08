/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAMediaAnalysisdTurboJob : PHAWorkerJob {
    bool  _complete;
    PHPhotoLibrary * _library;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _requestId;
}

- (void).cxx_destruct;
- (float)completionScore;
- (bool)finished;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;
- (void)requestCompleted;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;

@end
