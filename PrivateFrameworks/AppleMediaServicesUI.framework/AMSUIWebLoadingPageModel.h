/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebLoadingPageModel : AMSUIWebModel <AMSUIWebPageProvider> {
    AMSUIWebClientContext * _context;
    bool  _disableDelay;
    NSString * _message;
    AMSUIWebNavigationBarModel * _navigationBar;
}

@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableDelay;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)createViewController;
- (bool)disableDelay;
- (bool)disableReappearPlaceholder;
- (id)initWithContext:(id)arg1;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)message;
- (id)navigationBar;
- (void)setContext:(id)arg1;
- (void)setDisableDelay:(bool)arg1;
- (void)setMessage:(id)arg1;

@end
