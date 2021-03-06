/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDClinicalSourcesDataProviderSafariDelegate : NSObject <SFSafariViewControllerDelegate> {
    HKHealthRecordsStore * _healthRecordsStore;
    NSURL * _loginURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, retain) NSURL *loginURL;
@property (readonly) Class superclass;

+ (id)sharedSafariDelegate;

- (void).cxx_destruct;
- (id)_init;
- (id)healthRecordsStore;
- (id)init;
- (id)loginURL;
- (id)safariViewController:(id)arg1 excludedActivityTypesForURL:(id)arg2 title:(id)arg3;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setHealthRecordsStore:(id)arg1;
- (void)setLoginURL:(id)arg1;

@end
