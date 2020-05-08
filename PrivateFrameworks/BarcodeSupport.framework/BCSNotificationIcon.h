/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSNotificationIcon : NSObject {
    <BCSAction> * _action;
}

@property (nonatomic, readonly, copy) NSURL *imageURL;

+ (id)nfcIcon;
+ (id)qrCodeIcon;

- (void).cxx_destruct;
- (id)_notificationIconBaseURL;
- (id)_notificationIconDataURLForApp:(id)arg1 scale:(float)arg2;
- (id)imageURL;
- (id)initWithAction:(id)arg1;

@end
