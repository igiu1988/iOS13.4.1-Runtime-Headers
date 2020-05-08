/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionComponentInteractionHandlerFactory : NSObject <SXActionComponentInteractionHandlerFactory> {
    <SXActionManager> * _actionManager;
    <SXActionSerializer> * _actionSerializer;
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
}

@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (nonatomic, readonly) <SXActionSerializer> *actionSerializer;
@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionManager;
- (id)actionSerializer;
- (id)analyticsReportingProvider;
- (id)initWithActionManager:(id)arg1 actionSerializer:(id)arg2 analyticsReportingProvider:(id)arg3;
- (id)interactionHandlerForAction:(id)arg1;

@end
