/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSNotificationServiceConnection : NSObject {
    NSXPCConnection * _serviceConnection;
}

@property (nonatomic, retain) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)dealloc;
- (void)didReceiveNotificationResponse:(id)arg1;
- (void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(bool)arg3 withReply:(id /* block */)arg4;
- (id)serviceConnection;
- (void)setServiceConnection:(id)arg1;

@end
