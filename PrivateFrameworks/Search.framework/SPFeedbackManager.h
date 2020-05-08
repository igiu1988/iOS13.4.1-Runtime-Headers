/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedbackManager : NSObject <SFFeedbackListener> {
    NSObject<SFFeedbackListener> * _feedbackListener;
    NSObject<OS_dispatch_queue> * _feedbackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<SFFeedbackListener> *feedbackListener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *feedbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)bumpPriorityOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)flushFeedbackWithCompletion:(id /* block */)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_sendFeedback:(id)arg1 type:(long long)arg2;
- (void)_sendFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)didAppendLateSections:(id)arg1;
- (void)didClearInput:(id)arg1;
- (void)didEndSearch:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didEngageSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didGradeResultRelevancy:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)didReceiveResultsAfterTimeout:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (id)feedbackListener;
- (id)feedbackQueue;
- (id)init;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)sectionHeaderDidBecomeVisible:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)setFeedbackListener:(id)arg1;
- (void)setFeedbackQueue:(id)arg1;
- (void)suggestionsDidBecomeVisible:(id)arg1;

@end
