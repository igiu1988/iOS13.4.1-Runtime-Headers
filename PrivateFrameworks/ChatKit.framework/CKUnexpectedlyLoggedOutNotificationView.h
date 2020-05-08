/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKUnexpectedlyLoggedOutNotificationView : UIView <CKTwoButtonInlineNotificationViewDelegate> {
    <CKUnexpectedlyLoggedOutNotificationViewDelegate> * _delegate;
    CKTwoButtonInlineNotificationView * _inlineNotificationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKUnexpectedlyLoggedOutNotificationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKTwoButtonInlineNotificationView *inlineNotificationView;
@property (readonly) Class superclass;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlineNotificationView;
- (void)inlineNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2;
- (void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg1;
- (void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setInlineNotificationView:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)visible;

@end
