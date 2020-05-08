/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebButtonModel : AMSUIWebModel {
    <AMSUIWebActionRunnable> * _action;
    bool  _bold;
    bool  _enabled;
    NSString * _title;
    NSDictionary * _underlyingJSObject;
}

@property (nonatomic, retain) <AMSUIWebActionRunnable> *action;
@property (nonatomic) bool bold;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSDictionary *underlyingJSObject;

- (void).cxx_destruct;
- (id)action;
- (bool)bold;
- (id)createDialogAction;
- (bool)enabled;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (void)setAction:(id)arg1;
- (void)setBold:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnderlyingJSObject:(id)arg1;
- (id)title;
- (id)underlyingJSObject;

@end
