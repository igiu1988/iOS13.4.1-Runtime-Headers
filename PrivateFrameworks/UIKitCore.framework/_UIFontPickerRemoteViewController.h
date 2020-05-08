/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFontPickerRemoteViewController : _UIRemoteViewController <_UIFontPickerRemoteViewControllerHost> {
    <_UIFontPickerRemoteViewControllerHost> * _delegate;
}

@property (nonatomic) <_UIFontPickerRemoteViewControllerHost> *_delegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_delegate;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)arg1;
- (void)set_delegate:(id)arg1;

@end
