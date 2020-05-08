/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/AutomaticAssessmentConfiguration
 */

@interface AEAssessmentSession : NSObject <AACDependencies.AEDBackingAssessmentSessionDelegate> {
    _TtC15AACDependencies27AEDBackingAssessmentSession * _backingSession;
    <AEAssessmentSessionDelegate> * _delegate;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) _TtC15AACDependencies27AEDBackingAssessmentSession *backingSession;
@property (nonatomic) <AEAssessmentSessionDelegate> *delegate;

+ (id)backingConfigForConfig:(id)arg1;

- (void).cxx_destruct;
- (void)backingAssessmentSessionDidBegin:(id)arg1;
- (void)backingAssessmentSessionDidEnd:(id)arg1;
- (void)backingAssessmentSessionDidFailToBegin:(id)arg1 error:(id)arg2;
- (void)backingAssessmentSessionDidInterrupt:(id)arg1 error:(id)arg2;
- (id)backingSession;
- (void)begin;
- (id)delegate;
- (void)end;
- (id)initWithConfiguration:(id)arg1;
- (bool)isActive;
- (void)setDelegate:(id)arg1;

@end