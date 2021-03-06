/* Generated by EzioChiu.
 */

@protocol HMDSettingsMessageHandlerProtocol <NSObject>

@required

- (void)configureForSetting:(NSUUID *)arg1;
- (void)configureForSettingGroup:(NSUUID *)arg1;
- (void)setMessageController:(id <HMDSettingsMessageController>)arg1;
- (void)unconfigureFromSetting:(NSUUID *)arg1;
- (void)unconfigureFromSettingGroup:(NSUUID *)arg1;

@end
