/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextPlainLinkInteractionHandler : NSObject <_UITextItemInteractionHandler> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    UIView<_UITextContent> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addLinkToReadingListAction:(id)arg1;
- (id)_copyLinkAction:(id)arg1;
- (id /* block */)_handlerRequiringUnlockedDevice:(id /* block */)arg1;
- (id)_openAppLinkInDefaultBrowserAction:(id)arg1;
- (id)_openAppLinkInExternalApplicationAction:(id)arg1;
- (id)_openURLAction:(id)arg1;
- (id)_shareLinkAction:(id)arg1;
- (id)_titleForLink:(id)arg1;
- (id)contextMenuConfiguration;
- (id)defaultAction;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inTextContentView:(id)arg3;
- (id)link;

@end