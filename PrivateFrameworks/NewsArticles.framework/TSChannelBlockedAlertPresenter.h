/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
 */

@interface TSChannelBlockedAlertPresenter : NSObject <FCSubscriptionObserving> {
    void alertPresenter;
    void enabled;
}

@property (nonatomic) bool enabled;

- (void).cxx_destruct;
- (bool)enabled;
- (id)init;
- (void)setEnabled:(bool)arg1;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7;

@end
