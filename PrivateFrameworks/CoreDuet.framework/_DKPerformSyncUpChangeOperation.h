/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation {
    NSArray * _deletedEventIDs;
    NSArray * _insertedEvents;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    struct _CDPerfEvent { 
        double startTime; 
        double endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _DKSync2Policy * _policy;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (void)endOperation;
- (void)endPerfMetrics;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 policy:(id)arg4 type:(id)arg5 insertedEvents:(id)arg6 deletedEvents:(id)arg7;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncUpChange;
- (void)startPerfMetrics;

@end
