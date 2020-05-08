/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

@interface PSUILowDataModeSpecifier : PSSpecifier {
    CoreTelephonyClient * _ctClient;
    PSListController * _hostController;
    CTServiceDescriptor * _serviceDescriptor;
}

@property (nonatomic, retain) CoreTelephonyClient *ctClient;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) CTServiceDescriptor *serviceDescriptor;

- (void).cxx_destruct;
- (id)ctClient;
- (id)hostController;
- (id)initWithFactory:(id)arg1 hostController:(id)arg2 parentSpecifier:(id)arg3;
- (id)isLowDataModeEnabled:(id)arg1;
- (id)serviceDescriptor;
- (void)setCtClient:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setLowDataMode:(id)arg1 specifier:(id)arg2;
- (void)setServiceDescriptor:(id)arg1;

@end
