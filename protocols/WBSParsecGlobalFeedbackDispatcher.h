/* Generated by EzioChiu.
 */

@protocol WBSParsecGlobalFeedbackDispatcher <NSObject>

@required

- (void)sendCrowdsourcedAutoFillFeedback:(NSDictionary *)arg1 forQueryID:(long long)arg2;

@optional

- (void)sendAppLaunchFeedback;
- (void)sendAppLostFocusFeedback;
- (void)sendAppQuitFeedback;
- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2;
- (void)sendNewTabFeedback;
- (void)sendNewWindowFeedback;
- (void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(bool)arg1;
- (void)sendWindowCloseByKeyboardFeedback;
- (void)sendWindowCloseByMouseFeedback;
- (void)sendWindowMiniaturizeByKeyboardFeedback;
- (void)sendWindowMiniaturizeByMouseFeedback;

@end
