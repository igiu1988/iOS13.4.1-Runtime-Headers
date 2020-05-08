/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailURLCell : EKEventDetailCell <UITextViewDelegate> {
    UILabel * _URLTitleView;
    UITextView * _URLView;
    int  _lastLayoutPosition;
    SGSuggestedEventLaunchInfo * _launchInfo;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_SGSuggestionsServiceClass;

- (void).cxx_destruct;
- (id)_URLTitleView;
- (id)_URLView;
- (void)_layoutForWidth:(double)arg1 position:(int)arg2;
- (id)initWithEvent:(id)arg1 launchInfo:(id)arg2 editable:(bool)arg3 style:(long long)arg4;
- (id)initWithEvent:(id)arg1 url:(id)arg2 editable:(bool)arg3 style:(long long)arg4;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (bool)update;
- (bool)updateLink;
- (void)updateLinkWithLaunchInfo;
- (void)updateLinkWithURL;

@end
