/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SASActivationCondition : NSObject {
    NSDictionary * _analyticsContext;
    bool  _buttonTriggerStateActive;
    SASSiriPocketStateManager * _pocketStateManager;
    AFPreferences * _preferences;
    SASActivationRequest * _request;
    long long  _requestState;
    SASSystemState * _systemState;
}

@property (nonatomic, retain) NSDictionary *analyticsContext;
@property (nonatomic) bool buttonTriggerStateActive;
@property (nonatomic, retain) SASSiriPocketStateManager *pocketStateManager;
@property (nonatomic, retain) AFPreferences *preferences;
@property (nonatomic, retain) SASActivationRequest *request;
@property (nonatomic) long long requestState;
@property (nonatomic, retain) SASSystemState *systemState;

- (void).cxx_destruct;
- (id)analyticsContext;
- (bool)buttonTriggerStateActive;
- (id)pocketStateManager;
- (id)preferences;
- (id)request;
- (long long)requestState;
- (void)setAnalyticsContext:(id)arg1;
- (void)setButtonTriggerStateActive:(bool)arg1;
- (void)setPocketStateManager:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestState:(long long)arg1;
- (void)setSystemState:(id)arg1;
- (id)systemState;

@end
