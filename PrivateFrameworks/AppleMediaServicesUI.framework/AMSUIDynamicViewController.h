/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIDynamicViewController : UIViewController <AMSBagConsumer> {
    AMSUIDynamicViewController * _dynamicViewController;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AMSUIDynamicViewController *dynamicViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *metricsOverlay;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (void).cxx_destruct;
- (void)_setup;
- (void)_setupChildViewController:(id)arg1;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)dynamicViewController;
- (id)initWithBag:(id)arg1 javaScriptBagValue:(id)arg2;
- (id)initWithBag:(id)arg1 javaScriptURL:(id)arg2;
- (id)metricsOverlay;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
