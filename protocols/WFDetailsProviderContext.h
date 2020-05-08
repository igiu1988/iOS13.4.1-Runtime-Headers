/* Generated by EzioChiu.
 */

@protocol WFDetailsProviderContext <WFProviderContext>

@required

- (bool)autoJoinEnabled;
- (bool)autoLoginEnabled;
- (bool)diagnosable;
- (<WFDiagnosticsProviderContext> *)diagnosticsContext;
- (void)forget;
- (bool)isCurrent;
- (bool)isInSaveDataMode;
- (bool)isKnownNetwork;
- (void)join;
- (void)manage;
- (void)openRecommendationLink;
- (NSArray *)recommendations;
- (void)renewLease;
- (void)setAutoJoinEnabled:(bool)arg1;
- (void)setAutoLoginEnabled:(bool)arg1;
- (void)setDiagnosable:(bool)arg1;
- (void)setIsInSaveDataMode:(bool)arg1;

@end
