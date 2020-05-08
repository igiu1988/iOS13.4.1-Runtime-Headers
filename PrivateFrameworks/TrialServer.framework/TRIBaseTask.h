/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIBaseTask : NSObject <TRITask> {
    TRIClient * _client;
    TRIExperimentDatabase * _database;
}

@property (nonatomic, retain) TRIExperimentDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSDate *startTime;
@property (readonly) Class superclass;
@property (readonly) NSArray *tags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)database;
- (id)dependencies;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)logMetrics:(id)arg1;
- (void)logMetrics:(id)arg1 usingClient:(id)arg2;
- (void)logMetrics:(id)arg1 withDimensions:(id)arg2 usingClient:(id)arg3;
- (id)nextTasksForRunStatus:(int)arg1;
- (int)run;
- (int)runTask;
- (void)setDatabase:(id)arg1;
- (void)setup;
- (id)startTime;
- (id)tags;

@end
