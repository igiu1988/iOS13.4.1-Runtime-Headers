/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFWebsitePolicyMonitor : NSObject {
    NSUUID * _identifier;
    NSArray * _policyTypes;
}

@property (getter=isEnabled, readonly) bool enabled;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, copy) NSArray *policyTypes;

- (void).cxx_destruct;
- (void)_fetchCategoriesIfNeededForWebsiteURLs:(id)arg1 response:(id /* block */)arg2;
- (void)dealloc;
- (id)identifier;
- (id)initWithPolicyChangeHandler:(id /* block */)arg1;
- (bool)isEnabled;
- (id)policyTypes;
- (void)requestPoliciesForWebsites:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPolicyTypes:(id)arg1;

@end
