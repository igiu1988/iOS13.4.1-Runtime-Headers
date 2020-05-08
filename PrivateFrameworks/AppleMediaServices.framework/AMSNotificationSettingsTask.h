/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSNotificationSettingsTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
    NSString * _identifier;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (void).cxx_destruct;
- (id)_generateParametersForItems:(id)arg1;
- (id)account;
- (id)bag;
- (id)clientInfo;
- (id)fetchAllSettings;
- (id)fetchSettingForIdentifier:(id)arg1;
- (id)fetchSettingsForSections:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (id)updateSettings:(id)arg1;

@end
