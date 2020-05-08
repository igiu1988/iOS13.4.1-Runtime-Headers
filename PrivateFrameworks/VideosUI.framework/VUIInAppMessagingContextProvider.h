/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIInAppMessagingContextProvider : NSObject <IAMApplicationContextProvider> {
    IAMPresentationPolicy * _normalPolicy;
    IAMPresentationPolicy * _restrictedPolicy;
    NSMutableSet * _subscriptionProperties;
}

@property (readonly) bool allowsModalMessageDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastMessageDisplayTime;
@property (nonatomic, retain) IAMPresentationPolicy *normalPolicy;
@property (nonatomic, retain) IAMPresentationPolicy *restrictedPolicy;
@property (nonatomic, retain) NSMutableSet *subscriptionProperties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_runSubscriptionQuery:(id)arg1;
- (id)_stringValueForKeyPath:(id)arg1 dictionary:(id)arg2;
- (bool)allowsModalMessageDisplay;
- (id)contextPropertyWithName:(id)arg1;
- (id)init;
- (id)normalPolicy;
- (id)presentationPolicyForPolicyGroup:(long long)arg1;
- (id)queriedSubscriptionProperties;
- (id)restrictedPolicy;
- (void)setNormalPolicy:(id)arg1;
- (void)setRestrictedPolicy:(id)arg1;
- (void)setSubscriptionProperties:(id)arg1;
- (id)subscriptionProperties;
- (id)viewControllerForModalPresentation;

@end
